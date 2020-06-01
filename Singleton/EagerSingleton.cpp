
#include "EagerSingleton.h"
#include <iostream>

EagerSingleton* EagerSingleton::instance = nullptr;

EagerSingleton::EagerSingleton(){
    
}

EagerSingleton* EagerSingleton::getInstance(){
    if (EagerSingleton::instance != nullptr)
        EagerSingleton::instance = new EagerSingleton();        
    return EagerSingleton::instance;
}

void EagerSingleton::function(){
    std::cout<<"The instance has been called!"<<std::endl;
}

EagerSingleton::~EagerSingleton(){
    
}