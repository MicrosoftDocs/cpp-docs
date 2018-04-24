---
title: "Compiler Warning (level 1) CS2002 | Microsoft Docs"
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
  - "CS2002"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2002"
ms.assetid: 4acd054e-d3fe-4be6-a660-53a0a5e8c6a4
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS2002
Source file 'file' specified multiple times  
  
 A source file name was passed to the compiler more than once. You can only specify a file once to the compiler to build an output file.  
  
 This warning cannot be suppressed by the [/nowarn](../Topic/-nowarn%20\(C%23%20Compiler%20Options\).md) option.  
  
 The following sample generates CS2002:  
  
```  
// CS2002.cs  
// compile with: CS2002.cs  
public class A  
{  
public static void Main(){}  
}  
```  
  
 To generate the error, compile the example with the command line:  
  
```  
csc CS2002.cs CS2002.cs  
```