---
title: "Compiler Error CS0074"
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
  - "CS0074"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0074"
ms.assetid: 9395c532-3934-4553-8e41-042bfe3399ce
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
# Compiler Error CS0074
'event': abstract event cannot have initializer  
  
 If an [event](../Topic/event%20\(C%23%20Reference\).md) is marked as **abstract**, it cannot be initialized. For more information, see [Events](../Topic/Events%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0074:  
  
```  
// CS0074.cs  
delegate void D();  
  
abstract class Test  
{  
   public abstract event D e = null;   // CS0074  
   // try the following line instead  
   // public abstract event D e;  
  
   public static void Main()  
   {  
   }  
}  
```