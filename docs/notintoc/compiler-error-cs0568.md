---
title: "Compiler Error CS0568"
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
  - "CS0568"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0568"
ms.assetid: dc9e1263-f58d-4c95-9165-27ba7757bc7b
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
# Compiler Error CS0568
Structs cannot contain explicit parameterless constructors  
  
 Each [struct](../Topic/struct%20\(C%23%20Reference\).md) already has a default constructor that initializes the object to zero. Therefore, the constructors that you can create for a struct must take one or more parameters.  
  
 The following sample generates CS0568:  
  
```  
// CS0568.cs  
public struct ClassY  
{  
   public int field1;  
   public ClassY(){}   // CS0568, cannot have no param constructor  
   // Try following instead:  
   // public ClassY(int i)  
   // {  
   //    field1 = i;  
   // }  
}  
  
public class ClassX  
{  
   public static void Main()  
   {  
   }  
}  
```