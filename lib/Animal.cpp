#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(): m_age(5), m_nom("bob")
{
++compteur;
}

Animal::Animal(int age,string nom): m_age(age), m_nom(nom)
{
++compteur;
}

Animal::Animal(Animal const& animalAcopier): m_age(animalAcopier.m_age), m_nom(animalAcopier.m_nom)
{
 ++compteur;
}

bool Animal::isMoveable(){
    return true;
}


void Animal::cri()const
{
    cout << compteur << endl;
}

void Animal::nbAnimal(){
    cout << compteur << endl;
}

int Animal::getAge(){
   return m_age;
}
void Animal::setAge(int age){
    m_age = age;
}

string Animal::getNom(){
   return m_nom;
}
void Animal::setNom(string nom){
    m_nom = nom;
}

bool operator==(Animal const& a, Animal const& b)
{
    if (a.m_nom == b.m_nom && a.m_age == b.m_age)
        return true;
    else
        return false;
}


Animal::~Animal()
{
    --compteur;
}