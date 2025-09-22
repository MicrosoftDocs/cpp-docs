---
title: "Compiler Warning (level 1) C4489"
description: "Learn more about: Compiler Warning (level 1) C4489"
ms.date: 11/04/2016
f1_keywords: ["C4489"]
helpviewer_keywords: ["C4489"]
---
# Compiler Warning (level 1) C4489

> 'specifier' : not allowed on interface method 'method'; override specifiers are only allowed on ref class and value class methods

## Remarks

A specifier keyword was incorrectly used on an interface method.

For more information, see [Override Specifiers](../../extensions/override-specifiers-cpp-component-extensions.md).

## Example

The following example generates C4489.

```cpp
// C4489.cpp
// compile with: /clr /c /W1
public interface class I {
   void f() new;   // C4489
   virtual void b() override;   // C4489

   void g();   // OK
};
```
