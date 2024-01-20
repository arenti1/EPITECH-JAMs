/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** select_menu
*/

#include "../include/main.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

void select_menu(sf::RenderWindow *w, Main *m)
{
    w->draw(m->menu_bg_s);
    menu_events(w, m);
}

void menu_events(sf::RenderWindow *w, Main *m)
{
    while(w->pollEvent(m->event)){
        menu_press(w, m);
    }
}

void menu_press(sf::RenderWindow *w, Main *m)
{
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        if (x > 585 && 
            x < 847 && 
            y > 487 && 
            y < 540 ){
            m->music = 1;
            m->state = 1;
        }
        else if (x > 855 && 
            x < 1111 && 
            y > 487 && 
            y < 540 ){

            m->music = 2;
            m->state = 1;
        }
        else if (x > 1130 && 
            x < 1350 && 
            y > 487 && 
            y <  540 ){
            m->music = 3;
            m->state = 1;
        }
        else if (x >  0&& 
            x < 240 && 
            y > 833 && 
            y < 1080 ){
            close_window(w, m);
        }
    }
}

/*
void menu_press(sf::RenderWindow *w, Main *m)
{
    //sf::Event::MouseButtonPressed
    //float x = sf::Mouse::getPosition(*window).x;
    //float y = sf::Mouse::getPosition(*window).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        printf("Alpha\n");
        if (m->event.mouseButton.x < 585 && 
            m->event.mouseButton.x > 847 && 
            m->event.mouseButton.y > 487 && 
            m->event.mouseButton.y < 540 ){
                printf("Beta\n");
            m->music = 1;
            m->state = 1;
        }
        else if (m->event.mouseButton.x < 855 && 
            m->event.mouseButton.x > 1111 && 
            m->event.mouseButton.y > 487 && 
            m->event.mouseButton.y < 540 ){

            m->music = 2;
            m->state = 1;
        }
        else if (m->event.mouseButton.x < 1130 && 
            m->event.mouseButton.x > 1350 && 
            m->event.mouseButton.y > 487 && 
            m->event.mouseButton.y <  540 ){
            m->music = 3;
            m->state = 1;
        }
        else if (m->event.mouseButton.x <  0&& 
            m->event.mouseButton.x > 240 && 
            m->event.mouseButton.y > 833 && 
            m->event.mouseButton.y < 1080 ){
            close_window(w, m);
        }
    }
}
*/

