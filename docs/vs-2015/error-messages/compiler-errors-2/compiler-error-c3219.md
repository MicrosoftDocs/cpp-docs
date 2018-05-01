---
title: "Compiler Error C3219 | Microsoft Docs"
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
  - "C3219"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3219"
ms.assetid: 9c9757b0-1256-4cdf-9d8c-a3a72f300ce5
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3219
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3219](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3219).  
  
  
param' : generic parameter cannot be constrained by multiple non-interfaces : 'class'  
  
 It is not valid to constrain a generic parameter by two or more managed classes.  
  
 The following sample generates C3219:  
  
```  
// C3219.cpp  
// compile with: /clr  
ref class A {};  
ref class B {};  
  
generic <class T>  
where T : A, B  
ref class E {};   // C3219  
```  
  
 The following sample demonstrates a possible resolution:  
  
```  
// C3219b.cpp  
// compile with: /clr /c  
ref class A {};  
  
interface struct C {};  
  
generic <class T>  
where T : A  
ref class E {};  
```

