/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** piano
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "../include/main.hpp"

Main::Main()
{
    init_sprite("./res/piano_bg.jpg", &piano_bg_texture, &piano_bg_spr);
    init_sprite("./res/background_menu.jpg", &menu_bg_t, &menu_bg_s);

    B_C.loadFromFile("./res/C.ogg");
    B_D.loadFromFile("./res/D.ogg");
    B_E.loadFromFile("./res/E.ogg");
    B_F.loadFromFile("./res/F.ogg");
    B_G.loadFromFile("./res/G.ogg");
    B_A.loadFromFile("./res/A.ogg");
    B_B.loadFromFile("./res/B.ogg");
    B_C2.loadFromFile("./res/C2.ogg");
    B_D2.loadFromFile("./res/D2.ogg");
    B_E2.loadFromFile("./res/E2.ogg");
    C.setBuffer(B_C);
    D.setBuffer(B_D);
    E.setBuffer(B_E);
    F.setBuffer(B_F);
    G.setBuffer(B_G);
    A.setBuffer(B_A);
    B.setBuffer(B_B);
    C2.setBuffer(B_C2);
    D2.setBuffer(B_D2);
    E2.setBuffer(B_E2);
}

void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    if (!image.loadFromFile(str.c_str())){
        std::cout << "Cannot load Image\n";
    }
    if (!t->loadFromImage(image)){
        std::cout << "error loading from image\n";
    }
    s->setTexture(*t);
}