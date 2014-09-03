#ifndef CPP_OOP_CREATURE_H
#define CPP_OOP_CREATURE_H

class Creature
{
public:
    int weight;
    virtual void eat();
    virtual void desc();
};

#endif