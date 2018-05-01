---
title: "Compiler Error CS0077 | Microsoft Docs"
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
  - "CS0077"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0077"
ms.assetid: 55d3d290-d172-41a3-b326-ebf5a0a7e81f
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0077
The as operator must be used with a reference type or nullable type ('int' is a non-nullable value type).  
  
 The [as](http://msdn.microsoft.com/library/a9be126b-cbf4-4990-a70d-d0e1983cad0e) operator was passed a [value type](http://msdn.microsoft.com/library/471eb994-2958-49d5-a6be-19b4313f80a3). Because `as` can return [null](http://msdn.microsoft.com/library/fecb1c60-6232-4efe-87f7-9a86ba2e9119), it can only be passed [reference types](http://msdn.microsoft.com/library/801cf030-6e2d-4a0d-9daf-1431b0c31f47) or nullable type. For more information about nullable types, see [Nullable Types](http://msdn.microsoft.com/library/e473cb01-28ca-42be-9cea-f717055d72c6).  
  
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