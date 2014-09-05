#ifndef CPP_OOP_ENTITIES_MAMMAL_H
#define CPP_OOP_ENTITIES_MAMMAL_H
#include "animal.h"

class Mammal : public Animal
{
public:
    int weight;
    void eat();
    void desc();
};

#endif