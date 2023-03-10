#include <sstream>
#include "SplashState.hpp"

#include <iostream>

#include"DEFINITIONS.hpp"
namespace Sonar
{
    SplashState :: SplashState ( GameDataRef data) : _data(data)
    {

    }

    void SplashState::Init()
    {
        this-> _data->assets.LoadTexture("Slash State Background", "SPLASH_SCENE_BACKGROUND_FILEPATH ");

        _Background.setTexture( this-> _data->assets.GetTexture("Slash State Background"));

    };

    void SplashState::HandleInput()
    {
        sf::Event event;

        while (this -> _data -> window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
            {
                this->_data -> window.close();
            }
        }
    };

    void SplashState::Update(float dt)
    {
        if(this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
        {
            //SWITCH TO MAIN MENU 
            std::cout<<"go to main menu" << std::endl;
        }
    }

    void SplashState::Draw(float dt)
    {
        this -> _data-> window.clear(sf::Color::Red);

        this-> _data->window.draw(this->_Background);

        this-> _data-> window.display();
    }
    

}