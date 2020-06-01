
#pragma once

#include <string>

using namespace std;

class Meal{
    private:
        string sandwich;
        string sideOrder;
        string drink;
        string offer;
        double price;
    public:
        Meal();
        void setSandwich(string);
        void setSideOrder(string);
        void setDrink(string);
        void setOffer(string);
        void setPrice(double);
        string toString();
        ~Meal();
};
