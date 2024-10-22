#pragma once

#include <memory>
#include <array>

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Objective.h"
#include "Colors.h"

class PipGarnica {
public:
    PipGarnica(unsigned int t_num_players);
    ~PipGarnica() = default;

    void printDeck() const;
    void flipDeck();
    void shuffleDeck();
private:
    unsigned int m_NumPlayers;
    std::vector<std::unique_ptr<Player>> m_Players;
    std::unique_ptr<Deck> m_Deck;
};