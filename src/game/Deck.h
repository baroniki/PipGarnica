#pragma once

#include <deque>
#include <memory>
#include <random>
#include <algorithm>

#include "Card.h"
#include "Colors.h"

class Deck {
public:
    Deck();
    ~Deck() = default;

    void insertCardAtTop(const std::shared_ptr<Card> card);
    void insertCardAtBottom(const std::shared_ptr<Card> card);

    void shuffleCards();
    void flipCards();

    QString print() const;
private:
    std::deque<std::shared_ptr<Card>> m_Cards;

    bool parseCardFiles(const QString& t_file_path);
};