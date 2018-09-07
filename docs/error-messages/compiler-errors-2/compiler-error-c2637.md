---
title: "Compiler Error C2637 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2637"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2637"]
ms.assetid: 58d94447-eb96-4d8f-a690-dd78d322462e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2637
'identifier' : cannot modify pointers to data members  
  
 A pointer to a data member cannot have a calling convention. To resolve, either remove the calling convention or declare a pointer to member function.  
  
 The following sample generates C2637:  
  
```  
// C2637.cpp  
// compile with: /c  
struct S {};  
int __stdcall S::*pms1;   // C2637  
  
// OK  
int S::*pms2;  
int (__stdcall S::*pms3)(...);  
```