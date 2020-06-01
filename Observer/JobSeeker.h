
#pragma once

#include <string>
#include "Observer.h"

class JobSeeker : public Observer{
    private:
        std::string name;        
    public:
        JobSeeker(std::string);
        void update(Subject*) override;        
        std::string getName();
        ~JobSeeker();
};

