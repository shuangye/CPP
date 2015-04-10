#include "middle.h"
#include <iostream>
#include "animal.h"  // the animal class
using std::cout;

void cpp_function(void)
{
    Animal *animal = new Animal();
    animal->desc();
    animal->eat();
    delete animal;
    animal = nullptr;
}

void cpp_function_without_class(void)
{
    cout << "This is a cpp function without using C++ classes.\n";
}
