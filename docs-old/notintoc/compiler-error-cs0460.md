---
title: "Compiler Error CS0460"
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
  - "CS0460"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0460"
ms.assetid: 98d39ded-d3f9-4520-b912-892e574c056b
caps.latest.revision: 11
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
# Compiler Error CS0460
Constraints for override and explicit interface implementation methods are inherited from the base method, so they cannot be specified directly  
  
 When a generic method that is part of a derived class overrides a method in the base class, you may not specify constraints on the overridden method. The override method in the derived class inherits its constraints from the method in the base class.  
  
## Example  
 The following sample generates CS0460.  
  
```  
// CS0460.cs  
// compile with: /target:library  
class BaseClass   
{  
   BaseClass() { }  
}  
  
interface I  
{  
   void F1<T>() where T : BaseClass;  
   void F2<T>() where T : struct;  
   void F3<T>() where T : BaseClass;  
}  
  
class ExpImpl : I  
{  
   void I.F1<T>() where T : BaseClass {}   // CS0460  
   void I.F2<T>() where T : class {}  // CS0460  
}  
```