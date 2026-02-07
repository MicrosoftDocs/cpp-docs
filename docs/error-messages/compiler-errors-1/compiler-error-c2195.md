---
title: "Compiler Error C2195"
description: "Learn more about: Compiler Error C2195"
ms.date: 11/04/2016
f1_keywords: ["C2195"]
helpviewer_keywords: ["C2195"]
---
# Compiler Error C2195

> 'identifier' : is a data segment

## Remarks

The `code_seg` pragma uses a segment name used with the `data_seg` pragma.

## Example

The following example generates C2195:

```cpp
// C2195.cpp
#pragma data_seg("MYDATA")
#pragma code_seg("MYDATA")   // C2195
#pragma code_seg("MYDATA2")   // OK
```
