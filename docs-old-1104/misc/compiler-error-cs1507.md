---
title: "Compiler Error CS1507 | Microsoft Docs"
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
  - "CS1507"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1507"
ms.assetid: e1be3aba-81dc-4f65-87a4-d3f90b82dc7d
caps.latest.revision: 7
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS1507
Cannot link resource file 'file' when building a module  
  
 [/linkresource](/dotnet/csharp/language-reference/compiler-options/linkresource-compiler-option) was used in the same compilation with [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md), which is not allowed. For example, the following options would generate CS1507:  
  
```  
csc /linkresource:rf.resource /target:module in.cs  
```  
  
 Embeding resourrces ([/resource](/dotnet/csharp/language-reference/compiler-options/resource-compiler-option)), however, is allowed.