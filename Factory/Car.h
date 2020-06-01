
#pragma once

#include "CarType.h"

class Car{
    protected:
        CarType model;
    public:
        Car();
        CarType getModel();
        void setModel(CarType);
        ~Car();
};


