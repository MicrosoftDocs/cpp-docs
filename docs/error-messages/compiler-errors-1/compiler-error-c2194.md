---
title: "Compiler Error C2194"
description: "Learn more about: Compiler Error C2194"
ms.date: 11/04/2016
f1_keywords: ["C2194"]
helpviewer_keywords: ["C2194"]
---
# Compiler Error C2194

> 'identifier' : is a text segment

## Remarks

The `data_seg` pragma uses a segment name used with `code_seg`.

## Example

The following example generates C2194:

```cpp
// C2194.cpp
// compile with: /c
#pragma code_seg("MYCODE")
#pragma data_seg("MYCODE")   // C2194
#pragma data_seg("MYCODE2")   // OK
```
