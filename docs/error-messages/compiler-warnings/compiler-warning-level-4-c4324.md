---
description: "Learn more about: Compiler Warning (level 4) C4324"
title: "Compiler Warning (level 4) C4324"
ms.date: "11/04/2016"
f1_keywords: ["C4324"]
helpviewer_keywords: ["C4324"]
---
# Compiler Warning (level 4) C4324

> '*type*': structure was padded due to alignment specifier

## Remarks

Padding was added at the end of a structure because you specified an alignment specifier, such as [__declspec(align)](../../cpp/align-cpp.md).

## Example

For example, the following code generates C4324:

```cpp
// C4324.cpp
// compile with: /W4
struct __declspec(align(32)) A
{
   char a;
};   // C4324

int main()
{
}
```
