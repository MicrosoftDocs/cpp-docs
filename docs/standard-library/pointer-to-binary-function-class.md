---
title: "pointer_to_binary_function Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xfunctional/std::pointer_to_binary"]
dev_langs: ["C++"]
helpviewer_keywords: ["pointer_to_binary_function function", "pointer_to_binary_function class"]
ms.assetid: fb50599f-bcb3-4076-a669-6dcc3eb189a5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# pointer_to_binary_function Class

Converts a binary function pointer into an adaptable binary function.

## Syntax

```cpp
template <class Arg1, class Arg2, class Result>
class pointer_to_binary_function
    : public binary_function <Arg1, Arg2, Result>
{
public:
    explicit pointer_to_binary_function(
        Result(*pfunc)(Arg1, Arg2));
    Result operator()(Arg1 left, Arg2 right) const;
};
```

### Parameters

*pfunc*<br/>
The binary function to be converted.

*left*<br/>
The left object that the *\*pfunc* is called on.

*right*<br/>
The right object that the *\*pfunc* is called on.

## Return Value

The template class stores a copy of `pfunc`. It defines its member function `operator()` as returning (\* **pfunc**)(_ *Left*, \_ *Right*).

## Remarks

A binary function pointer is a function object and may be passed to any C++ Standard Library algorithm that is expecting a binary function as a parameter, but it is not adaptable. To use it with an adaptor, such as binding a value to it or using it with a negator, it must be supplied with the nested types `first_argument_type`, `second_argument_type`, and `result_type` that make such an adaptation possible. The conversion by `pointer_to_binary_function` allows the function adaptors to work with binary function pointers.

## Example

The constructor of `pointer_to_binary_function` is rarely used directly. See the helper function [ptr_fun](../standard-library/functional-functions.md#ptr_fun) for an example of how to declare and use the `pointer_to_binary_function` adaptor predicate.

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
