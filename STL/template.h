#ifndef CPP_STL_TEMPLATE_H
#define CPP_STL_TEMPLATE_H

template <typename T>
void swap_number(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
class Dot
{
public:
    T x;
    T y;
    
    Dot(T x, T y) : x(x), y(y) {}
};

template <typename T1, typename T2>
class Line
{
public:
    T1 x;
    T1 y;
    T2 length;
    
    Line(T1 x, T1 y, T2 length) : x(x), y(y), length(length) {}
};

#endif
