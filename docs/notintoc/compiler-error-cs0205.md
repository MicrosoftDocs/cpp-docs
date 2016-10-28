---
title: "Compiler Error CS0205"
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
  - "CS0205"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0205"
ms.assetid: 616d98cf-e7a5-4f8e-93da-fcd6e1e4de35
caps.latest.revision: 10
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
# Compiler Error CS0205
Cannot call an abstract base member: 'method'  
  
 You cannot call an [abstract](../Topic/abstract%20\(C%23%20Reference\).md) method because it does not have a method body. For more information, see [Abstract and Sealed Classes and Class Members](../Topic/Abstract%20and%20Sealed%20Classes%20and%20Class%20Members%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0205:  
  
```  
// CS0205.cs  
abstract public class MyClass  
{  
   abstract public void M();  
}  
  
public class MyClass2 : MyClass  
{  
   public override void M()  
   {  
      base.M();   // CS0205, delete this line  
   }  
  
   public static void Main()  
   {  
   }  
}  
```