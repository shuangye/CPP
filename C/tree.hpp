#pragma once

#include <list>
using namespace std;

// 二叉链表的结点
template <typename T>
class node2
{
public:
	node2 *lchild;
	T data;
	node2 *rchild;
};

// 三叉链表的结点
template <typename T>
class node3
{
public:
	node3 *lchild;
	T data;
	node3 *parent;
	node3 *rchild;
};

// 二叉树的链式存储结构 - 二叉链表
template <typename T>
class binary_tree
{
public:
	node2<T> *root;
	explicit binary_tree<T>(size_t n);
	list<T> pre_order_traverse();
};

template <typename T>
binary_tree<T>::binary_tree(size_t n)
{
	for (int i = 0; i < n; ++i)
	{
		node2<T> *parent = new node2<T>();		
		parent.data = i;
	}
}

template <typename T>
list<T> binary_tree<T>::pre_order_traverse(node2<T> *root = this -> root)
{
	// list<T> result = new list<T>();
	if (nullptr != root)
	{
		list<T> result = new list<T>();
		result.add(root.data);		
		pre_order_traverse(root -> lchild);
		pre_order_traverse(root->rchild);
	}
	else
	{
		delete result;
		return nullptr;
	}	
}

