#ifndef CPP_OOP_ENTITIES_FRUIT_H
#define CPP_OOP_ENTITIES_FRUIT_H

#include "food.h"

class Fruit : public Food
{
public:
    Fruit();
    ~Fruit();

    int weight;
    void eat();
    void desc();
};

#endif