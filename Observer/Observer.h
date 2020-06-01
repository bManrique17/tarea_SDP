
#pragma once

#include "Subject.h"

class Subject;

class Observer{
    public:        
        virtual void update(Subject*) = 0;        
};
