run.o:	EagerSingleton.o Car.o LuxuryCar.o SedanCar.o SmallCar.o CarFactory.o HeadHunter.o JobSeeker.o MealDirector.o SandwichMealBuilder.o Meal.o main.o
	g++ EagerSingleton.o Car.o LuxuryCar.o SedanCar.o SmallCar.o CarFactory.o HeadHunter.o JobSeeker.o MealDirector.o SandwichMealBuilder.o Meal.o main.o -o run

EagerSingleton.o:	Singleton/EagerSingleton.cpp Singleton/EagerSingleton.h
	g++ -c Singleton/EagerSingleton.cpp

Car.o:	Factory/Car.cpp Factory/Car.h
	g++ -c Factory/Car.cpp

LuxuryCar.o:	Factory/LuxuryCar.cpp Factory/LuxuryCar.h
	g++ -c Factory/LuxuryCar.cpp

SedanCar.o:	Factory/SedanCar.h Factory/SedanCar.cpp
	g++ -c Factory/SedanCar.cpp

SmallCar.o:	Factory/SmallCar.h Factory/SmallCar.cpp
	g++ -c Factory/SmallCar.cpp

CarFactory.o:	Factory/CarFactory.cpp Factory/CarFactory.h
	g++ -c Factory/CarFactory.cpp

HeadHunter.o:	Observer/HeadHunter.cpp Observer/HeadHunter.h
	g++ -c Observer/HeadHunter.cpp

JobSeeker.o:	Observer/JobSeeker.cpp Observer/JobSeeker.cpp
	g++ -c Observer/JobSeeker.cpp

MealDirector.o:	Builder/MealDirector.cpp Builder/MealDirector.h
	g++ -c Builder/MealDirector.cpp

SandwichMealBuilder.o:	Builder/SandwichMealBuilder.cpp Builder/SandwichMealBuilder.h
	g++ -c Builder/SandwichMealBuilder.cpp

Meal.o:	Builder/Meal.cpp Builder/Meal.h
	g++ -c Builder/Meal.cpp

main.o:	main.cpp
	g++ -c main.cpp