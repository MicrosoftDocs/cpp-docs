---
title: "Function Objects in the C++ Standard Library"
description: "Learn more about: Function Objects in the C++ Standard Library"
ms.date: 06/22/2025
helpviewer_keywords: ["functors", "C++ Standard Library, functors", "C++ Standard Library, function objects", "function objects"]
---
# Function Objects in the C++ Standard Library

A *function object*, or *functor*, is any type that implements `operator()`. This operator is referred to as the *call operator* or sometimes the *application operator*. The C++ Standard Library uses function objects primarily as sorting criteria for containers and in algorithms.

Function objects provide two main advantages over a regular function call. The first is that a function object can contain state. The second is that a function object is a type and therefore can be used as a template parameter.

## Creating a Function Object

To create a function object, create a type and implement `operator()`, such as:

```cpp
class LessThanFunctor
{
public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    LessThanFunctor less_than;
    int a = 5;
    int b = 7;
    bool ans = less_than(a, b);
}
```

The last line of the `main` function shows how you call the function object. This call looks like a call to a function, but it's actually calling `operator()` of the `LessThanFunctor` type. This similarity between calling a function object and a function is how the term function object came about.

## Function Objects and Containers

The C++ Standard Library contains several function objects in the [`<functional>`](functional.md) header file. One use of these function objects is as a sorting criterion for containers. For example, the [`set`](set-class.md) container is declared as follows:

```cpp
template <class Key,
    class Compare = std::less<Key>,
    class Allocator = std::allocator<Key>>
class set;
```

The second template argument is the function object [`less`](less-struct.md). This function object returns **`true`** if the first parameter is less than the second parameter. Since some containers sort their elements, the container needs a way of comparing two elements. The comparison is done by using the function object. You can define your own sorting criteria for containers by creating a function object and specifying it in the template list for the container.

## Function Objects and Algorithms

Another use of function objects is in algorithms. For example, the [`remove_if`](algorithm-functions.md#remove_if) algorithm is declared as follows:

```cpp
template <class ForwardIterator, class UnaryPredicate>
ForwardIterator remove_if(
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

The last argument to `remove_if` is a function object that returns a boolean value (a *predicate*). If the result of the function object is **`true`**, then the element is shifted such that it's beyond the new end returned by `remove_if`. You can use any of the function objects declared in the [`<functional>`](functional.md) header for the argument `pred` or you can create your own.

## See also

[C++ Standard Library Reference](cpp-standard-library-reference.md)
