#ifndef CHIEN_H_
#define CHIEN_H_
#include <string>
#include "Animal.h"

using namespace std;

class Chien : public Animal
{

public:
    Chien();
    Chien(int age, string nom,string race);
    ~Chien();

    void cri() const;

    string getRace();
    void setRace(string race);

    void chercherLaBaballe();

private:
string m_race;

};

#endif 
