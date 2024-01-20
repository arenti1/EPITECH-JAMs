/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** start
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

//START SCREEN MAIN FUNCTION
void start_game(sf::RenderWindow *w, Main *m)
{
    start_screen_events(w, m);
    w->draw(m->start_game_bg_s);
}