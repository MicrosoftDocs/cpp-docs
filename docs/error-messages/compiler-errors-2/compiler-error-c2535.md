---
title: "Compiler Error C2535"
description: "Learn more about: Compiler Error C2535"
ms.date: 11/04/2016
f1_keywords: ["C2535"]
helpviewer_keywords: ["C2535"]
---
# Compiler Error C2535

> 'identifier' : member function already defined or declared

## Remarks

This error could be caused by using the same formal parameter list in more than one definition or declaration of an overloaded function.

If you get C2535 because of the Dispose function, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) for more information.

## Example

The following example generates C2535:

```cpp
// C2535.cpp
// compile with: /c
class C {
public:
   void func();   // forward declaration
   void func() {}   // C2535
};
```
