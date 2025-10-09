---
title: "Compiler Error C2203"
description: "Learn more about: Compiler Error C2203"
ms.date: 11/04/2016
f1_keywords: ["C2203"]
helpviewer_keywords: ["C2203"]
---
# Compiler Error C2203

> delete operator cannot specify bounds for an array

## Remarks

With the **/Za** (ANSI) option, the **`delete`** operator can delete an entire array but not parts or specific members of the array.

## Example

The following example generates C2203:

```cpp
// C2203.cpp
// compile with: /Za
int main() {
   int *ar = new int[10];
   delete [4] ar;   // C2203
   // try the following line instead
   // delete [] ar;
}
```
