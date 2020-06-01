
#pragma once

#include <string>

#include "MealBuilder.h"
#include "Meal.h"

class SandwichMealBuilder : public MealBuilder{
    private:
        Meal* meal;
    public:
        SandwichMealBuilder();
        void addSandwich(string) override;
        void addSides(string) override;
        void addDrink(string) override;
        void addOffer(string) override;
        void setPrice(double) override;
        Meal* getMeal() override;
        ~SandwichMealBuilder();
};
