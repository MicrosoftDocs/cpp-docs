---
title: "Compiler Error CS0073"
ms.custom: ""
ms.date: "10/25/2016"
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
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0073
An add or remove accessor must have a body  
  
 An **add** or **remove** keyword in an [event](../Topic/event%20\(C%23%20Reference\).md) definition must have a body. For more information, see [Events](../Topic/Events%20\(C%23%20Programming%20Guide\).md).  
  
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