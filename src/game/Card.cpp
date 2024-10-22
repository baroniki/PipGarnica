#include "Card.h"

#include <iostream>

Card::Card( QString t_NameFront, QString t_DescFront, Color t_ColorFront, 
            QString t_NameBack, QString t_DescBack, Color t_ColorBack)
            :   m_NameFront(t_NameFront), m_DescFront(t_DescFront), m_ColorFront(t_ColorFront),
                m_NameBack(t_NameBack), m_DescBack(t_DescBack), m_ColorBack(t_ColorBack),
                m_FrontActive(true) {};


QString Card::getName() const {
    return m_FrontActive ? m_NameFront : m_NameBack;
}

QString Card::getDesc() const {
    return m_FrontActive ? m_DescFront : m_DescBack;
}

Color Card::getColor() const {
    return m_FrontActive ? m_ColorFront : m_ColorBack;
}

void Card::flip() {
    m_FrontActive = !m_FrontActive;
}

QString Card::print() const {
    return QString::fromStdString(colorToString.at(getColor())) + ": " + getName() + " - " + getDesc() + "\n";
}