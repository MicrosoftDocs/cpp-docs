---
title: "Compiler Error C2491 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2491"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2491"]
ms.assetid: 4e5a8f81-124e-402c-a5ec-d35a89b5469e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2491
'identifier' : definition of dllimport function not allowed  
  
 Data, static data members, and functions can be declared as `dllimport`s but not defined as `dllimport`s.  
  
 To fix this issue, remove the `__declspec(dllimport)` specifier from the definition of the function.  
  
 The following sample generates C2491:  
  
```  
// C2491.cpp  
// compile with: /c  
// function definition  
void __declspec(dllimport) funcB() {}   // C2491  
  
// function declaration  
void __declspec(dllimport) funcB();   // OK  
```