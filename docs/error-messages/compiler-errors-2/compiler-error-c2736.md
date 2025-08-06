---
description: "Learn more about: Compiler Error C2736"
title: "Compiler Error C2736"
ms.date: "11/04/2016"
f1_keywords: ["C2736"]
helpviewer_keywords: ["C2736"]
ms.assetid: 95a6bc28-c0cb-49dc-87e6-e993dbbba881
---
# Compiler Error C2736

> 'keyword' keyword is not permitted in cast

## Remarks

The keyword is invalid in a cast.

## Example

The following example generates C2736:

```cpp
// C2736.cpp
int main() {
   return (virtual) 0;   // C2736
   // try the following line instead
   // return 0;
}
```
