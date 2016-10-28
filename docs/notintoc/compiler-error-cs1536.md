---
title: "Compiler Error CS1536"
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
  - "CS1536"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1536"
ms.assetid: 65f14fbb-df79-4759-8911-93f8f90f5a60
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
# Compiler Error CS1536
Invalid parameter type void  
  
 It is not necessary or valid to specify a [void](../Topic/void%20\(C%23%20Reference\).md) parameter other than a void pointer.  
  
 The following sample generates CS1536:  
  
```  
// CS1536.cs  
class a  
{  
   public static int x( void )   // CS1536  
   // try the following line instead  
   // public static int x()  
   {  
      return 0;  
   }  
  
   public static void Main()  
   {  
   }  
}  
```