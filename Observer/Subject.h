
#pragma once

#include "Observer.h"

class Observer;

class Subject{    
    public:        
        virtual void registerObserver(Observer*) = 0;
        virtual void removeObserver(Observer*) = 0;
        virtual void notifyAllObservers() = 0;        
};

