#include "Game.hpp"

namespace Sonar 
{
    Game::Game(int width, int height, std::string title)
    {
        _data->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
    }
}