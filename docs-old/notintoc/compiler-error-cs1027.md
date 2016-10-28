---
title: "Compiler Error CS1027"
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
  - "CS1027"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1027"
ms.assetid: a6657f0f-5664-47a5-95cf-803f5a0e0c90
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
# Compiler Error CS1027
\#endif directive expected  
  
 A matching `#endif` [preprocessor directive](../Topic/C%23%20Preprocessor%20Directives.md) was not found for a specified `#if` directive. Or, the compiler may have found a `#endregion` directive when there was no matching `#region` directive inside a `#if` block.  
  
 The following sample generates CS1027:  
  
```  
// CS1027.cs  
#if true   // CS1027, uncomment next line to resolve  
// #endif  
  
namespace x  
{  
   public class clx  
   {  
      public static void Main()  
      {  
      }  
   }  
}  
```