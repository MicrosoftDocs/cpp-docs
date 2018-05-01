---
title: "Compiler Error C3213 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3213"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3213"
ms.assetid: 1f079e36-b3e9-40f8-8e95-08eeba3adc82
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3213
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3213](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3213).  
  
  
base class 'base_type' is less accessible than 'derived_type'  
  
 A type that will be visible from an assembly must use publicly visible base classes.  
  
 The following sample generates C3213:  
  
```  
// C3213.cpp  
// compile with: /clr  
private ref struct privateG {  
public:  
   int i;  
};  
  
public ref struct publicG {  
public:  
   int i;  
};  
  
public ref struct V : public privateG {   // C3213  
public:  
   int j;  
};  
  
public ref struct W: public publicG {   // OK  
public:  
   int j;  
};  
```

