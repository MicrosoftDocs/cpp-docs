---
title: "Compiler Error C2458 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2458"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2458"]
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2458
'identifier' : redefinition within definition  
  
 A class, structure, union, or enumeration is redefined in its own declaration.  
  
 The following sample generates C2458:  
  
```  
// C2458.cpp  
class C {  
   enum i { C };   // C2458  
};  
```