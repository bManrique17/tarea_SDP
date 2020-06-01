
#include "HeadHunter.h"
#include "JobSeeker.h"
using namespace std;

HeadHunter::HeadHunter(){

}

void HeadHunter::addJob(string job){
    jobs.push_back(job);
}

vector <string> HeadHunter::getJobs(){
    return jobs;
}

string HeadHunter::toString(){
    return "I'm HeadHunter";
}

void HeadHunter::registerObserver(Observer* observer){
    list_observers.push_back(observer);
}

void HeadHunter::removeObserver(Observer* _observer){
    int index = 0;
    for (auto &&observer : list_observers){                 
        if (dynamic_cast<JobSeeker*>(observer)->getName() == dynamic_cast<JobSeeker*>(_observer)->getName()){
            list_observers.erase(list_observers.begin() + index); 
        }    
        index++;    
    }
    delete _observer;
}


void HeadHunter::notifyAllObservers(){
    for (auto &&observer : list_observers){
        observer->update(this);
    }
}

HeadHunter::~HeadHunter(){

}
