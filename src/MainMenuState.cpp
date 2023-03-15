
#include <sstream>

#include "MainMenuState.hpp"

#include "DEFINITIONS.hpp"

#include <iostream>

namespace Sonar 
{
    MainMenuState:: MainMenuState (GameDataRef data) :_data( data )
    {

    }

        void MainMenuState::Init()
        {
            this-> _data->assets.LoadTexture("background", MAIN_MENU_BACKGROUND_FILEPATH);
      
            this-> _data->assets.LoadTexture("play button", MAIN_MENU_PLAY_BUTTON);
      
            this-> _data->assets.LoadTexture("play button outer", MAIN_MENU_PLAY_BUTTON_OUTER);
      
            this-> _data->assets.LoadTexture("title", MAIN_MENU_TITLE_PATH);

            this->_backButton.setTexture(this-> _data->assets.GetTexture("background"));

            this->_playButton.setTexture(this-> _data->assets.GetTexture("play button"));

            this->_playButtonOuter.setTexture(this-> _data->assets.GetTexture("play butotn outer"));

            this->_title.setTexture(this-> _data->assets.GetTexture("title"));


            this -> _playButton.setPosition((SCREEN_WIDTH/2) -(this->_playButton.getGlobalBounds().width/2), (SCREEN_HEIGHT / 2 ) - (this->_playButton.getGlobalBounds().height /2));

            this -> _playButtonOuter.setPosition((SCREEN_WIDTH/2) -(this->_playButtonOuter.getGlobalBounds().width/2), (SCREEN_HEIGHT / 2 ) - (this->_playButtonOuter.getGlobalBounds().height /2));

            this -> _title.setPosition((SCREEN_WIDTH/2) -(this->_title.getGlobalBounds().width/2), (SCREEN_HEIGHT / 2 ) - (this->_title.getGlobalBounds().height * 0.1));
        }


    void MainMenuState::HandleInput()
    {
        sf::Event event;

        while (this-> _data->window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                 {
                    this -> _data->window.close();
                }
            
            if(this-> _data->input.IsSpriteClicked(this->_playButton,sf::Mouse::Left, this-> _data-> window))
                {
                    std::cout<<"Go to Game Screen" << std::endl;
                }
        }
    }
    
    void MainMenuState::Update(float dt)
    {

    }

    void MainMenuState::Draw(float dt)
    {
        this-> _data-> window.clear();

        this->_data-> window.draw(this->_backButton);
        this->_data-> window.draw(this->_playButton);
        this->_data-> window.draw(this->_playButtonOuter);
        this->_data-> window.draw(this->_title);
    }



}