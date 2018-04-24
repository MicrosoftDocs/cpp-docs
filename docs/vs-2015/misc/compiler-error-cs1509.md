---
title: "Compiler Error CS1509 | Microsoft Docs"
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
  - "CS1509"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1509"
ms.assetid: 51a475c3-f085-49cb-89b0-c6582b68653f
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1509
Referenced file 'file' is not an assembly; use '/addmodule' option instead  
  
 An output file (output file 1), produced in a compilation that used [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md) (does not have an assembly manifest), was specified to [/reference](../Topic/-reference%20\(C%23%20Compiler%20Options\).md). So, rather than appending an assembly to the assembly for the current program, the metadata information in output file 1 will be added to the assembly for the current program.