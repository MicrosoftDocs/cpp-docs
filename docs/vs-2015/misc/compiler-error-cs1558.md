---
title: "Compiler Error CS1558 | Microsoft Docs"
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
  - "CS1558"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1558"
ms.assetid: ee603d66-007e-4782-9285-7ff031975f0f
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1558
'class' does not have a suitable static Main method  
  
 The [/main](http://msdn.microsoft.com/library/975cf4d5-36ac-4530-826c-4aad0c7f2049) compiler option specified a class in which to look for a **Main** method. However, the [Main](http://msdn.microsoft.com/library/73a17231-cf96-44ea-aa8a-54807c6fb1f4) method was not defined correctly.  
  
 The following example generates CS1558 because of invalid return type.  
  
```  
// CS1558.cs  
// compile with: /main:MyNamespace.MyClass  
  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public static float Main()   
      {  
         return 0.0; // CS1558 because the return type is a float.  
      }  
   }  
}  
```