// #include <SFML/Graphics.hpp>

#include <iostream>

#include "Game.hpp"



#include "DEFINITIONS.hpp"
// #define SCREEN_WIDTH 1024

// #define SCREE_HEIGHT 1024

int main()
{
    
    // sf:: RenderWindow window(sf::VideoMode(SCREEN_WIDTH,SCREEN_HEIGHT), "Tic-Tac-Toe or Snake Game");
    // 
    // while (window.isOpen())
    // {
    //     sf::Event event;

    //         while (window.pollEvent(event))
    //         {
    //             switch (event.type)
    //             {
    //                 case sf::Event::Closed:
    //                         window.close();
    //                     break;
    //             }
    //         }
    //     window.clear();

    //     // ojects to draw
    //     window.display();
    // }

    std::cout << SPLASH_SCEEN_BACKGROUND_FILEPATH << std::endl;

    Sonar::Game(SCREEN_WIDTH,SCREEN_HEIGHT, "SFML Starter");


    return EXIT_SUCCESS;
}