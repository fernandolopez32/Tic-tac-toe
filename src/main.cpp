// #include <SFML/Graphics.hpp>

#include <iostream>

#include "Game.hpp"
// #define SCREEN_WIDTH 1024

// #define SCREE_HEIGHT 1024

int main()
{
    
    // sf:: RenderWindow window(sf::VideoMode(SCREEN_WIDTH,SCREE_HEIGHT), "Tic-Tac-Toe");

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

    Sonar::Game(800,600, "SFML Starter")

    return EXIT_SUCCESS;
}