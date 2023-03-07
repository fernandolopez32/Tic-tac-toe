#pragma once

namespace Sonar
{
    class State
    {
        public:
            virtual void Int() = 0; 

            virtual void HandleInput() = 0; 
            virtual void Update() = 0;
            virtual void Draw(float dt) = 0;

            virtual void Pause() {}
            virtual void Resume() {}
    };
}