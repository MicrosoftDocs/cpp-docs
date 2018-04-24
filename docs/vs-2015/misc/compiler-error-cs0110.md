---
title: "Compiler Error CS0110 | Microsoft Docs"
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
  - "CS0110"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0110"
ms.assetid: 0bfe7071-1194-4142-a1a1-6190ee92b1d4
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0110
The evaluation of the constant value for 'const declaration' involves a circular definition  
  
 The declaration of a [const](http://msdn.microsoft.com/library/79eb447c-117b-4418-933f-97c50aa472db) variable (`a`) cannot reference another const variable (`b`) that also references (`a`).  
  
 The following sample generates CS0110:  
  
```  
// CS0110.cs  
namespace MyNamespace  
{  
   public class A  
   {  
      public static void Main()  
      {  
      }  
   }  
  
   public class B : A  
   {  
      public const int i = c + 1;   // CS0110, c already references i  
      public const int c = i + 1;  
      // the following line would be OK  
      // public const int c = 10;  
   }  
}  
```  
  
## See Also  
 [Constants](http://msdn.microsoft.com/library/1fb39621-1738-49b1-a1b3-8587f109123f)