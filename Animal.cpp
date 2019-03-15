#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(): m_age(5), m_nom("bob")
{

}

Animal::Animal(int age,string nom): m_age(age), m_nom(nom)
{

}

Animal::Animal(Animal const& animalAcopier): m_age(animalAcopier.m_age), m_nom(animalAcopier.m_nom)
{
 //m_humain = new Humain(*(animalAcopier.m_humain));
 cout << "copié" << endl;
}




void Animal::cri()const
{
    cout << "oups" << endl;
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
    //delete m_humain; 
}