#ifndef CHIEN_H_
#define CHIEN_H_
#include <string>
#include "Animal.h"
#include "Canin.h"

using namespace std;

class Chien : public Animal , public Canin
{

public:
    Chien();
    Chien(int age, string nom,string race);
    ~Chien();

    void cri() const;

    void chercherLaBaballe();

private:


};

#endif 
