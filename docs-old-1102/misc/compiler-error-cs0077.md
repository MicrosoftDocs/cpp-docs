---
title: "Compiler Error CS0077"
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
  - "CS0077"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0077"
ms.assetid: 55d3d290-d172-41a3-b326-ebf5a0a7e81f
caps.latest.revision: 10
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
# Compiler Error CS0077
The as operator must be used with a reference type or nullable type ('int' is a non-nullable value type).  
  
 The [as](../Topic/as%20\(C%23%20Reference\).md) operator was passed a [value type](../Topic/Value%20Types%20\(C%23%20Reference\).md). Because `as` can return [null](../Topic/null%20\(C%23%20Reference\).md), it can only be passed [reference types](../Topic/Reference%20Types%20\(C%23%20Reference\).md) or nullable type. For more information about nullable types, see [Nullable Types](../Topic/Nullable%20Types%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0077:  
  
```  
// CS0077.cs  
using System;  
  
class C  
{  
}  
  
struct S  
{  
}  
  
class M  
{  
   public static void Main()  
   {  
      object o1, o2;  
      C c;  
      S s;  
  
      o1 = new C();  
      o2 = new S();  
  
      s = o2 as S;  // CS0077, S is not a reference type.  
      // try the following line instead  
      // c = o1 as C;  
   }  
}  
```