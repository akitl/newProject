#include "Animal.h"
#include "Canin.h"
#include "Chien.h"
#include <string>
#include <iostream>

Chien::Chien():Animal(),Canin()
{

}

Chien::Chien(int age, string nom,string race):Animal(age,nom), Canin(race)
{

}



void Chien::cri()const
{
cout << "Wouaff" <<endl;
}

Chien::~Chien(){

}