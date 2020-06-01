
#pragma once

#include "Car.h"
#include "LuxuryCar.h"
#include "SmallCar.h"
#include "SedanCar.h"

class CarFactory{
    public:        
        static Car* buildCar(CarType);        
};