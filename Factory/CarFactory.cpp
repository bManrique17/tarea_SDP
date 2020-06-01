
#include "CarFactory.h"

CarFactory::CarFactory(){

}

Car* CarFactory::buildCar(CarType model){
    Car* newCar = nullptr;
    switch (model){
    case LUXURY:
        newCar = new LuxuryCar();
        break;    
    case SEDAN:
        newCar = new SedanCar();
        break;
    case SMALL:
        newCar = new SmallCar();
        break;
    default:
        break;
    }              
    return newCar;
}

CarFactory::~CarFactory(){

}
