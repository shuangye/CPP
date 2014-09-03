#ifndef CPP_OOP_ANIMAL_H
#define CPP_OOP_ANIMAL_H
#include "creature.h"

class Animal : public Creature
{
public:
    int weight;
    virtual void eat();
    virtual void desc();
};

#endif