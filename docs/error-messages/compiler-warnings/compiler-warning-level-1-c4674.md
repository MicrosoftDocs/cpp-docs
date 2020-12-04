---
description: "Learn more about: Compiler Warning (level 1) C4674"
title: "Compiler Warning (level 1) C4674"
ms.date: "11/04/2016"
f1_keywords: ["C4674"]
helpviewer_keywords: ["C4674"]
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
---
# Compiler Warning (level 1) C4674

'method' should be declared 'static' and have exactly one parameter

The signature of a conversion operator was not correct. The method is not considered a user-defined conversion. For more information on defining operators, see [User-Defined Operators (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md) and [User-Defined Conversions (C++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md).

## Example

The following sample generates C4674.

```cpp
// C4674.cpp
// compile with: /clr /WX /W1 /LD
ref class G {
   int op_Implicit(int i) {   // C4674
      return 0;
   }
};
```
