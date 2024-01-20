/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

// CHECK IF THE INPUTED BUTTON IS CLICKED OR NOT
bool check_button(sf::Event event, Button B)
{
    if (event.mouseButton.x > B.x && event.mouseButton.x < B.x + B.w &&
        event.mouseButton.y > B.y && event.mouseButton.y < B.y + B.h)
    {
        return true;
    }
    return false;
}

// FUNCTION THAT CONTROLS EVENTS OF THE START SCREEN
void start_screen_events(sf::RenderWindow *window, Main *m)
{
    // BUTTON FOR SIMPSON QUIZ
    Button Homer(220, 267, 80, 100);
    Button Marge(314, 267, 80, 100);
    Button Bart(192, 401, 80, 100);
    Button Lisa(269, 402, 80, 100);
    Button Maggie(348, 400, 80, 100);

    // BUTTON FOR THE PERSONALITY QUIZ
    Button sg(80, 541, 690, 120);

    

    while (window->pollEvent(m->event))
    {
        switch (m->event.type)
        {
        case sf::Event::Closed:
            window->close();
            break;
        case sf::Event::MouseButtonPressed:
            if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, sg))
            {
                m->state = 1;
            }
            else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, Homer))
            {
                m->state = 2;
                m->simpson = 1;
            }
            else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, Marge))
            {
                m->state = 2;
                m->simpson = 2;
            }
            else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, Bart))
            {
                m->state = 2;
                m->simpson = 3;
            }
            else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, Lisa))
            {
                m->state = 2;
                m->simpson = 4;
            }
            else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, Maggie))
            {
                m->state = 2;
                m->simpson = 5;
            }
            break;
        case sf::Event::KeyPressed:
            if (m->event.key.code == sf::Keyboard::Q)
            {
                exit(1);
            }
            break;
        }
    }
}