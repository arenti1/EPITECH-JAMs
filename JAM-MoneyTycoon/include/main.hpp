/*
** EPITECH PROJECT, 2022
** Jam
** File description:
** jam
*/

#ifndef MAIN_HPP_
#define MAIN_HPP_
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Start
{
public:
    sf::Texture t1;
    sf::Texture t2;

    sf::Sprite s1;
    sf::Sprite s2;
    Start();
};

class Button
{
public:
    int x;
    int y;
    int width;
    int height;
    std::string text;
    Button(int xx, int yy, int w, int h)
    {
        x = xx;
        y = yy;
        width = w;
        height = h;
    }
    virtual~Button() {};
};

class Sprites
{
public:
    sf::Texture calm_bg_1t;
    sf::Texture calm_bg_2t;
    
    sf::Sprite calm_bg_1s;
    sf::Sprite calm_bg_2s;

    sf::Texture fancy_calm_bg_1t;
    sf::Texture fancy_calm_bg_2t;
    
    sf::Sprite fancy_calm_bg_1s;
    sf::Sprite fancy_calm_bg_2s;
    
    sf::Sprite button_s;
    sf::Texture button_t;

     sf::Texture bg_t[11];
    sf::Sprite bg_s[11];

    sf::Texture fancy_bg_t[11];
    sf::Sprite fancy_bg_s[11];

    sf::Texture money_t[24];
    sf::Sprite money_s[24];

    sf::Texture bill_t;
    sf::Sprite bill_s;
    
    sf::Texture choco_t;
    sf::Sprite choco_s;

    sf::Texture end_t;
    sf::Sprite end_s;
};

class Main 
{
public:

    int MONEY;
    int raise;


    short game_state;
    Sprites S;
    sf::Event event;

    bool bttn_clicked;
    sf::Clock clock;
    sf::Clock money_clock;
    sf::Time bg_time;
    sf::Time money_time;
    short count; //number of background sprites
    short current; //on what sprite we are currently in
    short money_count;
    short money_current;
    bool office = false; //normal office or fancy office background
    Button button_A = Button(950, 10, 150, 170);

    sf::Clock rest_clock;
    sf::Time rest_time;
    float rest_x;
    float rest_y;
    short temp = 1;
    bool rage;
    int coef;
    float choco_x;
    float choco_y;
    Main();
};
void close_window(sf::RenderWindow *window, Main *M);
void draw_background(sf::RenderWindow *window, bool a, Main *M);
void check_events(Main *M, Button *B);
void draw_money(sf::RenderWindow *window, Main *M);
void start_screen(sf::RenderWindow *window, Main *M);
void draw_moneyText(sf::RenderWindow *window, Main *M);
void draw_bill(sf::RenderWindow *window, Main *M);
void draw_motivation(sf::RenderWindow *window, Main *M);
void draw_choco(sf::RenderWindow *window, Main *M);
void end_screen(sf::RenderWindow *window, Main *M);
#endif /* !MAIN_HPP_ */
