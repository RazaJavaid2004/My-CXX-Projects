#pragma once

#include <random>

class Dice {
    public:
    void welcomeScreen();
    int rollDice(std::mt19937& gen, std::uniform_int_distribution<>& dist);
    void playGame();
};