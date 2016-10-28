---
title: "Compiler Error CS0036"
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
  - "CS0036"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0036"
ms.assetid: ddbaa36e-473b-4283-a13c-44a71ae5da2e
caps.latest.revision: 9
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
# Compiler Error CS0036
An out parameter cannot have the '[In]' attribute  
  
 Currently, the **In** attribute is not permitted on an [out](../Topic/out%20\(C%23%20Reference\).md) parameter.  
  
 The following sample generates CS0036:  
  
```  
// CS0036.cs  
  
using System;  
using System.Runtime.InteropServices;  
  
public class MyClass  
{  
   public static void TestOut([In] out char TestChar)   // CS0036  
   // try the following line instead  
   // public static void TestOut(out char TestChar)  
   {  
      TestChar = 'b';  
      Console.WriteLine(TestChar);  
   }  
  
   public static void Main()  
   {  
      char i;           //variable to receive the value  
      TestOut(out i);   // the arg must be passed as out  
      Console.WriteLine(i);  
   }  
}  
```