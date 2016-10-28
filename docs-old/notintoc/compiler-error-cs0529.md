---
title: "Compiler Error CS0529"
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
  - "CS0529"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0529"
ms.assetid: 61de8086-f991-455c-b009-bb8cd05f34bd
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
# Compiler Error CS0529
Inherited interface 'interface1' causes a cycle in the interface hierarchy of 'interface2'  
  
 The inheritance list for an [interface](../Topic/interface%20\(C%23%20Reference\).md) includes a direct or indirect reference to itself. An interface cannot inherit from itself.  
  
 The following sample generates CS0529:  
  
```  
// CS0529.cs  
namespace x  
{  
   public interface a  
   {  
   }  
  
   public interface b : a, c  
   {  
   }  
  
   public interface c : b   // CS0529, b inherits from c  
   {  
   }  
}  
```