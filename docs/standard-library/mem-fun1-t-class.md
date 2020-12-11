---
description: "Learn more about: mem_fun1_t Class"
title: "mem_fun1_t Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::mem_fun1_t"]
helpviewer_keywords: ["mem_fun1_t class"]
ms.assetid: 01a8c2c2-b2f7-4e3f-869c-5b5b9f06ea54
---
# mem_fun1_t Class

An adapter class that allows a `non_const` member function that takes a single argument to be called as a binary function object when initialized with a pointer argument. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Result, class Type, class Arg>
class mem_fun1_t : public binary_function<Type *, Arg, Result> {
    explicit mem_fun1_t(
    Result (Type::* _Pm)(Arg));

    Result operator()(
    Type* _Pleft,
    Arg right) const;
};
```

### Parameters

*_Pm*\
A pointer to the member function of class `Type` to be converted to a function object.

*_Pleft*\
The object that the *_Pm* member function is called on.

*right*\
The argument that is being given to *_Pm*.

## Return Value

An adaptable binary function.

## Remarks

The class template stores a copy of *_Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning (**_Pleft**->\* `_Pm`)(**right**).

## Example

The constructor of `mem_fun1_t` is not usually used directly; the helper function `mem_fun` is used to adapt member functions. See [mem_fun](../standard-library/functional-functions.md#mem_fun) for an example of how to use member function adaptors.
