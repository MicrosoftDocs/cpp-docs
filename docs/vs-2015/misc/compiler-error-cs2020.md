---
title: "Compiler Error CS2020 | Microsoft Docs"
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
  - "CS2020"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2020"
ms.assetid: b2db7a05-5965-4a9b-86c3-0c4792b29a6c
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS2020
Only the first set of input files can build a target other than 'module'  
  
 In a multi-output compilation, the first output file must be built with [/target:exe](../Topic/-target:exe%20\(C%23%20Compiler%20Options\).md), [/target:winexe](../Topic/-target:winexe%20\(C%23%20Compiler%20Options\).md), or [/target:library](../Topic/-target:library%20\(C%23%20Compiler%20Options\).md). Any subsequent output files must be built with [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md).