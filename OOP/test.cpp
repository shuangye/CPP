#include <iostream>
#include "food.h"
#include "fruit.h"
#include "creature.h"
#include "animal.h"
#include "mammal.h"

using namespace std;


////////////////////////////////////////////////////////////////////////////////////////////
// object lifecycle

// Food :: Food()
// Fruit :: Fruit()
// end of lifecycle_stack().
// Fruit :: ~Fruit()
// Food :: ~Food()
// Conclusion: when the object is allocated on the stack, it will be destructed when it leaves its scope.
void lifecycle_stack()
{
    Fruit fruit;
    cout << "end of lifecycle_stack()." << endl;
}

// Food :: Food()
// Fruit :: Fruit()
// Fruit :: ~Fruit()
// Food :: ~Food()
// end of lifecycle_heap().
// Conclusion: when the object is allocated on the heap, it will be destructed when delete the pointer to it.
void lifecycle_heap()
{
    Fruit *fruit = new Fruit();
    delete fruit;
    fruit = nullptr;
    cout << "end of lifecycle_heap()." << endl;
}




////////////////////////////////////////////////////////////////////////////////////////////
// polymorphism
// Ref: http://www.raywenderlich.com/62990/introduction-c-ios-developers-part-2
// up casting, 上溯造型，安全的转换
// down casting, 下溯造型，不安全的转换

// 静态绑定 vs. 动态绑定是 C++ 中老生常谈 commonplace 的话题，使用哪种应视具体情况而定。
// polymorphism - static binding. Determined during compile time.
// The compiler is responsible for resolving which method to be called,
// and that behaviour is therefore baked in to the binary after compilation.
// There is no ability to change this behaviour at runtime.
//
// Since the type of food is Food*, the compiler generates code to call Food::desc().
// The compiler knows nothing about the fact that food is actually of type Fruit*
// 而在 Objective-C 中，不管是否使用上溯造型，具体调用哪个方法还是由 runtime 动态绑定的
void static_bind()
{
    Fruit *fruit = new Fruit();
    Food *food = (Food *)fruit;  // up casting
    food -> desc();  // "Class Food."
    delete fruit;
    fruit = nullptr;
}

// polymorphism - dynamic binding. Determined during runtime.
// The runtime is responsible to decide which method should be called.
// Virtual functions in C++ provide a mechanism for dynamic binding.
// It defers the choice of which function is called until runtime
// through the use of a lookup table - one for each class.
// 相对于静态绑定，动态绑定会带来一些运行时的开销。
// 如果继承链中混合了 virtual 方法和 non-virtual 方法，那会怎样呢？
//
// When you create animal, an instance of Animal, its v-table (virtual table) will be
// the v-table for Animal. When cast to Creature *, it doesn’t alter the contents of the object.
// The v-table is still the v-table for Animal, not Creature. Therefore when the v-table is looked up
// for the call to desc(), the result is Animal::desc() which will be called.
void dynamic_bind()
{
    Animal *animal = new Animal();
    Creature *creature = (Creature *)animal;
    creature -> desc();  // "Class Animal."
    delete animal;
    animal = nullptr;
}

// 在继承链中可以混合虚方法和非虚方法 (hide virtual)
// 此时调用的函数似乎取决于 cast 后的类型是 virtual 还是非 virtual
// 若 Creature::desc() 是虚函数，则仍调用 Mammal::desc(); 
// 若 Creature::desc() 是非虚函数，则调用 Creature::desc()
void mixed_virtual()
{
    Mammal *mammal = new Mammal();
    Creature *creature = (Creature *)mammal;
    creature -> desc();
    delete mammal;
    mammal = nullptr;
}
