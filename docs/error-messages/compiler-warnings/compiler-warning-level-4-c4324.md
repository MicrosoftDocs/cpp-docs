---
description: "Learn more about: Compiler Warning (level 4) C4324"
title: "Compiler Warning (level 4) C4324"
ms.date: "11/04/2016"
f1_keywords: ["C4324"]
helpviewer_keywords: ["C4324"]
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
---
# Compiler Warning (level 4) C4324

'struct_name' : structure was padded due to __declspec(align())

Padding was added at the end of a structure because you specified a [__declspec(align)](../../cpp/align-cpp.md) value.

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
