---
description: "Learn more about: Compiler Error C2195"
title: "Compiler Error C2195"
ms.date: "11/04/2016"
f1_keywords: ["C2195"]
helpviewer_keywords: ["C2195"]
ms.assetid: 9f9f035c-9c51-4173-a8ea-c6f907fc5c63
---
# Compiler Error C2195

'identifier' : is a data segment

The `code_seg` pragma uses a segment name used with the `data_seg` pragma.

The following sample generates C2195:

```cpp
// C2195.cpp
#pragma data_seg("MYDATA")
#pragma code_seg("MYDATA")   // C2195
#pragma code_seg("MYDATA2")   // OK
```
