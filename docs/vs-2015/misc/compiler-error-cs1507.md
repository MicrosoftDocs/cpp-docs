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
  
 [/linkresource](../Topic/-linkresource%20\(C%23%20Compiler%20Options\).md) was used in the same compilation with [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md), which is not allowed. For example, the following options would generate CS1507:  
  
```  
csc /linkresource:rf.resource /target:module in.cs  
```  
  
 Embeding resourrces ([/resource](../Topic/-resource%20\(C%23%20Compiler%20Options\).md)), however, is allowed.