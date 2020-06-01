
#pragma once

#include <string>
#include "Meal.h"

class MealBuilder{    
    public:
        virtual void addSandwich(std::string) = 0;
        virtual void addSides(std::string) = 0;
        virtual void addDrink(std::string) = 0;
        virtual void addOffer(std::string) = 0;
        virtual void setPrice(double) = 0;
        virtual Meal* getMeal() = 0;
};
