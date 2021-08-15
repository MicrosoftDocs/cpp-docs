---
description: "Learn more about: Compiler Warning (level 4) C4918"
title: "Compiler Warning (level 4) C4918"
ms.date: "11/04/2016"
f1_keywords: ["C4918"]
helpviewer_keywords: ["C4918"]
ms.assetid: 1bcf6d35-3467-4aa8-b2ef-cb33f4e70238
---
# Compiler Warning (level 4) C4918

'character' : invalid character in pragma optimization list

An unknown character was found in the optimization list of an [optimize](../../preprocessor/optimize.md) pragma statement.

For example, the following statement generates C4918:

```cpp
// C4918.cpp
// compile with: /W4
#pragma optimize("X", on) // C4918 expected
int main()
{
}
```
