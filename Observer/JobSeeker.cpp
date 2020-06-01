
#include "JobSeeker.h"
#include "HeadHunter.h"
#include <vector>
#include <iostream>

using namespace std;

JobSeeker::JobSeeker(string _name){
    name = _name;
}

string JobSeeker::getName(){
    return name;
}

void JobSeeker::update(Subject* subject) {
    vector <string> jobs = dynamic_cast<HeadHunter*>(subject)->getJobs();
    cout<<"Me llamo "+name+" y he sido notificado"<<endl;
}      

JobSeeker::~JobSeeker(){

}