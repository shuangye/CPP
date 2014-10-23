The STL has both container concepts and container types. The concepts are general categories with names such as container, sequence container, and associative container. The container types are templates you can use to create specific container objects.
原来有 11 种 container types: deque, list, queue, priority_queue, stack, vector, map, multimap, set, multiset, and bitset.
C++11 增加了 forward_list, unordered_map, unordered_multimap, unordered_set, and unordered_multiset, 并把 bitset 从 container category 移动到了其自己一个独立的 category.
All container are mutable.
对容器的常见操作，其 method 实现大多不是该容器类的成员方法，这样就避免了为每种容器单独提供一个实现。同时也可能有成员方法版，这是为了给那个容器类提供特别的优化。

#include <vector>  // std::vector
A vector is implemented as a single, contiguous, block of memory. 向 vector 中添加元素是昂贵的操作，但随机访问性能很好。Vector 使用的是动态内存分配。

#include <list>  // std::list
std::list 是用双向链表实现的，故不能用 [] 或 at() 函数访问其中的元素，但可用 iterator 遍历之。

#include <set>  // std::set
