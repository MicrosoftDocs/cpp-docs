---
title: "Compiler Error C2506 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2506"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2506"]
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2506
'member' : '__declspec(modifier)' cannot be applied to this symbol  
  
 You cannot declare per-process or per-appdomain for static members of a managed class.  
  
 See [appdomain](../../cpp/appdomain.md) for more information.  
  
## Example  
 The following sample generates C2506.  
  
```  
// C2506.cpp  
// compile with: /clr /c  
ref struct R {  
   __declspec(process) static int n;   // C2506  
   int o;   // OK  
};  
```