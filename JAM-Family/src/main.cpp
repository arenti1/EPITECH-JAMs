/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void init_mainClass(Main *m)
{
    m->PersonalityQ.push_back(new Question("What's been the greatest achievement of your life?",
                                            "A. Handling Challenges",
                                            "B. Securing Awards",
                                            "C. Maintaining a happy family",
                                            "D. Pursuit of knowledge",
                                            "E. Following your bliss"));

    m->PersonalityQ.push_back(new Question("What describes you best?",
                                            "A. The ultimate realist",
                                            "B. Ready to try anything once",
                                            "C. An inspiration to others",
                                            "D. A natural leader",
                                            "E. A huge sense of duty"));
    m->PersonalityQ.push_back(new Question("What's your hobby?",
                                            "A. Blogging",
                                            "B. Traveling",
                                            "C. Sports",
                                            "D. Music",
                                            "E. Reading"));
    m->PersonalityQ.push_back(new Question("What's your biggest regret?",
                                            "A. Working too much",
                                            "B. Not spending enough time with family",
                                            "C. Worrying too much",
                                            "D. Taking life too seriously",
                                            "E. Not following your passion"));
    m->PersonalityQ.push_back(new Question("What's your greates fear?",
                                            "A. Fear of time",
                                            "B. Fear of failure",
                                            "C. Fear of being judged",
                                            "D. Fear of who you really are",
                                            "E. Fear of loss"));

}

int main(int argc, char **argv)
{
    Main m;
    init_mainClass(&m);

    sf::RenderWindow window(sf::VideoMode(1247, 701), "Simpsons Quiz");
   
    if (sf::Keyboard::Q)
        exit;    
   
    while (window.isOpen()){
        if (m.state == 0){
            start_game(&window, &m);
        }
        else if (m.state == 1){
            PersonalityQuiz(&window, &m);
           
        }
        else if (m.state == 2){
            the_character(&window, &m);
           // display_question_magie(&window, &m);

        }
        else if (m.state == 3){
            //end_game1();
        }
        else if (m.state == 4){
            //end_game2();
        }
        window.display();
    }
    return 0; 
}