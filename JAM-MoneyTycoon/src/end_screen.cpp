#include "../include/main.hpp"

void end_screen(sf::RenderWindow *window, Main *M)
{
    while (window->isOpen()){
        while (window->pollEvent(M->event)){
            close_window(window, M); 
        }
        window->draw(M->S.end_s);
        window->display();
    }
}