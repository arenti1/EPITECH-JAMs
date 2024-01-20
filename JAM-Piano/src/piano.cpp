/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** piano
*/

#include <iostream>
#include <sstream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "../include/main.hpp"

void key_press(sf::RenderWindow *w, Main *m)
{
    switch (m->event.key.code) 
    {
        case sf::Keyboard::Num1:
            m->C.play();
            break;
        case sf::Keyboard::Num2:
            m->D.play();
            break;
        case sf::Keyboard::Num3:
            m->E.play();
            break;
        case sf::Keyboard::Num4:
            m->F.play();
            break;
        case sf::Keyboard::Num5:
            m->G.play();
            break;
        case sf::Keyboard::Num6:
            m->A.play();
            break;
        case sf::Keyboard::Num7:
            m->B.play();
            break;
        case sf::Keyboard::Num8:
            m->C2.play();
            break;
        case sf::Keyboard::Num9:
            m->D2.play();
            break;
        case sf::Keyboard::Num0:
            m->E2.play();
            break;
        case sf::Keyboard::R:
            m->state = 0;
            break;
        case sf::Keyboard::Q:
            close_window(w, m);
            break;
    }
}

void close_window(sf::RenderWindow *w, Main *m)
{
    w->close();
    exit(0);
}

void events(sf::RenderWindow *w, Main *m)
{
    while (w->pollEvent(m->event)){
        if (m->event.type == sf::Event::KeyPressed){
            key_press(w, m);
        }
    }
}

void draw_musicText(sf::RenderWindow *window, Main *m)
{
    sf::Font font;
    if (!font.loadFromFile("./res/arial.ttf"))
    {
        std::cout << "Font couldn't be loaded\n";
    }

    std::stringstream t;

    if (m->music == 1){
        t << "3-6-8-7-6-0-9-7-6-8-7-5-7-3" << std::endl;
    }
    else if (m->music == 2){
        t << "3212333 222 355 3212333322321" << std::endl;
    }
    else if (m->music == 3){
        t << "2-3-4-2-6-6-5\n1-2-3-1-5-5-4-3-2" << std::endl;
    }
    sf::Text text;
    text.setFont(font);
    text.setString(t.str());
    text.setCharacterSize(60);
        
    text.setFillColor(sf::Color::White);

    text.setPosition(557, 821);
    window->draw(text);
}

void display_music(sf::RenderWindow *w, Main *m)
{
    
}

void piano(sf::RenderWindow *w, Main *m)
{
    w->draw(m->piano_bg_spr);
    events(w, m);
    draw_musicText(w, m);
}