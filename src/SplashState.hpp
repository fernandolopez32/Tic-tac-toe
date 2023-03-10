#pragma once

#include <SFML/Graphics.hpp>

#include "State.hpp"

#include "Game.hpp" 

namespace Sonar
{
    class SplashState : public State
    {
        public :  
            SplashState(GameDataRef);

            void Init();
            
            void HandleInput();

            void Update( float dt);

            void Draw (float dt);

        private: 
        GameDataRef _data;

        sf::Clock _clock;

        sf::Sprite _Background;
    };

} 
