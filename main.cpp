
#include <iostream>
#include <vector>
#include "Singleton/EagerSingleton.h"
#include "Factory/Car.h"
#include "Factory/CarFactory.h"
#include "Factory/CarType.h"
#include "Factory/LuxuryCar.h"
#include "Factory/SedanCar.h"
#include "Factory/SmallCar.h"
#include "Observer/JobSeeker.h"
#include "Observer/HeadHunter.h"
#include "Builder/MealDirector.h"
#include "Builder/SandwichMealBuilder.h"

using namespace std;

int menu();
void singleton();
void factory();
void observer();
void builder();

int main(){

    int user_option;
    do{
        user_option = menu();

        cout<<endl;

        switch (user_option){
            case 1:
                singleton();
                break;
            case 2:
                factory();
                break;
            case 3:
                observer();
                break;
            case 4:
                builder();
                break;
            default:                
                break;
        }
    } while (user_option != 0);
    


    cout<<endl;
    cout<<"Fin del programa."<<endl;
}

int menu(){
    int user_option = 0;

    cout<<"***Tarea|Patrones de Diseño de Software***"<<endl;
    cout<<"(1) Singleton"<<endl;
    cout<<"(2) Factory"<<endl;
    cout<<"(3) Observer"<<endl;
    cout<<"(4) Builder"<<endl;
    cout<<"(0) Salir"<<endl;
    cout<<"->Ingrese su opcion: ";

    cin>>user_option;

    return user_option;
}

void singleton(){

    EagerSingleton* instance = EagerSingleton::getInstance();   

    cout<<"***Singleton***"<<endl;    

    instance->function();

    cout<<endl;

    delete instance;
}

void factory(){

    vector <Car*> list_cars;
    int user_option;
    do{
            
        cout<<"***Factory***"<<endl;    
        cout<<"(1) Luxury"<<endl;
        cout<<"(2) Small"<<endl;
        cout<<"(3) Sedan"<<endl;
        cout<<"(0) Menu principal"<<endl;
        cout<<"->Indique el tipo de auto a crear: ";

        cin>>user_option;        

        switch (user_option){
            case 1:
                list_cars.push_back(CarFactory::buildCar(LUXURY));
                cout<<"Luxury creado!"<<endl;
                break;
            case 2:
                list_cars.push_back(CarFactory::buildCar(SMALL));
                cout<<"Small creado!"<<endl;
                break;
            case 3:
                list_cars.push_back(CarFactory::buildCar(SEDAN));
                cout<<"Sedan creado!"<<endl;
                break;
            default:
                break;
        }
    } while (user_option != 0);

    cout<<endl;     
}

void observer(){    
    HeadHunter* head_hunter = new HeadHunter();
    int user_option;
    do{ 
        cout<<"***Observer***"<<endl;
        cout<<"(1) Agregar trabajo"<<endl;
        cout<<"(2) Crear buscador de empleo"<<endl;
        cout<<"(3) Eliminar buscador de empleo"<<endl;
        cout<<"(4) Mostrar empleos"<<endl;
        cout<<"(0) Menu principal"<<endl;
        cout<<"->Indique su opcion: ";

        cin>>user_option;

        string job_name;
        string job_seeker_name;

        switch (user_option){
            case 1:
                cout<<"->Ingrese el nombre del trabajo: ";
                cin>>job_name;
                head_hunter->addJob(job_name);
                head_hunter->notifyAllObservers();
                cout<<"Creado!"<<endl;
                break; 
            case 2:           
                cout<<"->Ingrese su nombre: ";
                cin>>job_seeker_name;
                head_hunter->registerObserver(new JobSeeker(job_seeker_name));                
                cout<<"Creado!"<<endl;
                break;
            case 3:           
                cout<<"->Ingrese su nombre: ";
                cin>>job_seeker_name;
                head_hunter->removeObserver(new JobSeeker(job_seeker_name));
                cout<<"Eliminado!"<<endl;
                break;
            case 4:           
                cout<<"     Empleos: ";
                for (size_t i = 0; i < head_hunter->getJobs().size(); i++)
                    cout<<i<<". "<<head_hunter->getJobs()[i]<<endl;                                                                
            default:
                break;
        }
        cout<<endl;
    } while (user_option != 0);
    delete head_hunter;
}

void builder(){
    MealDirector* meal_director = new MealDirector();    
    int user_option;
    do{ 
        cout<<"***Builder***"<<endl;
        cout<<"Haciendo un combo de sandwich..."<<endl;
        SandwichMealBuilder* sandwich_builder = new SandwichMealBuilder();
        meal_director->makeMeal(sandwich_builder);
        int option;
        do{
            cout<<"(1) Agregar sandwich"<<endl;
            cout<<"(2) Agregar sides"<<endl;
            cout<<"(3) Agregar bebida"<<endl;
            cout<<"(4) Agregar orden"<<endl;
            cout<<"(5) Colocar precio"<<endl;
            cout<<"(0) Terminar"<<endl;
            cout<<"->Indique su opcion: ";
            cin>>option;
            
            string temp;
            double price;
            switch (option){
            case 1:
                cout<<"->Ingrese: ";
                cin>>temp;
                sandwich_builder->addSandwich(temp);
                break;
            case 2:
                cout<<"->Ingrese: ";
                cin>>temp;
                sandwich_builder->addSides(temp);
                break;
            case 3:
                cout<<"->Ingrese: ";
                cin>>temp;
                sandwich_builder->addDrink(temp);
                break;
            case 4:
                cout<<"->Ingrese: ";
                cin>>temp;
                sandwich_builder->addOffer(temp);
                break;
            case 5:
                cout<<"->Ingrese: ";
                cin>>price;
                sandwich_builder->setPrice(price);
                break;                                            
            default:
                user_option = 0;
                break;
            }
        } while (option != 0);  
        cout<<"CREADO! :: "<< sandwich_builder->getMeal()->toString()<<endl;         
    } while (user_option != 0);
    delete meal_director;
}