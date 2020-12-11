---
description: "Learn more about: mem_fun1_ref_t Class"
title: "mem_fun1_ref_t Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::mem_fun1_ref_t"]
helpviewer_keywords: ["mem_fun1_ref_t class"]
ms.assetid: 7d6742f6-19ba-4523-b3c8-0e5b8f11464f
---
# mem_fun1_ref_t Class

An adapter class that allows a `non_const` member function that takes a single argument to be called as a binary function object when initialized with a reference argument. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Result, class Type, class Arg>
class mem_fun1_ref_t : public binary_function<Type, Arg, Result> {
    explicit mem_fun1_ref_t(
    Result (Type::* _Pm)(Arg));

    Result operator()(
    Type& left,
    Arg right) const;
};
```

### Parameters

*_Pm*\
A pointer to the member function of class `Type` to be converted to a function object.

*left*\
The object that the *_Pm* member function is called on.

*right*\
The argument that is being given to *_Pm*.

## Return Value

An adaptable binary function.

## Remarks

The class template stores a copy of *_Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning (**left**.\* `_Pm`)(**right**).

## Example

The constructor of `mem_fun1_ref_t` is not usually used directly; the helper function `mem_fun_ref` is used to adapt member functions. See [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref) for an example of how to use member function adaptors.
