#include "Canin.h"
#include <string>
#include <iostream>

Canin::Canin():m_race("Bichon"){
        
}
Canin::Canin(string race): m_race(race){
        
}


string Canin::getRace(){
return m_race;
}

void Canin::setRace(string race){
m_race = race;
}

Canin::~Canin(){
       
}