// how to compile: cl main.cpp test.cpp food.cpp fruit.cpp creature.cpp animal.cpp

#include <iostream>
#include "test.h"

using namespace std;

int main(int argc, char *argv[])
{
    static_bind();
    dynamic_bind();
    return 0;
}