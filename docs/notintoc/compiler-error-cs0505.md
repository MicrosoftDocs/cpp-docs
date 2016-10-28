---
title: "Compiler Error CS0505"
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
  - "CS0505"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0505"
ms.assetid: e3cb9e33-7338-4869-859b-81d7439f0d23
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
# Compiler Error CS0505
'member1': cannot override because 'member2' is not a function  
  
 A class declaration attempted to override a non-method in a base class. Overrides must match the member type. If a method with the same name as a method in a base class is desired, use [new](../Topic/new%20\(C%23%20Reference\).md) (and not [override](../Topic/override%20\(C%23%20Reference\).md)) on the method declaration in the base class.  
  
 The following sample generates CS0505:  
  
```  
// CS0505.cs  
// compile with: /target:library  
public class clx  
{  
   public int i;  
}  
  
public class cly : clx  
{  
   public override int i() { return 0; }   // CS0505  
}  
```