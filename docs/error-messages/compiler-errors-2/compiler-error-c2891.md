---
description: "Learn more about: Compiler Error C2891"
title: "Compiler Error C2891"
ms.date: "11/04/2016"
f1_keywords: ["C2891"]
helpviewer_keywords: ["C2891"]
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
---
# Compiler Error C2891

'parameter' : cannot take the address of a template parameter

You can't take the address of a template parameter unless it is an lvalue. Type parameters are not lvalues because they have no address. Non-type values in template parameter lists that are not lvalues also do not have an address. This is an example of code that causes Compiler Error C2891, because the value passed as the template parameter is a compiler-generated copy of the template argument.

```
template <int i> int* f() { return &i; }
```

Template parameters that are lvalues, such as reference types, can have their address taken.

```
template <int& r> int* f() { return &r; }
```

To correct this error, do not take the address of a template parameter unless it is an lvalue.
