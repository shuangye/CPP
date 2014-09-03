#include <iostream>
#include "book.h"

using namespace std;


void stack_heap(int argc)
{
    cout << "Stack address: " << &argc << endl;
    void *heap_addr = malloc(sizeof(int));
    cout << "Heap address: " << heap_addr << endl;
    free(heap_addr);
    heap_addr = NULL;
    
    Book book1;  // allocated on the stack
    book1.price = 10;
    book1.read();
    cout << "book1 address: " << &book1 << endl;
    
    Book *book2 = new Book();  // allocated on the heap
    book2 -> price = 20;
    book2 -> read();
    cout << "book2 address: " << book2 << endl;
    delete book2;
    book2 = nullptr;
    
    // even scalar types can be allocated on the heap    
	int *x = new int();
	*x = 2;	
	delete x;
	x = nullptr;
}

void updateObjectByVal(Book book, int val)
{
    book.price = val;
}

void updateObjectByRef(Book &book, const int &val)
{
    book.price = val;
}

// Passing by value also applies to class instances, not just scalar types.
// When you pass an object to a function, you're passing a COPY of the object, not the object itself.
// Passing by reference, in contrast, no copy is made. Thus, it is very efficient.
// You can also pass by const reference, just for performance improvement: void updateObject(const Book &book)
void parameter_passing()
{
    Book book;
    book.price = 1;
    updateObjectByVal(book, 2);
    cout << "Passing by value, book.price = " << book.price << endl;
        
    updateObjectByRef(book, 9);
    cout << "Passing by reference, book.price = " << book.price << endl;
}

