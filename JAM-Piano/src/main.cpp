/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/main.hpp"

int main(int argc, char **argv)
{

    Main m;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Learn Piano");

    while (window.isOpen()){
        if (m.state == 0){
            select_menu(&window, &m);
        }
        else if (m.state == 1){
            piano(&window, &m);
        }
        window.display();
    }
    return 0;
}