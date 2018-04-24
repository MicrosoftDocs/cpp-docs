---
title: "Compiler Error CS0227 | Microsoft Docs"
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
  - "CS0227"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0227"
ms.assetid: b595a1c9-8204-4ff7-a1d0-258b0b1d6ff7
caps.latest.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0227
Unsafe code may only appear if compiling with /unsafe  
  
 If source code contains the [unsafe](../Topic/unsafe%20\(C%23%20Reference\).md) keyword, then the [/unsafe](../Topic/-unsafe%20\(C%23%20Compiler%20Options\).md) compiler option must also be used. For more information, see [Unsafe Code and Pointers](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md).  
  
 To set the unsafe option in [!INCLUDE[vs_current_long](../includes/vs-current-long-md.md)], click on **Project** in the main menu, select the **Build** pane, and check the box that says "allow unsafe code."  
  
 The following sample, when compiled without **/unsafe**, will generate CS0227:  
  
```  
// CS0227.cs  
public class MyClass  
{  
   unsafe public static void Main()   // CS0227  
   {  
   }  
}  
```  
  
## See Also  
 [C# Compiler Errors](../Topic/C%23%20Compiler%20Errors.md)