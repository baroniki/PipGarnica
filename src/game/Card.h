#pragma once

#include <QString>

#include "Colors.h"

class Card {
public:
    Card(QString t_NameFront, QString t_DescFront, Color t_ColorFront, QString t_NameBack, QString t_DescBack, Color t_ColorBack);
    ~Card() = default;
    QString getName() const;
    QString getDesc() const;
    Color getColor() const;
    void flip();

    QString print() const;
private:
    QString m_NameFront;
    QString m_DescFront;
    Color m_ColorFront;

    QString m_NameBack;
    QString m_DescBack;
    Color m_ColorBack;

    bool m_FrontActive;
};