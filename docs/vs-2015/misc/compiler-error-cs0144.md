---
title: "Compiler Error CS0144 | Microsoft Docs"
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
  - "CS0144"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0144"
ms.assetid: 3904cab1-05bd-44ec-81d0-e36c5656f742
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0144
Cannot create an instance of the abstract class or interface 'interface'  
  
 You cannot create an instance of an [abstract](http://msdn.microsoft.com/library/b0797770-c1f3-4b4d-9441-b9122602a6bb) class or an [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba). For more information, see [Interfaces](http://msdn.microsoft.com/library/2feda177-ce11-432d-81b4-d50f5f35fd37).  
  
 The following sample generates CS0144:  
  
```  
// CS0144.cs  
interface MyInterface  
{  
}  
public class MyClass  
{  
   public static void Main()  
   {  
      MyInterface myInterface = new MyInterface ();   // CS0144  
   }  
}  
```