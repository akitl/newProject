#include "lib/Animal.h"
#include "lib/Chien.h"
#include <iostream>

using namespace std;

void crier(Animal const &   a){
    a.cri();
}

int main (void)
{
Chien a;
Animal b(8,"rex");
a.cri() ;
b.cri() ;

crier(a);
crier(b);

}