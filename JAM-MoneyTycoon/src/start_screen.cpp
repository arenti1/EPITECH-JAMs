#include "../include/main.hpp"
#include <SFML/Window/Mouse.hpp>

void button_click(Main *M)
{
    if ((M->event.mouseButton.x > 400) &&
       (M->event.mouseButton.x < 780) &&
       (M->event.mouseButton.y > 290) &&
       (M->event.mouseButton.y < 440)){
           M->game_state = 1;
    }
}


void draw_startbackground(sf::RenderWindow *window, Start *S)
{
    float x = sf::Mouse::getPosition(*window).x;
    float y = sf::Mouse::getPosition(*window).y;
    if (x > 400 && x < 780 && y > 290 && y < 440){
        window->draw(S->s2);
    } else {
        window->draw(S->s1);
    }
}

void start_screen(sf::RenderWindow *window, Main *M)
{
    Start S;
    while (window->isOpen() && !M->game_state){
        while (window->pollEvent(M->event)){
            close_window(window, M); 
            button_click(M);
        }
        draw_startbackground(window, &S);
        window->display();
    }
}