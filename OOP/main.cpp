// how to compile:
// cl /I entities main.cpp test.cpp entities/*.cpp

#include <iostream>
#include "test.h"

using namespace std;

int main(int argc, char *argv[])
{
    lifecycle_stack();
    lifecycle_heap();
    // static_bind();
    // dynamic_bind();
    // mixed_virtual();
    return 0;
}