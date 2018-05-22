---
title: "Compiler Error CS0073 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0073"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0073"
ms.assetid: 579ae534-59ab-4fc5-ad7e-f87639f3f9cd
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0073
An add or remove accessor must have a body  
  
 An **add** or **remove** keyword in an [event](http://msdn.microsoft.com/library/7858fd85-153b-4259-85d0-6aa13c35f174) definition must have a body. For more information, see [Events](http://msdn.microsoft.com/library/a8e51b22-d294-44fb-9539-0072f06c4cb3).  
  
 The following sample generates CS0073:  
  
```  
// CS0073.cs  
delegate void del();  
  
class Test  
{  
   public event del MyEvent  
   {  
      add;   // CS0073  
      // try the following lines instead  
      // add  
      // {  
      //    MyEvent += value;  
      // }  
      remove  
      {  
         MyEvent -= value;  
      }  
  
   }  
  
   public static void Main()  
   {  
   }  
}  
```