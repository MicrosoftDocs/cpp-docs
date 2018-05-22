---
title: "Compiler Error CS1508 | Microsoft Docs"
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
  - "CS1508"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1508"
ms.assetid: 979bc615-58ce-49f8-ba73-e6cf57c56418
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1508
Resource identifier 'identifier' has already been used in this assembly  
  
 In a compilation, the same identifier (***identifier***) was passed to two or more [/resource](http://msdn.microsoft.com/library/5212666e-98ab-47e4-a497-b5545ab15c7f) or [/linkresource](http://msdn.microsoft.com/library/440c26c2-77c1-4811-a0a3-57cce3f5fc96) compiler options.  
  
 For example, the following options would generate CS1508:  
  
```  
/resource:anyfile.bmp,DuplicatIdent /linkresource:a.bmp,DuplicatIdent  
```