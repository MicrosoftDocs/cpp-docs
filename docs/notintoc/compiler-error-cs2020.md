---
title: "Compiler Error CS2020"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS2020"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2020"
ms.assetid: b2db7a05-5965-4a9b-86c3-0c4792b29a6c
caps.latest.revision: 7
ms.author: "billchi"
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
# Compiler Error CS2020
Only the first set of input files can build a target other than 'module'  
  
 In a multi-output compilation, the first output file must be built with [/target:exe](../Topic/-target:exe%20\(C%23%20Compiler%20Options\).md), [/target:winexe](../Topic/-target:winexe%20\(C%23%20Compiler%20Options\).md), or [/target:library](../Topic/-target:library%20\(C%23%20Compiler%20Options\).md). Any subsequent output files must be built with [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md).