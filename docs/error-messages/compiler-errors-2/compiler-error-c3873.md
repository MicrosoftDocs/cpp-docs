---
title: "Compiler Error C3873"
description: "Learn more about: Compiler Error C3873"
ms.date: 11/04/2016
f1_keywords: ["C3873"]
helpviewer_keywords: ["C3873"]
---
# Compiler Error C3873

> 'char': this character is not allowed as a first character of an identifier

## Remarks

The C++ compiler follows the C++11 standard on characters allowed in an identifier. Only certain ranges of characters and universal character names are allowed in an identifier. Additional restrictions apply to the initial character of an identifier. For more information and a list of allowed characters and universal character name ranges, see [Identifiers](../../cpp/identifiers-cpp.md).

The range of characters allowed in an identifier is less restrictive when compiling C++/CLI code. Identifiers in code compiled by using /clr should follow  [Standard ECMA-335: Common Language Infrastructure (CLI)](https://ecma-international.org/publications-and-standards/standards/ecma-335/).

## Example

The following example generates C3873:

```cpp
// C3873.cpp
int main() {
   int \u036F_abc;   // C3873, not in allowed range for initial character
   int abc_\u036F;   // OK, in allowed range for non-initial character
}
```
