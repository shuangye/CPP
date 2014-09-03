#include <iostream>
#include "food.h"
#include "fruit.h"
#include "creature.h"
#include "animal.h"

using namespace std;


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
void dynamic_bind()
{
    Animal *animal = new Animal();
    Creature *creature = (Creature *)animal;
    creature -> desc();  // "Class Animal."
    delete animal;
    animal = nullptr;
}