#include "../include/main.hpp"
#include <sstream>

sf::Sprite animate_background(Main *M)
{
    M->current++;
    if (M->current >= M->count){
        M->current = 0;
    }
    if (M->office){
        return M->S.fancy_bg_s[M->current];
    } 
    return M->S.bg_s[M->current];
}

sf::Sprite normal_office(bool a, Main *M)
{
    if (!a){
        M->bg_time = M->clock.getElapsedTime();
        if (M->bg_time >= sf::seconds(1) && M->bg_time < sf::seconds(1.2f)){
            return M->S.calm_bg_2s;
        } else {
            if (M->bg_time >= sf::seconds(1.2f)){
                M->clock.restart();
            }
            return M->S.calm_bg_1s;
        }
    } else {
        return (animate_background(M));
    }
}

sf::Sprite fancy_office(bool a, Main *M)
{
    if (!a){
        M->bg_time = M->clock.getElapsedTime();
        if (M->bg_time >= sf::seconds(1) && M->bg_time < sf::seconds(1.2f)){
            return M->S.fancy_calm_bg_2s;
        } else {
            if (M->bg_time >= sf::seconds(1.2f)){
                M->clock.restart();
            }
            return M->S.fancy_calm_bg_1s;
        }
    } else {
        return (animate_background(M));
    }
}

void draw_background(sf::RenderWindow *window, bool a, Main *M)
{
    if (M->office){
        window->draw(fancy_office(a, M));
    } else {
        window->draw(normal_office(a, M));
    }
}

void draw_money(sf::RenderWindow *window, Main *M)
{
    if (M->bttn_clicked == true){
        M->money_time = M->money_clock.getElapsedTime();
        if (M->money_time > sf::milliseconds(30)){
            M->money_current++;
            M->money_clock.restart();
        }
        if (M->money_current >= M->money_count){
            M->money_current = 0;
        }
        M->S.money_s[M->money_current].setPosition(400, 10);
        window->draw(M->S.money_s[M->money_current]);
    }
}

void draw_moneyText(sf::RenderWindow *window, Main *M)
{
    sf::Font font;
    if (!font.loadFromFile("./res/arial.ttf"))
    {
        std::cout << "Font couldn't be loaded\n";
    }

    std::stringstream t;

    t << "$" << M->MONEY << std::endl;
    sf::Text text;
    text.setFont(font);
    text.setString(t.str());
    text.setCharacterSize(40);
    if (M->rage){
        text.setFillColor(sf::Color::Red);
    } else {
        text.setFillColor(sf::Color::White);
    }
    text.setPosition(50, 30);
    window->draw(text);
}

void draw_bill(sf::RenderWindow *window, Main *M)
{
    window->draw(M->S.bill_s);
}

void draw_motivation(sf::RenderWindow *window, Main *M)
{
    sf::Font font;
    if (!font.loadFromFile("./res/arial.ttf"))
    {
        std::cout << "Font couldn't be loaded\n";
    }

    std::stringstream t;

    t << "You can do it!!\n"
        "Here take this chocolatine to get\nmore energy!" << std::endl;
    sf::Text text;
    text.setFont(font);
    text.setString(t.str());
    text.setCharacterSize(40);
    text.setFillColor(sf::Color::Green);
    text.setPosition(M->rest_x, M->rest_y);
    
    if (M->MONEY > 6000){
        if (M->temp){
            M->rest_clock.restart();
            M->temp--;
        }
        M->rest_time = M->rest_clock.getElapsedTime();
        if (M->rest_time < sf::seconds(5)){
            if (M->rest_y > 450){
                M->rest_y -= 2;
            }
            draw_choco(window, M);
            text.setPosition(M->rest_x, M->rest_y);
            window->draw(text);
        }
    }
}

void draw_choco(sf::RenderWindow *window, Main *M)
{
    if (M->choco_x > 550){
        M->choco_x -= 2;
        M->S.choco_s.setPosition(M->choco_x, M->choco_y);
        window->draw(M->S.choco_s);
    } else {
        M->rage = true;
        M->coef = 4;
    }
}