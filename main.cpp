#include "Animal.h"
#include <iostream>

using namespace std;

int main (void)
{
Animal a;
Animal b(8,"rex");
cout << a.getAge() << endl;
cout << b.getAge() << endl;
}