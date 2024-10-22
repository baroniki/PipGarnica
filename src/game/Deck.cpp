#include "Deck.h"

#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QSettings>

#include <memory>
#include <ranges>
#include <numeric>


Deck::Deck() {
    // initialize all cards from setup file
    QSettings settings("PipGarnicaConfig.ini", QSettings::Format::IniFormat);
    parseCardFiles(settings.value("Setup/CardListPath").toString());
}

void Deck::flipCards() {
    std::ranges::for_each(m_Cards, [](auto card) {
        card->flip();
    });
}

void Deck::shuffleCards() {
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(m_Cards.begin(), m_Cards.end(), g);
}

bool Deck::parseCardFiles(const QString& t_file_path) {
    QFile file(t_file_path);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream in(&file);

    QString line = in.readLine(); // skipping first line

    while (!in.atEnd()) {
        line = in.readLine();
        QStringList cols =  line.split(';');

        QString front_name = cols[1];
        QString front_desc = cols[2];
        Color front_color = stringToColor.at(cols[0].toStdString());
        QString back_name = cols[4];
        QString back_desc = cols[5];
        Color back_color = stringToColor.at(cols[3].toStdString());

        m_Cards.emplace_back(std::make_shared<Card>(front_name, front_desc, front_color, back_name, back_desc, back_color));
    }

    return true;
}

QString Deck::print() const {
    auto transform_range = m_Cards | std::views::transform([](auto card) {
        return card->print();
    });

    return std::accumulate(transform_range.begin(), transform_range.end(), QString());
}