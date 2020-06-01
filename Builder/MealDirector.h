
#pragma once

#include "MealBuilder.h"

class MealDirector{
    private:
        MealBuilder* mealBuilder;
    public:
        MealDirector();        
        void makeMeal(MealBuilder*);
        ~MealDirector();
};
