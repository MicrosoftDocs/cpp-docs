---
title: "Compiler Error CS0104"
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
  - "CS0104"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0104"
ms.assetid: 1a7e9ae8-308b-441b-ba85-fac974222875
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
# Compiler Error CS0104
'reference' is an ambiguous reference between 'identifier' and 'identifier'  
  
 Your program contains [using](../Topic/using%20\(C%23%20Reference\).md) directives for two namespaces and your code references a name that appears in both namespaces.  
  
 The following sample generates CS0104:  
  
```  
// CS0104.cs  
using x;  
using y;  
  
namespace x  
{  
   public class Test  
   {  
   }  
}  
  
namespace y  
{  
   public class Test  
   {  
   }  
}  
  
public class a  
{  
   public static void Main()  
   {  
      Test test = new Test();   // CS0104, is Test in x or y namespace?  
      // try the following line instead  
      // y.Test test = new y.Test();  
   }  
}  
```