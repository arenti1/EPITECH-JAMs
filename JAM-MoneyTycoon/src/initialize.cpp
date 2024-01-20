#include "../include/main.hpp"

void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    if (!image.loadFromFile(str.c_str())){
        std::cout << "Cannot load Image\n";
    }
    if (!t->loadFromImage(image)){
        std::cout << "error loading from image\n";
    }
    s->setTexture(*t);
}

void init_button(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    sf::Sprite Sprite;

    if (!image.loadFromFile(str.c_str()))
        std::cout << "Cannot load image\n";
    if (!t->loadFromImage(image))
        std::cout << "error loading from image\n";
    s->setTexture(*t);
    s->setScale(sf::Vector2f(0.3, 0.4));
    s->setPosition(sf::Vector2f(1000, 0));
}

Main::Main()
{
    //BUTTON INIT
    init_button("./res/button.png", &S.button_t, &S.button_s);
    //NORMAL OFFICE
    init_sprite("./res/calm_bg_1.gif", &S.calm_bg_1t, &S.calm_bg_1s);
    init_sprite("./res/calm_bg_2.gif", &S.calm_bg_2t, &S.calm_bg_2s);
    init_sprite("./res/bg_01.gif", &S.bg_t[0], &S.bg_s[0]);
    init_sprite("./res/bg_02.gif", &S.bg_t[1], &S.bg_s[1]);
    init_sprite("./res/bg_03.gif", &S.bg_t[2], &S.bg_s[2]);
    init_sprite("./res/bg_04.gif", &S.bg_t[3], &S.bg_s[3]);
    init_sprite("./res/bg_05.gif", &S.bg_t[4], &S.bg_s[4]);
    init_sprite("./res/bg_06.gif", &S.bg_t[5], &S.bg_s[5]);
    init_sprite("./res/bg_07.gif", &S.bg_t[6], &S.bg_s[6]);
    init_sprite("./res/bg_08.gif", &S.bg_t[7], &S.bg_s[7]);
    init_sprite("./res/bg_09.gif", &S.bg_t[8], &S.bg_s[8]);
    init_sprite("./res/bg_10.gif", &S.bg_t[9], &S.bg_s[9]);
    init_sprite("./res/bg_11.gif", &S.bg_t[10], &S.bg_s[10]);

    //FANCY OFFICE
    init_sprite("./res/fancy_calm_bg_1.gif", &S.fancy_calm_bg_1t, &S.fancy_calm_bg_1s);
    init_sprite("./res/fancy_calm_bg_2.gif", &S.fancy_calm_bg_2t, &S.fancy_calm_bg_2s);
    init_sprite("./res/fancy_bg_01.gif", &S.fancy_bg_t[0], &S.fancy_bg_s[0]);
    init_sprite("./res/fancy_bg_02.gif", &S.fancy_bg_t[1], &S.fancy_bg_s[1]);
    init_sprite("./res/fancy_bg_03.gif", &S.fancy_bg_t[2], &S.fancy_bg_s[2]);
    init_sprite("./res/fancy_bg_04.gif", &S.fancy_bg_t[3], &S.fancy_bg_s[3]);
    init_sprite("./res/fancy_bg_05.gif", &S.fancy_bg_t[4], &S.fancy_bg_s[4]);
    init_sprite("./res/fancy_bg_06.gif", &S.fancy_bg_t[5], &S.fancy_bg_s[5]);
    init_sprite("./res/fancy_bg_07.gif", &S.fancy_bg_t[6], &S.fancy_bg_s[6]);
    init_sprite("./res/fancy_bg_08.gif", &S.fancy_bg_t[7], &S.fancy_bg_s[7]);
    init_sprite("./res/fancy_bg_09.gif", &S.fancy_bg_t[8], &S.fancy_bg_s[8]);
    init_sprite("./res/fancy_bg_10.gif", &S.fancy_bg_t[9], &S.fancy_bg_s[9]);
    init_sprite("./res/fancy_bg_11.gif", &S.fancy_bg_t[10], &S.fancy_bg_s[10]);
    count = 11;
    current = 0;

    init_sprite("./res/m/m1.png", &S.money_t[0], &S.money_s[0]);
    init_sprite("./res/m/m2.png", &S.money_t[1], &S.money_s[1]);
    init_sprite("./res/m/m3.png", &S.money_t[2], &S.money_s[2]);
    init_sprite("./res/m/m4.png", &S.money_t[3], &S.money_s[3]);
    init_sprite("./res/m/m5.png", &S.money_t[4], &S.money_s[4]);
    init_sprite("./res/m/m6.png", &S.money_t[5], &S.money_s[5]);
    init_sprite("./res/m/m7.png", &S.money_t[6], &S.money_s[6]);
    init_sprite("./res/m/m8.png", &S.money_t[7], &S.money_s[7]);
    init_sprite("./res/m/m9.png", &S.money_t[8], &S.money_s[8]);
    init_sprite("./res/m/m10.png", &S.money_t[9], &S.money_s[9]);
    init_sprite("./res/m/m11.png", &S.money_t[10], &S.money_s[10]);
    init_sprite("./res/m/m12.png", &S.money_t[11], &S.money_s[11]);
    init_sprite("./res/m/m13.png", &S.money_t[12], &S.money_s[12]);
    init_sprite("./res/m/m14.png", &S.money_t[13], &S.money_s[12]);
    init_sprite("./res/m/m15.png", &S.money_t[14], &S.money_s[14]);
    init_sprite("./res/m/m16.png", &S.money_t[15], &S.money_s[15]);
    init_sprite("./res/m/m17.png", &S.money_t[16], &S.money_s[16]);
    init_sprite("./res/m/m18.png", &S.money_t[17], &S.money_s[17]);
    init_sprite("./res/m/m19.png", &S.money_t[18], &S.money_s[18]);
    init_sprite("./res/m/m20.png", &S.money_t[19], &S.money_s[19]);
    init_sprite("./res/m/m21.png", &S.money_t[20], &S.money_s[20]);
    init_sprite("./res/m/m22.png", &S.money_t[21], &S.money_s[21]);
    init_sprite("./res/m/m23.png", &S.money_t[22], &S.money_s[22]);
    init_sprite("./res/m/m24.png", &S.money_t[23], &S.money_s[23]);

    init_sprite("./res/bill.jpg", &S.bill_t, &S.bill_s);
    init_sprite("./res/images.png", &S.choco_t, &S.choco_s);
    init_sprite("./res/end.jpg", &S.end_t, &S.end_s);


    money_count = 24;
    money_current = 0;  
    game_state = 0;  
    rest_clock.restart();
    rest_x =  400;
    rest_y = 600;
    rage = false;
    coef = 1;
    choco_x = 1300;
    choco_y = 260;
}

Start::Start()
{
    init_sprite("./res/start_screen1.jpg", &t1, &s1);
    init_sprite("./res/start_screen2.jpg", &t2, &s2);
};