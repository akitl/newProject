#include "lib/Animal.h"
#include "lib/Chien.h"
#include "lib/Canin.h"
#include <iostream>

using namespace std;
int Animal::compteur = 0;
void crier(Animal const &   a){
    a.cri();
}

int main (void)
{

Chien a;
Animal b(8,"rex");
Animal g(8,"rex");
cout <<"a est un : " << a.getRace() << endl;
if (a.isMoveable()){
    cout << "a isMoveable" << endl;
}
cout << "avons instancie " ;
Animal::nbAnimal();
cout << "animal " << endl;

crier(a);
crier(b);

}