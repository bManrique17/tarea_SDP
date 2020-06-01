
#pragma once

class EagerSingleton{
    private:
        static EagerSingleton* instance;    
        EagerSingleton();
    public:
        static EagerSingleton* getInstance();
        void function();        
        ~EagerSingleton();    
};
