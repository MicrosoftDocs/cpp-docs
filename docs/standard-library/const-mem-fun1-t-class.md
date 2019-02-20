---
title: "const_mem_fun1_t Class"
ms.date: "11/04/2016"
f1_keywords: ["xfunctional/std::const_mem_fun1_t"]
helpviewer_keywords: ["const_mem_fun1_t class"]
ms.assetid: 250fac30-9663-4133-9051-6303f76ea259
---
# const_mem_fun1_t Class

An adapter class that allows a **const** member function that takes a single argument to be called as a binary function object when initialized with a pointer argument. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Result, class Type, class Arg>
class const_mem_fun1_t : public binary_function<const Type *, Arg, Result>
{
    explicit const_mem_fun1_t(Result (Type::* _Pm)(Arg) const);
    Result operator()(const Type* _Pleft, Arg right) const;
};
```

### Parameters

*_Pm*<br/>
A pointer to the member function of class `Type` to be converted to a function object.

*_Pleft*<br/>
The **const** object that the *_Pm* member function is called on.

*right*<br/>
The argument that is being given to *_Pm*.

## Return Value

An adaptable binary function.

## Remarks

The template class stores a copy of *_Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning ( *_Pleft*->\*<em>Pm</em>)( *right* ) **const**.

## Example

The constructor of `const_mem_fun1_t` is not usually used directly; the helper function `mem_fun` is used to adapt member functions. See [mem_fun](../standard-library/functional-functions.md#mem_fun) for an example of how to use member function adaptors.

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
