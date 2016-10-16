---
title: "Compiler Error CS0112"
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
  - "CS0112"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0112"
ms.assetid: 6741c7c4-8553-4bbe-b950-4f908e8d9ba3
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
# Compiler Error CS0112
A static member 'function' cannot be marked as override, virtual or abstract  
  
 Any method declaration that uses the `override`, **virtual**, or **abstract** keyword cannot also use the **static** keyword.  
  
 For more information, see [Methods](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0112:  
  
```  
// CS0112.cs  
namespace MyNamespace  
{  
   abstract public class MyClass  
   {  
      public abstract void Foo();  
   }  
   public class MyClass2 : MyClass  
   {  
      override public static void Foo()   // CS0112, remove static keyword  
      {  
      }  
      public static int Main()  
      {  
         return 0;  
      }  
   }  
}  
```