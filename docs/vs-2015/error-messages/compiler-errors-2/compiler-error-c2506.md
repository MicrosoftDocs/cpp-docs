---
title: "Compiler Error C2506 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2506"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2506"
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2506
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2506](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2506).  
  
  
member' : '__declspec(modifier)' cannot be applied to this symbol  
  
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

