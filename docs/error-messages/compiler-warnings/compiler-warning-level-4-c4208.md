---
description: "Learn more about: Compiler Warning (level 4) C4208"
title: "Compiler Warning (level 4) C4208"
ms.date: "11/04/2016"
f1_keywords: ["C4208"]
helpviewer_keywords: ["C4208"]
ms.assetid: 5cb0a36e-3fb5-422f-a5f9-e40b70776c27
---
# Compiler Warning (level 4) C4208

nonstandard extension used : delete [exp] - exp evaluated but ignored

With Microsoft extensions (/Ze), you can delete an array using a value within brackets with the [delete operator](../../cpp/delete-operator-cpp.md). The value is ignored.

```cpp
// C4208.cpp
// compile with: /W4
int main()
{
   int * MyArray = new int[18];
   delete [18] MyArray;      // C4208
   MyArray = new int[18];
   delete [] MyArray;        // ok
}
```

Such values are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
