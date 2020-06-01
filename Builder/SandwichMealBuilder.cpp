
#include "SandwichMealBuilder.h"


SandwichMealBuilder::SandwichMealBuilder(){
    meal = new Meal();
}

void SandwichMealBuilder::addSandwich(string param) {
    meal->setSandwich(param);
}

void SandwichMealBuilder::addSides(string param) {
    meal->setSideOrder(param);
}

void SandwichMealBuilder::addDrink(string param) {
    meal->setDrink(param);
}

void SandwichMealBuilder::addOffer(string param) {
    meal->setOffer(param);
}

void SandwichMealBuilder::setPrice(double param) {
    meal->setPrice(param);
}

Meal* SandwichMealBuilder::getMeal() {
    return meal;
}
      
SandwichMealBuilder::~SandwichMealBuilder(){
    
}
