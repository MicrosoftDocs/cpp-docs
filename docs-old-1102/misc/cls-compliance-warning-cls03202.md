---
title: "CLS Compliance Warning CLS03202"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS03202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03202"
ms.assetid: 2219c86c-9276-4244-a2ff-bce578c4d65f
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
# CLS Compliance Warning CLS03202
The add and remove methods for an event shall each take one parameter whose type defines the type of the event and that shall be derived from System.Delegate  
  
 The add and remove methods for an event shall each take one parameter whose type defines the type of the event and that shall be derived from System.Delegate.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following function declaration (using MSIL assembly language) shows what could cause CLS03202:  
  
```  
// bad  
.method public specialname instance void   
        add_MyEvent(class MyDelegate __unnamed000, int32 __extra) cil managed  
{}  
```  
  
 You can resolve this warning if the event accessor only takes one parameter:  
  
```  
.method public specialname instance void   
        add_MyEvent(class MyDelegate __unnamed000) cil managed   
{}  
```