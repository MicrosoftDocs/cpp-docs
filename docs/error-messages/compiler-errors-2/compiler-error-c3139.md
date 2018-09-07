---
title: "Compiler Error C3139 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3139"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3139"]
ms.assetid: 95c92263-10ac-4ff3-b385-6312dd92adbc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3139
'struct' : cannot export a UDT without members  
  
 You attempted to apply the [export](../../windows/export.md) attribute to an empty UDT (user-defined type). For example:  
  
```  
// C3139.cpp  
#include "unknwn.h"  
[emitidl];  
[module(name=xx)];  
  
[export] struct MyStruct {   // C3139 empty type  
};  
int main(){}  
```