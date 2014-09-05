#include <iostream>
#include "fruit.h"

using namespace std;

Fruit :: Fruit()
{
    cout << "Fruit :: Fruit()" << endl;
}

Fruit :: ~Fruit()
{
    cout << "Fruit :: ~Fruit()" << endl;
}

void Fruit :: eat()
{
    cout << "Eating fruit..." << endl;
}

void Fruit :: desc()
{
    cout << "Class Fruit." << endl;
}
