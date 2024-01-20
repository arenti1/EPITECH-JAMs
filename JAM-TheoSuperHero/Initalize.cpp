/*
** EPITECH PROJECT, 2023
** initalizing spirtes
** File description:
** Initalize
*/

#include "game.hpp"
#include <iostream>

void initalize_sprites(superheros *hero);

void superheros::Initalize_game()
{
    std::cout << "checking for erros 3" << std::endl;
    this->TheWindow = new sf::RenderWindow(sf::VideoMode(1600, 900, 32), "heros");
    std::cout << "checking for erros 4" << std::endl;

    initalize_sprites(this);
}

void initalize_sprites(superheros *hero)
{
    hero->t_start_bg1.loadFromFile("res/start_game1.png");
    hero->t_start_bg2.loadFromFile("res/start_game2.png");
    hero->t_endgame_bg.loadFromFile("res/GAMEOVER.png");
    hero->start_bg1.setTexture(hero->t_start_bg1, true);
    hero->start_bg2.setTexture(hero->t_start_bg2, true);
    hero->endgame_bg.setTexture(hero->t_endgame_bg, true);
}