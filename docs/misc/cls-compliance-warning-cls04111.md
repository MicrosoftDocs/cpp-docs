---
title: "CLS Compliance Warning CLS04111 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS04111"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04111"
ms.assetid: 4b445ce7-d823-4cf3-b971-1c181be5fa41
caps.latest.revision: 6
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
# CLS Compliance Warning CLS04111
Attributes shall be of type 'System::Attribute', or inherit from it  
  
 In order to be CLS compliant, a custom attribute must inherit from System::Attribute.  An attribute that did not inherit from System::Attribute was applied to a type.  
  
 The following declaration (using MSIL assembly language) shows what could cause CLS04111:  
  
```  
.class public auto ansi MyAttribute  
       extends [mscorlib]System.Object  
```  
  
 Causing the attribute to derive from System::Attribute resolves the warning:  
  
```  
.class public auto ansi MyAttribute  
       extends [mscorlib]System.Attribute  
```