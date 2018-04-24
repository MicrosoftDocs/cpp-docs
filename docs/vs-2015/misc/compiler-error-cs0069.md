---
title: "Compiler Error CS0069 | Microsoft Docs"
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
  - "CS0069"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0069"
ms.assetid: a1b32906-7773-47c6-8515-162a201a9be5
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0069
An event in an interface cannot have add or remove accessors  
  
 You cannot define an event's accessor functions in an [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba). For more information, see [Events](http://msdn.microsoft.com/library/a8e51b22-d294-44fb-9539-0072f06c4cb3) and [Interfaces](http://msdn.microsoft.com/library/2feda177-ce11-432d-81b4-d50f5f35fd37).  
  
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