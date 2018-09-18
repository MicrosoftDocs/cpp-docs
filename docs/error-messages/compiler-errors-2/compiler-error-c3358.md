---
title: "Compiler Error C3358 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3358"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3358"]
ms.assetid: 180b93df-e78f-441a-91fb-1594c681f7f0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3358

'symbol': symbol not found

The required symbol was not found.

The following sample generates C3358:

```
// C3358.cpp
#define __ATLEVENT_H__ 1   // remove this line to resolve the error
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[event_receiver(com)]
struct A   // C3358
{
   void func();
};

int main()
{
}
```