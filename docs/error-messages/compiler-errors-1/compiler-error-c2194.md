---
description: "Learn more about: Compiler Error C2194"
title: "Compiler Error C2194"
ms.date: "11/04/2016"
f1_keywords: ["C2194"]
helpviewer_keywords: ["C2194"]
ms.assetid: df6e631c-0062-4844-9088-4cc7a0ff879f
---
# Compiler Error C2194

'identifier' : is a text segment

The `data_seg` pragma uses a segment name used with `code_seg`.

The following sample generates C2194:

```cpp
// C2194.cpp
// compile with: /c
#pragma code_seg("MYCODE")
#pragma data_seg("MYCODE")   // C2194
#pragma data_seg("MYCODE2")   // OK
```
