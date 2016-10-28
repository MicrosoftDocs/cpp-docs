---
title: "Compiler Error CS0267"
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
  - "CS0267"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0267"
ms.assetid: 11aaab96-5838-4e36-9551-5b032a1089e1
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
# Compiler Error CS0267
The partial modifier can only appear immediately before 'class', 'struct', or 'interface'  
  
 The placement of the **partial** modifier was incorrect in the declaration of the class, struct or interface. To fix the error, reorder the modifiers. For more information, see [Partial Classes and Methods](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0267:  
  
```  
// CS0267.cs  
public partial class MyClass  
{  
   public MyClass()  
   {  
   }  
}  
  
partial public class MyClass  // CS0267  
// Try this line instead:  
// public partial class MyClass  
{  
   public void Foo()  
   {  
   }  
  
   public static void Main()  
   {  
   }  
}  
```