#include <QApplication>
#include <QPushButton>
#include <QSettings>
#include <QString>
#include <iostream>

#include "game/PipGarnica.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QPushButton button("Dev is prude");
    button.show();

    QSettings settings("PipGarnicaConfig.ini", QSettings::Format::IniFormat);
    settings.setValue("Setup/CardListPath", "../assets/setup/CardEffectsTable.csv");

    PipGarnica game{1};

    std::cout << "---------------------------------------------- ORIGINAL DECK IN ORDER ----------------------------------------------" << std::endl;
    game.printDeck();

    std::cout << "---------------------------------------------- DECK FLIPPED ----------------------------------------------" << std::endl;
    game.flipDeck();
    game.printDeck();

    std::cout << "---------------------------------------------- DECK SHUFFLED ----------------------------------------------" << std::endl;
    game.shuffleDeck();
    game.printDeck();

    return app.exec();
}