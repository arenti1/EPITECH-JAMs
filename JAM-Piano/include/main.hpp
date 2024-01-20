/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#ifndef MAIN_HPP_
#define MAIN_HPP_
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Main 
{
    public:
        short state = 0;
        short music = 0;

        sf::Event event;

        sf::Texture piano_bg_texture;
        sf::Sprite piano_bg_spr;

        sf::Texture menu_bg_t;
        sf::Sprite menu_bg_s;
        
        sf::SoundBuffer B_C;
        sf::SoundBuffer B_D;
        sf::SoundBuffer B_E;
        sf::SoundBuffer B_F;
        sf::SoundBuffer B_G;
        sf::SoundBuffer B_A;
        sf::SoundBuffer B_B;
        sf::SoundBuffer B_C2;
        sf::SoundBuffer B_D2;
        sf::SoundBuffer B_E2;

        sf::Sound C;
        sf::Sound D;
        sf::Sound E;
        sf::Sound F;
        sf::Sound G;
        sf::Sound A;
        sf::Sound B;
        sf::Sound C2;
        sf::Sound D2;
        sf::Sound E2;

        sf::Font font;
        sf::Text text;

        Main();
};

void piano(sf::RenderWindow *w, Main *m);
void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s);
void display_piano_bg(sf::RenderWindow *w, Main *m);
void close_window(sf::RenderWindow *w, Main *m);

void select_menu(sf::RenderWindow *w, Main *m);
void menu_events(sf::RenderWindow *w, Main *m);
void menu_press(sf::RenderWindow *w, Main *m);
void display_menu_bg(sf::RenderWindow *w, Main *m);
#endif /* !MAIN_HPP_ */
