Each container class defines a class scope typedef name called iterator. So the vector<int> class has iterators of type vector<int>::iterator.
The STL (conceptually) defines 5 kinds of iterators and describes its algorithms in terms of which kinds of iterators it needs.
Input iterator: for single-pass, read-only algorithms;
Output iterator: for single-pass, write-only algorithms;
Forward iterator: for multiple-pass, read-write algorithms;
Bidirectional iterator: A bidirectional iterator has all the features of a forward iterator and adds support for the two decrement operators (prefix and postfix);
Random access iterator.
这 5 种迭代器都定义了 *, ==, != 运算符（有些可能是 overloaded）。且满足若 iterator1 == iterator2, 则 *iterator1 == *iterator2.
区分 iterator 的目的是，使用尽可能低要求的 iterator 来满足尽可能多的 containers.
Iterator Capability         Input  Output Forward  Bidirectional  Random
Dereferencing read          Y      N      Y        Y              Y
Dereferencing write         N      Y      Y        Y              Y
Fixed and repeatable order  N      N      Y        Y              Y
++i, i++                    Y      Y      Y        Y              Y
--i, i--                    N      N      N        Y              Y
i[n]                        N      N      N        N              Y
i + n                       N      N      N        N              Y
i - n                       N      N      N        N              Y
i += n                      N      N      N        N              Y
i -=n                       N      N      N        N              Y



// iterator with an explicit type
list<double>::iterator pr;
for (pr = scores.begin(); pr != scores.end(); pr++)
    cout << *pr << endl;
    
// C++ automatic type deduction
for (auto pr = scores.begin(); pr != scores.end(); pr++)
    cout << *pr << endl;
    
// C++ 11 range-based for loop:
for (auto x : scores)
    cout << x << endl;
    
// avoid using the iterators directly; use an STL function, such as for_each()
for_each(scores.begin(), scores.end(), func);