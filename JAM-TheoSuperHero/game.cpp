/*
** EPITECH PROJECT, 2023
** game
** File description:
** get ready to desgin
*/

#include "game.hpp"
/*
bool display_arrow(Game *game)
{
    if (game->look_arrow_position(*game->PlayButton->sprite, 845, 350) == true)
        return (true);
    if (game->look_arrow_position(*game->HelpButton->sprite, 845, 550) == true)
        return (true);
    if (game->look_arrow_position(*game->SettingsButton->sprite, 845, 450) == true)
        return (true);
    if (game->look_arrow_position(*game->QuitButton->sprite, 845, 650) == true)
        return (true);
    return (false);
}
void second_start(superheros *hero)
{
    sf::Event event;
    if ((event.mouseMove.x > 730) && (event.mouseMove.x < 890) &&
        (event.mouseMove.y > 386) && (event.mouseMove.y < 555))
        {
            this->TheWindow->draw(this->start_bg2);
        }
}

bool Game::look_arrow_position(sf::Sprite sprite, int pos_x, int pos_y)
{
    if (sprite.getGlobalBounds().contains(sf::Mouse::getPosition(*this->Window->window).x, sf::Mouse::getPosition(*this->Window->window).y))
    {
        this->ArrowButton->SetPositionAndScale(pos_x, pos_y, 0.2, 0.2);
        return (true);
    }
    return (false);
}

*/

bool superheros::look_to_change(sf::Sprite sprite, int pos_x, int pos_y)
{
    if (sprite.getGlobalBounds().contains(sf::Mouse::getPosition(*this->TheWindow).x, sf::Mouse::getPosition(*this->TheWindow).y))
    {
        return (true);
    }
}

bool display_page(superheros *hero, sf::Event event)
{
    hero->start_bg1.setPosition(0, 0);
    hero->start_bg2.setPosition(0, 0);
    // if(hero->start_bg2.getGlobalBounds().contains((sf::Mouse(*hero->TheWindow).x == 730), (sf::Mouse::getPosition(*hero->TheWindow).y == 389)))

    if ((sf::Mouse::getPosition().x > 800) && (sf::Mouse::getPosition().x < 970) &&
        (sf::Mouse::getPosition().y > 386) && (sf::Mouse::getPosition().y < 650))
        hero->TheWindow->draw(hero->start_bg2);
    else
        hero->TheWindow->draw(hero->start_bg1);
}

void superheros::start_game()
{
    sf::Event event;
    std::cout << "checking for erros in start game" << std::endl;
    sf::Mouse mouse;

    // sf::Mouse::getPosition()
    while (this->TheWindow->pollEvent(event))
    {

        if (event.type == sf::Event::Closed)
        {
            std::cout << "the game has been closed" << std::endl;
            this->TheWindow->close();
        }
        else if ((event.mouseButton.button == sf::Mouse::Left) &&
                 (event.mouseButton.x > 800) && (event.mouseButton.x < 970) &&
                 (event.mouseButton.y > 386) && (event.mouseButton.y < 555))
        {
            // std::cout << "clicking hererererererererere------------" < std::endl;
            this->state = HeroPage::EndGame;
        }
        // else if ((event.event.mouseButton.button == sf::Mouse::Left))
    }
    std::cout << "checking finished loop" << std::endl;
    this->TheWindow->clear(sf::Color::White);
    display_page(this, event);

    this->TheWindow->display();
}

void superheros::end_game()
{
    sf::Event event;
    while (this->TheWindow->pollEvent(event))
    {

        if ((event.mouseButton.button == sf::Mouse::Left) &&
            (event.mouseButton.x > 1350) && (event.mouseButton.x < 1579) &&
            (event.mouseButton.y > 750) && (event.mouseButton.y < 820)){
                this->TheWindow->close();
            }
    }
    this->TheWindow->draw(this->endgame_bg);
    this->TheWindow->display();
}