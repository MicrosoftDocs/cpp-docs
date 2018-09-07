---
title: "mem_fun1_ref_t Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xfunctional/std::mem_fun1_ref_t"]
dev_langs: ["C++"]
helpviewer_keywords: ["mem_fun1_ref_t class"]
ms.assetid: 7d6742f6-19ba-4523-b3c8-0e5b8f11464f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# mem_fun1_ref_t Class

An adapter class that allows a `non_const` member function that takes a single argument to be called as a binary function object when initialized with a reference argument.

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

*_Pm*<br/>
A pointer to the member function of class `Type` to be converted to a function object.

*left*<br/>
The object that the *_Pm* member function is called on.

*right*<br/>
The argument that is being given to *_Pm*.

## Return Value

An adaptable binary function.

## Remarks

The template class stores a copy of *_Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning ( **left**.\* `_Pm`)( **right**).

## Example

The constructor of `mem_fun1_ref_t` is not usually used directly; the helper function `mem_fun_ref` is used to adapt member functions. See [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref) for an example of how to use member function adaptors.

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
