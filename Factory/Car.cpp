
#include "Car.h"
        
Car::Car(){
    
}

CarType Car::getModel(){
    return model;
}

void Car::setModel(CarType _model){
    model = _model;
}

Car::~Car(){

}

