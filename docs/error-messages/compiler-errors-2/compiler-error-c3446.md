---
description: "Learn more about: Compiler Error C3446"
title: "Compiler Error C3446"
ms.date: "07/21/2017"
f1_keywords: ["C3446"]
helpviewer_keywords: ["C3446"]
ms.assetid: 33064548-24e4-46f1-beb1-476e3c3b3fbf
---
# Compiler Error C3446

>'*class*': a default member initializer is not allowed for a member of a value class

In Visual Studio 2015 and earlier, the compiler permitted (but ignored) a default member initializer for a member of a value class. Default initialization of a value class always zero-initializes the members; a default constructor is not permitted. In Visual Studio 2017, default member initializers raise a compiler error, as shown in this example:

## Example

The following sample generates C3446 in Visual Studio 2017 and later:

```cpp
// C3446.cpp
value struct V
{
       int i = 0; // error C3446: 'V::i': a default member initializer
                  // is not allowed for a member of a value class
       int j {0}; // C3446
};
```

To correct the error, remove the initializer:

```cpp
// C3446b.cpp
value struct V
{
       int i;
       int j;
};
```
