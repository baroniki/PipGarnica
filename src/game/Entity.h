#pragma once

#include <QString>

class Entity {
public:
    Entity(QString t_name, QString t_desc);
    ~Entity() = default;
private:
    QString m_Name;
    QString m_Desc;
};