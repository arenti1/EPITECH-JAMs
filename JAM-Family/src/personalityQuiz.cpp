/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** personalityQuiz
*/

#include <iostream>
#include <sstream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void draw_Text(sf::RenderWindow *window, std::string str, int x, int y)
{
    sf::Font font;
    if (!font.loadFromFile("./assets/arial.ttf"))
        std::cout << "Font couldn't be loaded\n";

    sf::Text text;

    text.setFont(font);
    text.setString(str);
    text.setCharacterSize(30);
    text.setFillColor(sf::Color::White);

    text.setPosition(x, y);
    window->draw(text);
}

void display_question(sf::RenderWindow *w, Question *Q, Main *m)
{
    draw_Text(w, Q->question, 340, 120);
    draw_Text(w, Q->A, 210, 295);
    draw_Text(w, Q->B, 640, 295);
    draw_Text(w, Q->C, 210, 430);
    draw_Text(w, Q->D, 640, 430);
    draw_Text(w, Q->E, 444, 600);
}


void personality_test_events(sf::RenderWindow *window, Main *m)
{
    //BUTTON FOR ALTERNATIVES
    Button A(200, 250, 400, 130);
    Button B(640, 250, 400, 130);
    Button C(200, 340, 400, 130);
    Button D(640, 340, 400, 130);
    Button E(420, 550, 400, 130);

    while (window->pollEvent(m->event)) {
        switch (m->event.type) {
            case sf::Event::Closed:
                window->close();
                break;
            case sf::Event::MouseButtonPressed:
                if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, A)){
                    m->answers[m->current_question] = 'A';
                    m->current_question = m->current_question + 1;
                }
                else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, B)){
                    m->answers[m->current_question] = 'B';
                    m->current_question = m->current_question + 1;
                }
                else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, C)){
                    m->answers[m->current_question] = 'C';
                    m->current_question = m->current_question + 1;
                }
                else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, D)){
                    m->answers[m->current_question] = 'D';
                    m->current_question = m->current_question + 1;
                }
                else if (m->event.mouseButton.button == sf::Mouse::Left && check_button(m->event, E)){
                    m->answers[m->current_question] = 'E';
                    m->current_question = m->current_question + 1;
                }
                break;
            case sf::Event::KeyPressed:
                if (m->event.key.code == sf::Keyboard::Q){
                    exit(1);
                }
                break;
        }
    }
}

int calculate_match(char *answers)
{
    int amount[5];
    amount[0] = 0;
    amount[1] = 0;
    amount[2] = 0;
    amount[3] = 0;
    amount[4] = 0;
    int pos;
    for (int i = 0; i < 5; i++){
        if (answers[i] == 'A'){
            amount[0] = amount[0] + 1;
        }
        else if (answers[i] == 'B'){
            amount[1] = amount[1] + 1;
        }
        else if (answers[i] == 'C'){
            amount[2] = amount[2] + 2;
        }
        else if (answers[i] == 'D'){
            amount[3] = amount[3] + 3;
        }
        else if (answers[i] == 'E'){
            amount[4] = amount[4] + 4;
        }
    }
    int max = 0;
    for (int j = 0; j < 5; j++){
        if (amount[j] > max){
            pos = j;
            max = amount[j];
        }
    }
    return pos;
}

void end_screen(sf::RenderWindow *w, Main *m)
{
    if (m->temp_switch == 1){
        m->match = calculate_match(m->answers);
        m->temp_switch = 0;
    }
    if (m->match == 0){
        w->draw(m->Homer_s);
    }
    else if (m->match == 1){
        w->draw(m->Marge_s);
    }
    else if (m->match == 2){
        w->draw(m->Bart_s);
    }
    else if (m->match == 3){
        w->draw(m->Lisa_s);
    }
    else if (m->match == 4){
        w->draw(m->Maggie_s);
    }
}

void PersonalityQuiz(sf::RenderWindow *w, Main *m)
{
    w->draw(m->personalityQuiz_bg_s);
    int i = m->current_question;
    if (i == 0){
        Question *q = m->PersonalityQ.at(0);
        display_question(w, q, m);
    }
    else if (i == 1){
        display_question(w, m->PersonalityQ.at(1), m);
    }
    else if (i == 2){
        display_question(w, m->PersonalityQ.at(2), m);
    }
    else if (i == 3){
        display_question(w, m->PersonalityQ.at(3), m);
    }
    else if (i == 4){
        display_question(w, m->PersonalityQ.at(4), m);
    } 
    else if (i == 5){
        end_screen(w, m);
    }
    else if (i == 6){
        m->state = 0;
        m->current_question = 0;
        m->temp_switch = 1;
        m->match = -1;
    }
    personality_test_events(w, m);
}