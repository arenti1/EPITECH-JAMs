/*
** EPITECH PROJECT, 2023
** hub
** File description:
** epitech jam
*/

#include "game.hpp"

void main_loop(superheros *hero)
{
    std::cout << "checking for erros 5" << std::endl;
    while (hero->TheWindow->isOpen())
    {
        if (hero->state == HeroPage::StartGame)
        {
            std::cout << "checking for state 0" << std::endl;

            hero->start_game();
        } else if (hero->state == HeroPage::EndGame)
        {
            std::cout << "checking for the end " << std::endl;
            hero->end_game();
        }
    }
}

int main()
{
    superheros hero;
    std::cout << "checking for erros 1" << std::endl;
    hero.Initalize_game();
    std::cout << "checking for erros 2" << std::endl;
    main_loop(&hero);
}