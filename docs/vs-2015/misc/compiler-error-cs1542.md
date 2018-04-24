---
title: "Compiler Error CS1542 | Microsoft Docs"
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
  - "CS1542"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1542"
ms.assetid: d7f60aa2-6645-472c-ac12-fa57a09fbd87
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1542
'dll' cannot be added to this assembly because it already is an assembly; use '/R' option instead  
  
 The file that was referenced with the [/addmodule](../Topic/-addmodule%20\(C%23%20Compiler%20Options\).md) compiler option was not built with [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md); use [/reference](../Topic/-reference%20\(C%23%20Compiler%20Options\).md) to reference the file in this compilation.