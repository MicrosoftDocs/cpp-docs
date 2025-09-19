---
title: "Compiler Error C2891"
description: "Learn more about: Compiler Error C2891"
ms.date: 11/04/2016
f1_keywords: ["C2891"]
helpviewer_keywords: ["C2891"]
---
# Compiler Error C2891

> 'parameter' : cannot take the address of a template parameter

## Remarks

You can't take the address of a template parameter unless it is an lvalue. Type parameters are not lvalues because they have no address. Non-type values in template parameter lists that are not lvalues also do not have an address.

## Example

This is an example of code that causes Compiler Error C2891, because the value passed as the template parameter is a compiler-generated copy of the template argument.

```cpp
template <int i> int* f() { return &i; }
```

Template parameters that are lvalues, such as reference types, can have their address taken.

```cpp
template <int& r> int* f() { return &r; }
```

To correct this error, do not take the address of a template parameter unless it is an lvalue.
