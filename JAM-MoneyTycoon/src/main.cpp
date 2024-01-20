#include "../include/main.hpp"

void main_loop(sf::RenderWindow *window, Main *M)
{
    M->bttn_clicked = false;

    while (window->isOpen()){
        while (window->pollEvent(M->event)){
            check_events(M, &M->button_A);
            close_window(window, M); 
        }
        draw_background(window, M->bttn_clicked, M);        
        draw_money(window, M);
        draw_bill(window, M);
        draw_moneyText(window, M);
        draw_motivation(window, M);
        window->draw(M->S.button_s);
        window->display();
        if (M->MONEY > 60000){
            M->game_state = 2;
            return;
        }
    }
}

int main()
{
    Main M;
    sf::RenderWindow window(sf::VideoMode(1200, 675), "Money tycoon");
    if (M.game_state == 0){
        start_screen(&window, &M);
    } 
    if (M.game_state == 1){
        main_loop(&window, &M);
    }
    end_screen(&window, &M);
}