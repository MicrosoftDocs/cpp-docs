---
description: "Learn more about: Compiler Error C3872"
title: "Compiler Error C3872"
ms.date: "11/04/2016"
f1_keywords: ["C3872"]
helpviewer_keywords: ["C3872"]
ms.assetid: 519e95be-5641-40cc-894c-da4819506604
---
# Compiler Error C3872

'char': this character is not allowed in an identifier

The C++ compiler follows the C++11 standard on characters allowed in an identifier. Only certain ranges of characters and universal character names are allowed in an identifier. Additional restrictions apply to the initial character of an identifier. For more information and a list of allowed characters and universal character name ranges, see [Identifiers](../../cpp/identifiers-cpp.md).

The range of characters allowed in an identifier is less restrictive when compiling C++/CLI code. Identifiers in code compiled by using /clr should follow  [Standard ECMA-335: Common Language Infrastructure (CLI)](https://www.ecma-international.org/publications/standards/Ecma-335.htm).

The following sample generates C3872:

```cpp
// C3872.cpp
int main() {
   int abc_\u0040;   // C3872, U+0040 is in base char set
   int abc_\u3001;   // C3872, U+3001 is not in allowed range
   int \u30A2_abc_\u3042;   // OK, UCNs in allowed range
}
```
