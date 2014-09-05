#ifndef CPP_OOP_ENTITIES_APPLE_H
#define CPP_OOP_ENTITIES_APPLE_H

#include "fruit.h"

class Apple : public Fruit
{
public:
    int weight;
    void eat();
    void desc();
};

#endif