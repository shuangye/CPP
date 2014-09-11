///////////// operator overloading //////////////////
// To distinguish between the prefix and postfix versions of the ++ operator,
// C++ adopted the convention of letting operator++() be the prefix version and
// operator++(int) be the suffix version; the argument is never used and hence needn't be given a name.

class iterator
{
    Node * pt;
    
public:
    iterator() : pt(0) {}
    iterator (Node * pn) : pt(pn) {}
    double operator*() { return pt->item;}
    
    iterator& operator++() // for ++it
    {
        pt = pt->p_next;
        return *this;
    }
    
    iterator operator++(int) // for it++
    {
        iterator tmp = *this;
        pt = pt->p_next;
        return tmp;
    }
    
    // ... operator==(), operator!=(), etc.
};
