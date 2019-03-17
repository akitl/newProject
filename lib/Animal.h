#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>

using namespace std;

class Animal
{

public:
    Animal();
    Animal(int age,string nom);
    Animal(Animal const& animalAcopier);
    ~Animal();

    virtual void cri() const;

    int getAge();
    void setAge(int age);

    string getNom();
    void setNom(string nom);

    friend bool operator==(Animal const& a, Animal const& b);

protected:
    int m_age;
    string m_nom;
    //Humain * m_humain;

    
};

#endif /* ANIMAL_H_ */
