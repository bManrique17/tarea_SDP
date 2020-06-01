
#include "Meal.h"

Meal::Meal(){
}

void Meal::setSandwich(string _sandwich){
    sandwich = _sandwich;
}

void Meal::setSideOrder(string _sideOrder){
    sideOrder = _sideOrder;
}

void Meal::setDrink(string _drink){
    drink = _drink;
}

void Meal::setOffer(string _offer){
    offer = _offer;
}

void Meal::setPrice(double _price){
    price = _price;
}

string Meal::toString(){
    return sandwich+"|"+sideOrder+"|"+drink+"|"+offer;
}

Meal::~Meal(){
}
