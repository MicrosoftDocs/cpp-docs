---
title: "Compiler Warning (level 4) C4918"
description: "Learn more about: Compiler Warning (level 4) C4918"
ms.date: 11/04/2016
f1_keywords: ["C4918"]
helpviewer_keywords: ["C4918"]
---
# Compiler Warning (level 4) C4918

> 'character' : invalid character in pragma optimization list

## Remarks

An unknown character was found in the optimization list of an [optimize](../../preprocessor/optimize.md) pragma statement.

## Example

For example, the following statement generates C4918:

```cpp
// C4918.cpp
// compile with: /W4
#pragma optimize("X", on) // C4918 expected
int main()
{
}
```
