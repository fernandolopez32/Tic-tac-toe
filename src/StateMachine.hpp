#pragma once 

#include <memory>
#include <stack>

#include "State.hpp"

namespace Sonar
{   
    typedef std::unique_ptr<State> StateRef;
    
    class StateMachine
    {
        public:
            StateMachine(){}
            ~StateMachine(){}

            void AddState(StateRef newState, bool isRepacing = true);
            void RemoveState();

            void ProcessStateChanges();

            StateRef &GetActiveStaet();

        private:
            std::stack<StateRef> _states;

            StateRef _newState;

            bool _isRemoving;
            bool _isAdding; 
            bool _isReplacing;
            
    };

} // namespace Sonar


