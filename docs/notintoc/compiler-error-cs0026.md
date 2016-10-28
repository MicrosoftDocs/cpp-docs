---
title: "Compiler Error CS0026"
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
  - "CS0026"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0026"
ms.assetid: 8767fbc1-8ba7-4e88-a9f9-7e620411882b
caps.latest.revision: 12
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
# Compiler Error CS0026
Keyword 'this' is not valid in a static property, static method, or static field initializer  
  
 The [this](../Topic/this%20\(C%23%20Reference\).md) keyword refers to an object, which is an instance of a type. Since static methods are independent of any instance of the containing class, the "this" keyword is meaningless and is therefore not allowed. For more information, see [Static Classes and Static Class Members](../Topic/Static%20Classes%20and%20Static%20Class%20Members%20\(C%23%20Programming%20Guide\).md) and [Objects](../Topic/Objects%20\(C%23%20Programming%20Guide\).md).  
  
## Example  
 The following example generates CS0026:  
  
```  
// CS0026.cs  
public class A  
{  
   public static int i = 0;  
  
   public static void Main()  
   {  
// CS0026  
      this.i = this.i + 1;     
      // Try the following line instead:  
      // i = i + 1;  
   }  
}  
```