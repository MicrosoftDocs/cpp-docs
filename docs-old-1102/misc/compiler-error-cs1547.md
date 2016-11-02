---
title: "Compiler Error CS1547"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1547"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1547"
ms.assetid: 40029557-076a-47d8-aabc-d86c56a846d7
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
# Compiler Error CS1547
Keyword 'void' cannot be used in this context  
  
 The compiler detected an invalid use of the [void](../Topic/void%20\(C%23%20Reference\).md) keyword.  
  
 The following sample generates CS1547:  
  
```  
// CS1547.cs  
public class MyClass  
{  
   void BadMethod()  
   {  
      void i;   // CS1547, cannot have variables of type void  
   }  
  
   public static void Main()  
   {  
   }  
}  
```