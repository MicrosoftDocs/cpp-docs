---
title: "CLS Compliance Warning CLS01512 | Microsoft Docs"
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
  - "CLS01512"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01512"
ms.assetid: 15822eb3-43b1-4d58-a22d-9532e5820008
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS01512
The varargs constraint is not part of the CLS  
  
 The varargs constraint is not part of the Common Language Subset (CLS).  The only calling convention supported by the CLS is the standard managed calling convention.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following function declaration (using MSIL assembly language) shows what could cause CLS01512:  
  
```  
.method public specialname rtspecialname static   
        vararg void  .cctor() cil managed  
```  
  
 By removing the **vararg** keyword, you can resolve this warning:  
  
```  
.method public specialname rtspecialname static   
        void  .cctor() cil managed  
```