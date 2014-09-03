#ifndef CPP_OOP_FRUIT_H
#define CPP_OOP_FRUIT_H

#include "food.h"

class Fruit : public Food
{
public:
    int weight;
    void eat();
    void desc();
};

#endif