
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
        }





}