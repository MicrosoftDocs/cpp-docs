---
description: "Learn more about: const_mem_fun1_t Class"
title: "const_mem_fun1_t Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::const_mem_fun1_t"]
helpviewer_keywords: ["const_mem_fun1_t class"]
ms.assetid: 250fac30-9663-4133-9051-6303f76ea259
---
# const_mem_fun1_t Class

An adapter class that allows a **`const`** member function that takes a single argument to be called as a binary function object when initialized with a pointer argument. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Result, class Type, class Arg>
class const_mem_fun1_t : public binary_function<const Type *, Arg, Result>
{
    explicit const_mem_fun1_t(Result (Type::* member_ptr)(Arg) const);
    Result operator()(const Type* left, Arg right) const;
};
```

### Parameters

*member_ptr*\
A pointer to the member function of class `Type` to be converted to a function object.

*left*\
The **`const`** object that the *member_ptr* member function is called on.

*right*\
The argument that is being given to *member_ptr*.

## Return Value

An adaptable binary function.

## Remarks

The class template stores a copy of *member_ptr*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning `(left->member_ptr)(right) const`.

## Example

The constructor of `const_mem_fun1_t` is rarely used directly. `mem_fn` is used to adapt member functions. See [mem_fn](../standard-library/functional-functions.md#mem_fn) for an example of how to use member function adaptors.
