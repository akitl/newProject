#include "Animal.h"
#include "Chien.h"
#include <string>
#include <iostream>

Chien::Chien():Animal(), m_race("bichon")
{

}

Chien::Chien(int age, string nom,string race):Animal(age,nom), m_race(race)
{

}

string Chien::getRace(){
return m_race;
}

void Chien::setRace(string race){
m_race = race;
}

void Chien::cri()const
{
cout << "Wouaff" <<endl;
}

Chien::~Chien(){

}