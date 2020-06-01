
#pragma once

#include "Car.h"
#include "LuxuryCar.h"
#include "SmallCar.h"
#include "SedanCar.h"

class CarFactory{
    private:
        
    public:
        CarFactory();
        Car* buildCar(CarType);
        ~CarFactory();
};