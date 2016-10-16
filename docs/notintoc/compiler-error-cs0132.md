---
title: "Compiler Error CS0132"
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
  - "CS0132"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0132"
ms.assetid: e8ad1281-2912-4b6a-b2af-a319a23ddd16
caps.latest.revision: 8
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
# Compiler Error CS0132
'constructor' : a static constructor must be parameterless  
  
 A [static](../Topic/static%20\(C%23%20Reference\).md) constructor cannot be declared with one or more parameters. For more information, see [Constructors](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0132:  
  
```  
// CS0132.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public MyClass(int i)  
      {  
      }  
   }  
  
   public class MyClass2 : MyClass  
   {  
      static MyClass2(int i)   // CS0132  
      {  
      }  
   }  
}  
```