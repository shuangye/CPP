// how to compile: cl main.cpp test.cpp book.cpp

#include <iostream>
#include "book.h"
#include "test.h"

using namespace std;


int main(int argc, char *argv[])
{
    // stack_heap(argc);
    parameter_passing();
    pre_check(1024);
    pre_check(1025);
    return 0;
}
