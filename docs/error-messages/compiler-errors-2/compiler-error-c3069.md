---
title: "Compiler Error C3069"
description: "Learn more about: Compiler Error C3069"
ms.date: 11/04/2016
f1_keywords: ["C3069"]
helpviewer_keywords: ["C3069"]
---
# Compiler Error C3069

> 'operator': not allowed for enumeration type

## Remarks

An operator is not supported for CLR enumerations.  For more information, see [How to: Define and consume enums in C++/CLI](../../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md).

## Example

The following example generates C3069:

```cpp
// C3069.cpp
// compile with: /clr
enum struct E { e1 };
enum F { f1 };

int main() {
   E e = E::e1;
   bool tf;
   tf = !e;   // C3069

   // supported for native enums
   F f = f1;
   tf = !f;
}
```
