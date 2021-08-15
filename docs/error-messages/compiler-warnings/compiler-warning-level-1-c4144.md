---
description: "Learn more about: Compiler Warning (level 1) C4144"
title: "Compiler Warning (level 1) C4144"
ms.date: "11/04/2016"
f1_keywords: ["C4144"]
helpviewer_keywords: ["C4144"]
ms.assetid: a37b445d-dbc6-43b4-8d95-ffd0e4225464
---
# Compiler Warning (level 1) C4144

'expression' : relational expression as switch expression

The specified relational expression was used as the control expression of a [switch](../../cpp/switch-statement-cpp.md) statement. The associated case statements will be offered Boolean values. The following sample generates C4144:

```cpp
// C4144.cpp
// compile with: /W1
int main()
{
   int i = 0;
   switch(!i) {   // C4144, remove the ! to resolve
      case 1:
         break;
      default:
         break;
   }
}
```
