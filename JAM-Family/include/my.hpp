/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
*/

#ifndef MY_HPP_
#define MY_HPP_
#define BART_SIMPSON "../assets/Bart_simpson.jpg"

class Question
{
    public:
        std::string question;
        std::string A;
        std::string B;
        std::string C;
        std::string D;
        std::string E;
    Question(std::string q, std::string a, std::string b, std::string c, std::string d, std::string e) :
                question(q), A(a), B(b), C(c), D(d), E(e) {}
};

class Main
{
    public:
        short state = 0;
        short character[4];
        int maggie_q[5];
        int lisa_q[5];
        int brat_q[5];
        int marge_q[5];
        int homero_q[5];    

        int simpson = 0;
        int score = 0;
        short answer = 0; // 1 = yes and 2 = no
        short family_member; //which member is chosen for the quiz
            //family_member = 0 - Homer
            //family_member = 0 - Marge
            //family_member = 0 - Bart
            //family_member = 0 - Lisa
            //family_member = 0 - Maggie

        char answers[5];
        int current_question = 0;
        int current_ques = 0;
        int match = -1;
        short temp_switch = 1;

        sf::Event event;

        sf::Texture start_game_bg_t; //the background image texture of start screen
        sf::Sprite start_game_bg_s; //the background image texture of start screen
        sf::Texture personalityQuiz_bg_t;
        sf::Sprite personalityQuiz_bg_s;

        sf::Texture q1m_t; // maggie
        sf::Sprite q1m_s;

        sf::Texture q2m_t;
        sf::Sprite q2m_s;

        sf::Texture q3m_t;
        sf::Sprite q3m_s;

        sf::Texture q4m_t;
        sf::Sprite q4m_s;

        sf::Texture q5m_t;
        sf::Sprite q5m_s;

        sf::Texture q1l_t; //lisa
        sf::Sprite q1l_s;

        sf::Texture q2l_t;
        sf::Sprite q2l_s;

        sf::Texture q3l_t;
        sf::Sprite q3l_s;

        sf::Texture q4l_t;
        sf::Sprite q4l_s;

        sf::Texture q5l_t;
        sf::Sprite q5l_s;

         sf::Texture q1b_t; //brat
        sf::Sprite q1b_s;

        sf::Texture q2b_t;
        sf::Sprite q2b_s;

        sf::Texture q3b_t;
        sf::Sprite q3b_s;

        sf::Texture q4b_t;
        sf::Sprite q4b_s;

        sf::Texture q5b_t;
        sf::Sprite q5b_s;

         sf::Texture q1ma_t; //marge
        sf::Sprite q1ma_s;

        sf::Texture q2ma_t;
        sf::Sprite q2ma_s;

        sf::Texture q3ma_t;
        sf::Sprite q3ma_s;

        sf::Texture q4ma_t;
        sf::Sprite q4ma_s;

        sf::Texture q5ma_t;
        sf::Sprite q5ma_s;

         sf::Texture q1h_t; //homer
        sf::Sprite q1h_s;

        sf::Texture q2h_t;
        sf::Sprite q2h_s;

        sf::Texture q3h_t;
        sf::Sprite q3h_s;

        sf::Texture q4h_t;
        sf::Sprite q4h_s;

        sf::Texture q5h_t;
        sf::Sprite q5h_s;

        sf::Texture endm_t;
        sf::Sprite endm_s;

        sf::Texture endl_t;
        sf::Sprite endl_s;

        sf::Texture endb_t;
        sf::Sprite endb_s;

        sf::Texture endma_t;
        sf::Sprite endma_s;

        sf::Texture endh_t;
        sf::Sprite endh_s;
        
        sf::Texture Homer_t;
        sf::Sprite Homer_s;
        sf::Texture Marge_t;
        sf::Sprite Marge_s;
        sf::Texture Bart_t;
        sf::Sprite Bart_s;
        sf::Texture Lisa_t;
        sf::Sprite Lisa_s;
        sf::Texture Maggie_t;
        sf::Sprite Maggie_s;


        std::vector<Question*> PersonalityQ;

        sf::Texture the_character_bg_t;
        sf::Sprite the_character_bg_s;

        Main();
};

//BUTTON CLASS
class Button
{
    public:
        int x;
        int y;
        int w;
        int h;
        
        Button(int xx, int yy, int ww, int hh) : x(xx), y(yy), w(ww), h(hh) {};
};

void start_game(sf::RenderWindow *w, Main *m);
void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s);

void start_screen_events(sf::RenderWindow *window, Main *m);

void PersonalityQuiz(sf::RenderWindow *w, Main *m);
bool check_button(sf::Event event, Button B);
void draw_Text(sf::RenderWindow *window, std::string str, int x, int y);

void the_character(sf::RenderWindow *w, Main *m);
void character_quiz(sf::RenderWindow *w, Main *m);
void magie_quiz(sf::RenderWindow *w, Main *m);
void lisa_quiz(sf::RenderWindow *w, Main *m);
void brat_quiz(sf::RenderWindow *w, Main *m);
void marge_quiz(sf::RenderWindow *w, Main *m);
void homero_quiz(sf::RenderWindow *w, Main *m);

void display_question_magie(sf::RenderWindow *w, Main *m);
void display_question_homero(sf::RenderWindow *w, Main *m);
void display_question_marge(sf::RenderWindow *w, Main *m);
void display_question_lisa(sf::RenderWindow *w, Main *m);
void display_question_brat(sf::RenderWindow *w, Main *m);
#endif /* !MY_HPP_ */
