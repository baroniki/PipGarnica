#include "PipGarnica.h"

#include <iostream>

PipGarnica::PipGarnica( unsigned int t_num_players) 
                        : m_NumPlayers(t_num_players) {
    m_Deck = std::make_unique<Deck>();
}

void PipGarnica::printDeck() const {
    std::cout << m_Deck->print().toStdString() << std::endl;
}

void PipGarnica::flipDeck() {
    m_Deck->flipCards();
}

void PipGarnica::shuffleDeck() {
    m_Deck->shuffleCards();
}