---
description: "Learn more about: mem_fun_ref_t Class"
title: "mem_fun_ref_t Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::mem_fun_ref_t"]
helpviewer_keywords: ["mem_fun_ref_t class"]
ms.assetid: 7dadcac3-8d33-4e4b-a792-81bd53d3df39
---
# mem_fun_ref_t Class

An adapter class that allows a `non_const` member function that takes no arguments to be called as a unary function object when initialized with a reference argument. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Result, class Type>
class mem_fun_ref_t : public unary_function<Type, Result> {
    explicit mem_fun_ref_t(
    Result (Type::* _Pm)());

    Result operator()(Type& left) const;
};
```

### Parameters

*_Pm*\
A pointer to the member function of class `Type` to be converted to a function object.

*left*\
The object that the *_Pm* member function is called on.

## Return Value

An adaptable unary function.

## Remarks

The class template stores a copy of *_Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning (**left**.* `_Pm`)().

## Example

The constructor of `mem_fun_ref_t` is not usually used directly; the helper function `mem_fun_ref` is used to adapt member functions. See [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref) for an example of how to use member function adaptors.
