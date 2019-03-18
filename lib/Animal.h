#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
#include "Moveable.h"

using namespace std;

class Animal : public Moveable
{

public:
    Animal();
    Animal(int age,string nom);
    Animal(Animal const& animalAcopier);
    virtual ~Animal();

    virtual void cri() const;

    static void nbAnimal();

    bool isMoveable();

    int getAge();
    void setAge(int age);

    string getNom();
    void setNom(string nom);

    friend bool operator==(Animal const& a, Animal const& b);

protected:
    int m_age;
    string m_nom;
    static int compteur;

    
};

#endif /* ANIMAL_H_ */
