---
description: "Learn more about: Function Objects in the C++ Standard Library"
title: "Function Objects in the C++ Standard Library"
ms.date: "03/15/2019"
helpviewer_keywords: ["functors", "C++ Standard Library, functors", "C++ Standard Library, function objects", "function objects"]
ms.assetid: 85f8a735-2c7b-4f10-9c4d-95c666ec4192
---
# Function Objects in the C++ Standard Library

A *function object*, or *functor*, is any type that implements operator(). This operator is referred to as the *call operator* or sometimes the *application operator*. The C++ Standard Library uses function objects primarily as sorting criteria for containers and in algorithms.

Function objects provide two main advantages over a straight function call. The first is that a function object can contain state. The second is that a function object is a type and therefore can be used as a template parameter.

## Creating a Function Object

To create a function object, create a type and implement operator(), such as:

```cpp
class Functor
{
public:
    int operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    Functor f;
    int a = 5;
    int b = 7;
    int ans = f(a, b);
}
```

The last line of the `main` function shows how you call the function object. This call looks like a call to a function, but it's actually calling operator() of the Functor type. This similarity between calling a function object and a function is how the term function object came about.

## Function Objects and Containers

The C++ Standard Library contains several function objects in the [\<functional>](../standard-library/functional.md) header file. One use of these function objects is as a sorting criterion for containers. For example, the `set` container is declared as follows:

```cpp
template <class Key,
    class Traits=less<Key>,
    class Allocator=allocator<Key>>
class set
```

The second template argument is the function object `less`. This function object returns **`true`** if the first parameter is less than the second parameter. Since some containers sort their elements, the container needs a way of comparing two elements. The comparison is done by using the function object. You can define your own sorting criteria for containers by creating a function object and specifying it in the template list for the container.

## Function Objects and Algorithms

Another use of functional objects is in algorithms. For example, the `remove_if` algorithm is declared as follows:

```cpp
template <class ForwardIterator, class Predicate>
ForwardIterator remove_if(
    ForwardIterator first,
    ForwardIterator last,
    Predicate pred);
```

The last argument to `remove_if` is a function object that returns a boolean value (a *predicate*). If the result of the function object is **`true`**, then the element is removed from the container being accessed by the iterators `first` and `last`. You can use any of the function objects declared in the [\<functional>](../standard-library/functional.md) header for the argument `pred` or you can create your own.

## See also

[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
