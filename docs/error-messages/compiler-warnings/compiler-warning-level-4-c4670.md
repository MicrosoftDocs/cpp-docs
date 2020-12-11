---
description: "Learn more about: Compiler Warning (level 4) C4670"
title: "Compiler Warning (level 4) C4670"
ms.date: "11/04/2016"
f1_keywords: ["C4670"]
helpviewer_keywords: ["C4670"]
ms.assetid: e172b134-b1fb-4dfe-8e9d-209ea08b73c7
---
# Compiler Warning (level 4) C4670

'identifier' : this base class is inaccessible

The specified base class of an object to be thrown in a **`try`** block is not accessible. The object cannot be instantiated if it is thrown. Check that the base class is inherited with the correct access specifier.

The following sample generates C4670:

```cpp
// C4670.cpp
// compile with: /EHsc /W4
class A
{
};

class B : /* public */ A
{
} b;   // inherits A with private access by default

int main()
{
    try
    {
       throw b;   // C4670
    }
    catch( B )
    {
    }
}
```
