---
title: "const_mem_fun_ref_t Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xfunctional/std::const_mem_fun_ref_t"]
dev_langs: ["C++"]
helpviewer_keywords: ["const_mem_fun_ref_t class"]
ms.assetid: 316ddbaa-9f46-4931-8eba-ea4ca66360ef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# const_mem_fun_ref_t Class

An adapter class that allows a **const** member function that takes no arguments to be called as a unary function object when initialized with a reference argument.

## Syntax

```cpp
template <class Result, class Type>
class const_mem_fun_ref_t
 : public unary_function<Type, Result>
{
    explicit const_mem_fun_t(Result (Type::* Pm)() const);
    Result operator()(const Type& left) const;
 };
```

### Parameters

*Pm*
 A pointer to the member function of class `Type` to be converted to a function object.

*left*
 The object that the *Pm* member function is called on.

## Return Value

An adaptable unary function.

## Remarks

The template class stores a copy of *Pm*, which must be a pointer to a member function of class `Type`, in a private member object. It defines its member function `operator()` as returning ( **left**.\* `Pm`)() **const**.

## Example

The constructor of `const_mem_fun_ref_t` is not usually used directly; the helper function `mem_fun_ref` is used to adapt member functions. See [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref) for an example of how to use member function adaptors.

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
