#pragma once

#include <QString>
#include <string_view>
#include <unordered_map>

constexpr unsigned int NUM_OBJ_COLORS = 4;
constexpr unsigned int DECK_SIZE = 46;
constexpr unsigned int TRAY_SIZE = 3;

enum class Color {
    Blue,
    Orange,
    Black,
    White,
    Red,
    Green,
    Yellow,
    Pink,
    Brown,
    Grey,
    Rainbow
};


static const std::unordered_map<std::string, Color> stringToColor = 
{
    {"Blue", Color::Blue},
    {"Orange", Color::Orange},
    {"Black", Color::Black},
    {"White", Color::White},
    {"Red", Color::Red},
    {"Green", Color::Green},
    {"Yellow", Color::Yellow},
    {"Pink", Color::Pink},
    {"Brown", Color::Brown},
    {"Grey", Color::Grey},
    {"Rainbow", Color::Rainbow}
};

static const std::unordered_map<Color, std::string> colorToString = 
{
    {Color::Blue, "Blue"},
    {Color::Orange, "Orange"},
    {Color::Black, "Black"},
    {Color::White, "White"},
    {Color::Red, "Red"},
    {Color::Green, "Green"},
    {Color::Yellow, "Yellow"},
    {Color::Pink, "Pink"},
    {Color::Brown, "Brown"},
    {Color::Grey, "Grey"},
    {Color::Rainbow, "Rainbow"}
};