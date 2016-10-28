---
title: "Compiler Error CS0242"
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
  - "CS0242"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0242"
ms.assetid: bc86a5a4-89c1-4de4-a874-4dd4cbf592c2
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
# Compiler Error CS0242
The operation in question is undefined on void pointers  
  
 Incrementing a void pointer is not allowed. For more information, see [Unsafe Code and Pointers](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0242:  
  
```  
// CS0242.cs  
// compile with: /unsafe  
class TestClass  
{  
   public unsafe void Test()  
   {  
      void * p = null;  
      p++;   // CS0242, incrementing a void pointer not allowed  
   }  
  
   public static void Main()  
   {  
   }  
}  
```