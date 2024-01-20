/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"
#include <iostream>
#include <string>

int guessed;
int total;

class QandA {

private:
    sf::Text question;
	std::string questionText;
	sf::Text a1;
	std::string a1Text;
	sf::Text a2;
	std::string a2Text;
	sf::Text a3;
	std::string a3Text;
	sf::Text a4;
	std::string a4Text;
	sf::Text correctAnswer;
	std::string correctAnswerText;

    int questionCounter = 0;
	int correctAnswerCounter = 0;
};
/*
int quiz2(Main m)
{
    std::ifstream inFile;

    switch (m.character)
		{
		case 0:
			inFile.open("../questions/lisa.txt");
			break;
		case 1:
			inFile.open("");
			break;
		}
    

}
*/