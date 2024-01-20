/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** initialize
*/

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

Main::Main()
{
    init_sprite("./assets/start_bg.jpg", &start_game_bg_t, &start_game_bg_s);
    init_sprite("./assets/simpsons_background.png", &the_character_bg_t, &the_character_bg_s);
    init_sprite("./assets/quiz_bg.png", &personalityQuiz_bg_t, &personalityQuiz_bg_s);

    init_sprite("./assets/Homer.png", &Homer_t, &Homer_s);
    init_sprite("./assets/Marge.jpg", &Marge_t, &Marge_s);
    init_sprite("./assets/Bart.jpg", &Bart_t, &Bart_s);
    init_sprite("./assets/Lisa.jpg", &Lisa_t, &Lisa_s);
    init_sprite("./assets/Maggie.jpg", &Maggie_t, &Maggie_s);

    init_sprite("./assets/magie_q1.png", &q1m_t, &q1m_s);
    init_sprite("./assets/magie_q2.png", &q2m_t, &q2m_s);
    init_sprite("./assets/magie_q3.png", &q3m_t, &q3m_s);
    init_sprite("./assets/magie_q4.png", &q4m_t, &q4m_s);
    init_sprite("./assets/magie_q5.png", &q5m_t, &q5m_s);

    maggie_q[0] = 1;
    maggie_q[1] = 2;
    maggie_q[2] = 1;
    maggie_q[3] = 2;
    maggie_q[4] = 1;

    init_sprite("./assets/lisa_q1.png", &q1l_t, &q1l_s);
    init_sprite("./assets/lisa_q2.png", &q2l_t, &q2l_s);
    init_sprite("./assets/lisa_q3.png", &q3l_t, &q3l_s);
    init_sprite("./assets/lisa_q4.png", &q4l_t, &q4l_s);
    init_sprite("./assets/lisa_q5.png", &q5l_t, &q5l_s);

    lisa_q[0] = 1;
    lisa_q[1] = 1;
    lisa_q[2] = 2;
    lisa_q[3] = 2;
    lisa_q[4] = 1;

    init_sprite("./assets/brat_q1.png", &q1b_t, &q1b_s);
    init_sprite("./assets/brat_q2.png", &q2b_t, &q2b_s);
    init_sprite("./assets/brat_q3.png", &q3b_t, &q3b_s);
    init_sprite("./assets/brat_q4.png", &q4b_t, &q4b_s);
    init_sprite("./assets/brat_q5.png", &q5b_t, &q5b_s);

    brat_q[0] = 1;
    brat_q[1] = 2;
    brat_q[2] = 1;
    brat_q[3] = 2;
    brat_q[4] = 1;

    init_sprite("./assets/marge_q1.png", &q1ma_t, &q1ma_s);
    init_sprite("./assets/marge_q2.png", &q2ma_t, &q2ma_s);
    init_sprite("./assets/marge_q3.png", &q3ma_t, &q3ma_s);
    init_sprite("./assets/marge_q4.png", &q4ma_t, &q4ma_s);
    init_sprite("./assets/marge_q5.png", &q5ma_t, &q5ma_s);

    marge_q[0] = 2;
    marge_q[1] = 2;
    marge_q[2] = 2;
    marge_q[3] = 1;
    marge_q[4] = 1;

    init_sprite("./assets/homero_q1.png", &q1h_t, &q1h_s);
    init_sprite("./assets/homero_q2.png", &q2h_t, &q2h_s);
    init_sprite("./assets/homero_q3.png", &q3h_t, &q3h_s);
    init_sprite("./assets/homero_q4.png", &q4h_t, &q4h_s);
    init_sprite("./assets/homero_q5.png", &q5h_t, &q5h_s);

    homero_q[0] = 2;
    homero_q[1] = 1;
    homero_q[2] = 1;
    homero_q[3] = 2;
    homero_q[4] = 2;

    init_sprite("./assets/end_homer.png", &endh_t, &endh_s);
    init_sprite("./assets/end_brat.png", &endb_t, &endb_s);
    init_sprite("./assets/end_lisa.png", &endl_t, &endl_s);
    init_sprite("./assets/end_marge.png", &endma_t, &endma_s);
    init_sprite("./assets/end_magie.png", &endm_t, &endm_s);

}
void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    if (!image.loadFromFile(str.c_str()))
    {
        std::cout << "Cannot load Image\n";
    }
    if (!t->loadFromImage(image))
    {
        std::cout << "error loading from image\n";
    }
    s->setTexture(*t);
}
