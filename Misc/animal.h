#pragma once
#ifndef CPP_ENTITIES_ANIMAL_H
#define CPP_ENTITIES_ANIMAL_H

class Animal
{
public:
    int weight;
    virtual void eat();
    virtual void desc();
};

#endif
