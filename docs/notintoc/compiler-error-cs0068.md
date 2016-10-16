---
title: "Compiler Error CS0068"
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
  - "CS0068"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0068"
ms.assetid: 9c9ac915-e12f-4ceb-8eb0-806790f11a09
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
# Compiler Error CS0068
'event': event in interface cannot have initializer  
  
 An event in an interface cannot have an initializer. For more information, see [Interfaces](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0068:  
  
```  
// CS0068.cs  
  
delegate void MyDelegate();  
  
interface I  
{  
   event MyDelegate d = new MyDelegate(M.f);   // CS0068  
   // try the following line instead  
   // event MyDelegate d2;  
}  
  
class M  
{  
   event MyDelegate d = new MyDelegate(M.f);  
  
   public static void f()  
   {  
   }  
  
   public static void Main()  
   {  
   }  
}  
```