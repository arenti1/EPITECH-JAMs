/*
** EPITECH PROJECT, 2022
** character
** File description:
** the simpson character that we are asking about
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void the_character(sf::RenderWindow *w, Main *m)
{
    while (w->pollEvent(m->event))
    {
        character_quiz(w, m);
    }
    if(m->simpson == 1){
        display_question_homero(w, m);
    }
    else if(m->simpson == 2){
    display_question_marge(w, m);
    }
    else if(m->simpson == 3){
    display_question_brat(w, m);
    }
    else if(m->simpson == 4){
    display_question_lisa(w, m);
    }
    else if(m->simpson == 5){
    display_question_magie(w, m);
    }

}

void character_quiz(sf::RenderWindow *w, Main *m)
{

    if (m->simpson == 1)
        homero_quiz(w, m);
    else if (m->simpson == 2){
        marge_quiz(w, m);
    }
    else if (m->simpson == 3){
        brat_quiz(w, m);
    }
    else if (m->simpson == 4)
        lisa_quiz(w, m);
    else if (m->simpson == 5)
        magie_quiz(w, m);
}

void homero_quiz(sf::RenderWindow *w, Main *m)
{
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if (m->event.type == sf::Event::MouseButtonPressed)
    {
        if (x > 73 &&
            x < 190 &&
            y > 171 &&
            y < 230)
        {
            if (m->homero_q[0] == 1)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }

        else if (x > 415 &&
                 x < 515 &&
                 y > 165 &&
                 y < 220)
        {
            if (m->homero_q[0] == 2)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
    }
}

void marge_quiz(sf::RenderWindow *w, Main *m)
{
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if (m->event.type == sf::Event::MouseButtonPressed)
    {
        if (x > 418 &&
            x < 519 &&
            y > 580 &&
            y < 635)
        {
            if (m->marge_q[0] == 1)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
        else if (x > 610 &&
                 x < 695 &&
                 y > 585 &&
                 y < 635)
        {
            if (m->marge_q[0] == 2)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
    }
}

void brat_quiz(sf::RenderWindow *w, Main *m)
{
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if (m->event.type == sf::Event::MouseButtonPressed)
    {
        if (x > 312 &&
            x < 455 &&
            y > 435 &&
            y < 502)
        {
            if (m->brat_q[0] == 1)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
        else if (x > 671 &&
                 x < 770 &&
                 y > 431 &&
                 y < 490)
        {
            if (m->brat_q[0] == 2)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
    }
}

void lisa_quiz(sf::RenderWindow *w, Main *m)
{
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if (m->event.type == sf::Event::MouseButtonPressed)
    {
        if (x > 90 &&
            x < 202 &&
            y > 225 &&
            y < 285)
        {
            if (m->lisa_q[0] == 1)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
        else if (x > 875 &&
                 x < 960 &&
                 y > 223 &&
                 y < 288)
        {
            if (m->lisa_q[0] == 2)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
    }
}

void magie_quiz(sf::RenderWindow *w, Main *m)
{
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if (m->event.type == sf::Event::MouseButtonPressed)
    {
        if (x > 20 &&
            x < 182 &&
            y > 345 &&
            y < 435)
        {
            if (m->maggie_q[0] == 1)
                m->score++;
            else
            {
                m->score--;
            }
            m->current_ques++;
        }
        else if (x > 310 &&
                 x < 440 &&
                 y > 350 &&
                 y < 430)
        {
            if (m->maggie_q[0] == 2)
            {
                m->score++;
                printf("%d", m->score);
            }
            else
            {
                m->score--;
                printf("%d", m->score);
            }
            m->current_ques++;
        }
    }
}

void display_question_magie(sf::RenderWindow *w, Main *m)
{

    int i = m->current_ques;
    if (i == 0)
    {
        w->draw(m->q1m_s);
    }
    else if (i == 1)
    {
        w->draw(m->q2m_s);
    }
    else if (i == 2)
    {
        w->draw(m->q3m_s);
    }
    else if (i == 3)
    {
        w->draw(m->q4m_s);
    }
    else if (i == 4)
    {
        w->draw(m->q5m_s);
    }
    else if (i == 5)
    {
        w->draw(m->endm_s);
    }
    else if (i > 6)
    {
        m->current_ques = 0;
        m->state = 0;
    }
}

void display_question_homero(sf::RenderWindow *w, Main *m)
{
    int i = m->current_ques;
    if (i == 0)
    {
        w->draw(m->q1h_s);
    }
    else if (i == 1)
    {
        w->draw(m->q2h_s);
    }
    else if (i == 2)
    {
        w->draw(m->q3h_s);
    }
    else if (i == 3)
    {
        w->draw(m->q4h_s);
    }
    else if (i == 4)
    {
        w->draw(m->q5h_s);
    }
    else if (i == 5)
    {
        w->draw(m->endh_s);
    }
    else if (i > 6)
    {
        m->current_ques = 0;
        m->state = 0;
    }
    
}

void display_question_marge(sf::RenderWindow *w, Main *m)
{
    int i = m->current_ques;
    if (i == 0)
    {
        w->draw(m->q1ma_s);
    }
    else if (i == 1)
    {
        w->draw(m->q2ma_s);
    }
    else if (i == 2)
    {
        w->draw(m->q3ma_s);
    }
    else if (i == 3)
    {
        w->draw(m->q4ma_s);
    }
    else if (i == 4)
    {
        w->draw(m->q5ma_s);
    }
    else if (i == 5)
    {
        w->draw(m->endma_s);
    }
    else if (i > 6)
    {
        m->current_ques = 0;
        m->state = 0;
    }
}

void display_question_brat(sf::RenderWindow *w, Main *m)
{
    int i = m->current_ques;
    if (i == 0)
    {
        w->draw(m->q1b_s);
    }
    else if (i == 1)
    {
        w->draw(m->q2b_s);
    }
    else if (i == 2)
    {
        w->draw(m->q3b_s);
    }
    else if (i == 3)
    {
        w->draw(m->q4b_s);
    }
    else if (i == 4)
    {
        w->draw(m->q5b_s);
    }
    else if (i == 5)
    {
        w->draw(m->endb_s);
    }
    else if (i < 6)
    {
        m->current_ques = 0;
        m->state = 0;
    }
}

void display_question_lisa(sf::RenderWindow *w, Main *m)
{
    int i = m->current_ques;
    if (i == 0)
    {
        w->draw(m->q1l_s);
    }
    else if (i == 1)
    {
        w->draw(m->q2l_s);
    }
    else if (i == 2)
    {
        w->draw(m->q3l_s);
    }
    else if (i == 3)
    {
        w->draw(m->q4l_s);
    }
    else if (i == 4)
    {
        w->draw(m->q5l_s);
    }
    else if (i == 5)
    {
        w->draw(m->endl_s);
    }
    else if (i < 6)
    {
        m->current_ques = 0;
        m->state = 0;
    }
}
