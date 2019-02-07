---
title: "mem_fun_t Class"
ms.date: "11/04/2016"
f1_keywords: ["xfunctional/std::mem_fun_t"]
helpviewer_keywords: ["mem_fun_t class"]
ms.assetid: 242566d4-750c-4c87-9d63-2e2c9d19ca2a
---
# mem_fun_t Class

An adapter class that allows a `non_const` member function that takes no arguments to be called as a unary function object when initialized with a pointer argument.

## Syntax

```cpp
template <class Result, class Type>
class mem_fun_t : public unary_function<Type *, Result> {
    explicit mem_fun_t(Result (Type::* _Pm)());

    Result operator()(Type* _Pleft) const;

};
```

### Parameters

*_Pm*<br/>
A pointer to the member function of class `Type` to be converted to a function object.

*_Pleft*<br/>
The object that the *_Pm* member function is called on.

## Return Value

An adaptable unary function.

## Remarks

The template class stores a copy of *_Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning ( `_Pleft`->* `_Pm`)( ).

## Example

The constructor of `mem_fun_t` is not usually used directly; the helper function `mem_fun` is used to adapt member functions. See [mem_fun](../standard-library/functional-functions.md#mem_fun) for an example of how to use member function adaptors.

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

- [\<functional>](../standard-library/functional.md)
- [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
- [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
