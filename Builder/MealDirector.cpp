
#include "MealDirector.h"
#include "MealBuilder.h"

MealDirector::MealDirector(){

}

void MealDirector::makeMeal(MealBuilder* _mealBuilder){
    mealBuilder = _mealBuilder;
}

MealDirector::~MealDirector(){
    delete mealBuilder;
}
