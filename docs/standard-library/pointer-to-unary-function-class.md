---
description: "Learn more about: pointer_to_unary_function Class"
title: "pointer_to_unary_function Class"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::pointer_to_unary"]
helpviewer_keywords: ["pointer_to_unary_function function", "pointer_to_unary_function class"]
ms.assetid: 05600207-b916-4759-beca-6b6facd2d6f6
---
# pointer_to_unary_function Class

Converts a unary function pointer into an adaptable unary function. Deprecated in C++11, removed in C++17.

## Syntax

```cpp
template <class Arg, class Result>
class pointer_to_unary_function
    : public unary_function<Arg, Result>
{
    explicit pointer_to_unary_function(Result(*pfunc)(Arg));
    Result operator()(Arg left) const;
};
```

### Parameters

*pfunc*\
The binary function to be converted.

*left*\
The object that the *\*pfunc* is called on.

## Return Value

The class template stores a copy of `pfunc`. It defines its member function `operator()` as returning (\* **pfunc**)(_ *Left*).

## Remarks

A unary function pointer is a function object and may be passed to any C++ Standard Library algorithm that is expecting a unary function as a parameter, but it is not adaptable. To use it with an adaptor, such as binding a value to it or using it with a negator, it must be supplied with the nested types `argument_type` and `result_type` that make such an adaptation possible. The conversion by `pointer_to_unary_function` allows the function adaptors to work with binary function pointers.

## Example

The constructor of `pointer_to_unary_function` is rarely used directly. See the helper function [ptr_fun](../standard-library/functional-functions.md#ptr_fun) for an example of how to declare and use the `pointer_to_unary_function` adaptor predicate.
