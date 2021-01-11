---
description: "Learn more about: Compiler Error C3063"
title: "Compiler Error C3063"
ms.date: "11/04/2016"
f1_keywords: ["C3063"]
helpviewer_keywords: ["C3063"]
ms.assetid: 0ecf6f1f-e4a7-487a-9fd5-79d8ac470001
---
# Compiler Error C3063

operator 'operator': all operands must have the same enumeration type

When using operators on enumerators, both operands must be of the enumeration type. For more information, see [How to: Define and consume enums in C++/CLI](../../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md).

## Example

The following sample generates C3063 and shows how to fix it:

```cpp
// C3063.cpp
// compile with: /clr
enum class E { a, b } e, mask;
int main() {
   if ( ( e & mask ) != 0 ) ;   // C3063 no operator!= (E, int)

   if ( ( e & mask ) != E() )   // OK
      ;
}
```
