---
title: "Compiler Error CS0177 | Microsoft Docs"
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
  - "CS0177"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0177"
ms.assetid: 852a8c2a-2411-4800-af7c-4c572d9900d3
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0177
The out parameter 'parameter' must be assigned to before control leaves the current method  
  
 A parameter marked with the [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) keyword was not assigned a value in the method body. For more information, see [Passing Parameters](http://msdn.microsoft.com/library/a5c3003f-7441-4710-b8b1-c79de77e0b77)  
  
 The following sample generates CS0177:  
  
```  
// CS0177.cs  
public class MyClass  
{  
   public static void Foo(out int i)   // CS0177  
   {  
   // uncomment the following line to resolve this error  
   //   i = 0;  
   }  
  
   public static void Main()  
   {  
       int x = -1;  
       Foo(out x);  
   }  
}  
```