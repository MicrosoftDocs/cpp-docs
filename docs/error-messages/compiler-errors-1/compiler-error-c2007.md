---
title: "Compiler Error C2007 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2007"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2007"]
ms.assetid: ecd09d99-5036-408b-9e46-bc15488f049e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2007
\#define syntax  
  
 No identifier appears after a `#define`. To resolve the error, use an identifier.  
  
 The following sample generates C2007:  
  
```  
// C2007.cpp  
#define   // C2007  
```  
  
 Possible resolution:  
  
```  
// C2007b.cpp  
// compile with: /c  
#define true 1  
```