#include <iostream>
#include "test.h"
#include "template.h"

using namespace std;

// Template functions work without changing code, because the types of
// the arguments permit the compiler to infer what is going on. 
// But you need to tell the compiler which type you want a template class to use.
void test_template()
{
    int x = 1, y = 2;
    swap_number(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    
    float a = 1.2f, b = 2.4f;
    swap_number(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    
    Dot<int> dot(1, 2);
    cout << "dot(" << dot.x << ", " << dot.y << ")" << endl;
    
    Line<int, float> *line = new Line<int, float>(2, 3, 5.1f);
    cout << "line: " << line -> x << line -> y << line -> length << endl;
}