---
title: "Compiler Error C2008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2008"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2008"]
ms.assetid: e748ccbe-ffd4-4008-aca7-e53c25225209
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2008
'character' : unexpected in macro definition  
  
 The character appears immediately following the macro name. To resolve the error, there must be a space after the macro name.  
  
 The following sample generates C2008:  
  
```  
// C2008.cpp  
#define TEST1"mytest1"    // C2008  
```  
  
 Possible resolution:  
  
```  
// C2008b.cpp  
// compile with: /c  
#define TEST2 "mytest2"  
```