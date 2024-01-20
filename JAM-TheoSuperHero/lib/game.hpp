/*
** EPITECH PROJECT, 2023
** game of epitech jam
** File description:
** jami
*/
 
#ifndef GAME_HPP_
#define GAME_HPP_

#include <stdio.h>
#include <istream>
#include "game.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


enum HeroPage{
    StartGame,
    InGame,
    EndGame
};

class superheros
{
public:

    sf::Window TheWindow;

    sf::Texture t_start_bg;
    sf::Sprite start_bg;

    sf::Texture t_Start_button;
    sf::Sprite Start_button;

    sf::Texture t_Quit_button;
    sf::Sprite Quit_button;

    short state;

    void Initalize_game();
    void game();
};

#endif /* !GAME_HPP_ */
