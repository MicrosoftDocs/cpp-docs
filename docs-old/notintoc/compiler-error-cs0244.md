---
title: "Compiler Error CS0244"
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
  - "CS0244"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0244"
ms.assetid: f10e4479-ed6e-40dc-9fab-914e404d7f84
caps.latest.revision: 10
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
# Compiler Error CS0244
Neither 'is' nor 'as' is valid on pointer types  
  
 The [is](../Topic/is%20\(C%23%20Reference\).md) and [as](../Topic/as%20\(C%23%20Reference\).md) keywords are not valid for use on pointer types. For more information, see [Unsafe Code and Pointers](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0244:  
  
```  
// CS0244.cs  
// compile with: /unsafe  
  
class UnsafeTest  
{  
   unsafe static void SquarePtrParam (int* p)  
   {  
      bool b = p is object;   // CS0244 p is pointer  
   }  
  
   unsafe public static void Main()  
   {  
      int i = 5;  
      SquarePtrParam (&i);  
   }  
}  
```