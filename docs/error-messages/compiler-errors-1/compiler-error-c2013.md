---
title: "Compiler Error C2013 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2013"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2013"]
ms.assetid: 6b5c955c-53da-48ee-8533-64ef5b905173
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2013
missing '>'  
  
 An `#include` directive lacks a closing angle bracket. Add the closing bracket to resolve the error.  
  
 The following sample generates C2013:  
  
```  
// C2013.cpp  
#include <stdio.h    // C2013  
```  
  
 Possible resolution:  
  
```  
// C2013b.cpp  
// compile with: /c  
#include <stdio.h>  
```