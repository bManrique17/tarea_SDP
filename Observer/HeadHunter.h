
#pragma once

#include <vector>
#include <string>
#include "Subject.h"
#include "Observer.h"

class HeadHunter : public Subject{
    private:
        std::vector <std::string> jobs;
        std::vector <Observer*> list_observers;
    public:
        HeadHunter();
        void registerObserver(Observer*) override;
        void removeObserver(Observer*) override;
        void notifyAllObservers() override; 
        void addJob(std::string);
        std::vector <std::string> getJobs();
        std::string toString();
        ~HeadHunter();
};
