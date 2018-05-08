---
title: "Compiler Warning (level 4) C4565 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4565"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4565"]
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4565
'function' : redefinition; the symbol was previously declared with __declspec(modifier)  
  
 A symbol was redefined or redeclared and the second definition or declaration, unlike the first definition or declaration, did not have a `__declspec` modifier (***modifier***). This warning is informational. To fix this warning, delete one of the definitions.  
  
 The following sample generates C4565:  
  
```  
// C4565.cpp  
// compile with: /W4 /LD  
__declspec(noalias) void f();  
void f();   // C4565  
```