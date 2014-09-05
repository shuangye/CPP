#include <iostream>
#include "food.h"

using namespace std;

void Food :: eat()
{
    cout << "Eating food..." << endl;
}

Food :: Food()
{
    cout << "Food :: Food()" << endl;
}

Food :: ~Food()
{
    cout << "Food :: ~Food()" << endl;
}

void Food :: desc()
{
    cout << "Class Food." << endl;
}
