---
title: "Compiler Error C2498 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2498"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2498"]
ms.assetid: 0839f12c-aaa4-4a02-bb33-7f072715dd14
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2498
'function' : 'novtable' can only be applied to class declarations or definitions  
  
 This error can be caused by using `__declspec(novtable)` with a function.  
  
## Example  
 The following sample generates C2498:  
  
```  
// C2498.cpp  
// compile with: /c  
void __declspec(novtable) f() {}   // C2498  
class __declspec(novtable) A {};   // OK  
```