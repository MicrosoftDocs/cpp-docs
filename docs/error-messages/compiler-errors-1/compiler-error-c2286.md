---
description: "Learn more about: Compiler Error C2286"
title: "Compiler Error C2286"
ms.date: "11/04/2016"
f1_keywords: ["C2286"]
helpviewer_keywords: ["C2286"]
ms.assetid: 078e0201-35cc-42e2-8dbc-6f8cf557b098
---
# Compiler Error C2286

pointers to members of 'identifier' representation is already set to 'inheritance' - declaration ignored

Two different pointer-to-members representations exist for class.

For more information, see [Inheritance Keywords](../../cpp/inheritance-keywords.md).

## Example

The following sample generates C2286:

```cpp
// C2286.cpp
// compile with: /c
class __single_inheritance X;
class __multiple_inheritance X;   // C2286
class  __multiple_inheritance Y;   // OK
```
