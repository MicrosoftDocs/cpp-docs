---
title: "Compiler Error C2312 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2312"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2312"]
ms.assetid: c8bcfd06-12c1-4323-bb53-ba392d36daa4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2312
'exception1' : is caught by 'exception2' on line number  
  
 Two handlers catch the same exception type.  
  
 The following sample generates C2312:  
  
```  
// C2312.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
    try {  
        throw "ooops!";  
    }  
    catch( signed int ) {}  
    catch( int ) {}   // C2312  
}  
```