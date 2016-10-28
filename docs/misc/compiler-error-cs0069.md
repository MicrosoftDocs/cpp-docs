---
title: "Compiler Error CS0069"
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
  - "CS0069"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0069"
ms.assetid: a1b32906-7773-47c6-8515-162a201a9be5
caps.latest.revision: 9
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
# Compiler Error CS0069
An event in an interface cannot have add or remove accessors  
  
 You cannot define an event's accessor functions in an [interface](../Topic/interface%20\(C%23%20Reference\).md). For more information, see [Events](../Topic/Events%20\(C%23%20Programming%20Guide\).md) and [Interfaces](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0069:  
  
```  
// CS0069.cs  
// compile with: /target:library  
  
public delegate void EventHandler();  
  
public interface a  
{  
   event EventHandler Click { remove {} }   // CS0069  
   event EventHandler Click2;   // OK  
}  
```