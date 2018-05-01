---
title: "Compiler Error CS1507 | Microsoft Docs"
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
  - "CS1507"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1507"
ms.assetid: e1be3aba-81dc-4f65-87a4-d3f90b82dc7d
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1507
Cannot link resource file 'file' when building a module  
  
 [/linkresource](http://msdn.microsoft.com/library/440c26c2-77c1-4811-a0a3-57cce3f5fc96) was used in the same compilation with [/target:module](http://msdn.microsoft.com/library/9af1e4fa-c749-44e7-ae58-90a3d05d4e72), which is not allowed. For example, the following options would generate CS1507:  
  
```  
csc /linkresource:rf.resource /target:module in.cs  
```  
  
 Embeding resourrces ([/resource](http://msdn.microsoft.com/library/5212666e-98ab-47e4-a497-b5545ab15c7f)), however, is allowed.