---
title: "CLS Compliance Warning CLS02902 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS02902"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02902"
ms.assetid: 028c91fc-d3bb-4c97-92e6-159b5d663fc2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CLS Compliance Warning CLS02902
The methods that implement an event shall be marked SpecialName in the metadata  
  
 A method that implements an event was not marked with **specialname** in the metadata.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following function declaration (using MSIL assembly language) shows what could cause CLS02902:  
  
```  
.method public instance void   
        raise_MyEvent(object __unnamed000,  
            class [mscorlib]System.EventArgs __unnamed001) cil managed  
    {  
    } // end of method One::raise_MyEvent  
```  
  
 By adding the **specialname** keyword, you can resolve this warning:  
  
```  
.method public specialname instance void   
        raise_MyEvent(object __unnamed000,  
            class [mscorlib]System.EventArgs __unnamed001) cil managed  
    {  
    } // end of method One::raise_MyEvent  
```