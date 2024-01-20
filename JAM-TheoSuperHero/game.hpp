/*
** EPITECH PROJECT, 2023
** game of epitech jam
** File description:
** jami
*/

#ifndef GAME_HPP_
#define GAME_HPP_

#include <iostream>
#include <stdio.h>
#include <istream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "game.hpp"

enum HeroPage
{
    StartGame,
    InGame,
    EndGame,
};

class superheros
{
public:
    sf::RenderWindow *TheWindow;

    sf::Texture t_start_bg1;
    sf::Sprite start_bg1;

    sf::Texture t_start_bg2;
    sf::Sprite start_bg2;
    sf::Texture t_start_mbg;
    sf::Sprite start_mbg;
    sf::Texture t_Start_button;
    sf::Sprite Start_button;
    sf::Texture t_endgame_bg;
    sf::Sprite endgame_bg;
    sf::Texture t_Quit_button;
    sf::Sprite Quit_button;
    sf::Sprite *changePage = new sf::Sprite;

    int state = StartGame;
    short change = 0;
    void Initalize_game();
    // void initalize_sprites();
    void start_game();
    bool look_to_change(sf::Sprite sprite, int pos_x, int pos_y);
    void draw(sf::Sprite *sprite);
    void end_game();
};

class Event
{
public:
    sf::Event event;
};

#endif /* !GAME_HPP_ */
