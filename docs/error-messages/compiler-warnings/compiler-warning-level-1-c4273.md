---
title: "Compiler Warning (level 1) C4273 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4273"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4273"]
ms.assetid: cc18611d-9454-40a4-ad73-69823d5888fb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4273
'function' : inconsistent DLL linkage  
  
 Two definitions in a file differ in their use of [dllimport](../../cpp/dllexport-dllimport.md).  
  
## Example  
 The following sample generates C4273.  
  
```  
// C4273.cpp  
// compile with: /W1 /c  
char __declspec(dllimport) c;  
char c;   // C4273, delete this line or the line above to resolve  
```  
  
## Example  
 The following sample generates C4273.  
  
```  
// C4273_b.cpp  
// compile with: /W1 /clr /c  
#include <stdio.h>  
extern "C" int printf_s(const char *, ...);   // C4273  
```