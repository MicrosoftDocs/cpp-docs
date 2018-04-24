---
title: "Compiler Error CS0541 | Microsoft Docs"
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
  - "CS0541"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0541"
ms.assetid: ed812c07-24f7-43c6-9a44-553f27f6249d
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0541
'declaration' : explicit interface declaration can only be declared in a class or struct  
  
 An explicit [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba) declaration was found outside a [class](http://msdn.microsoft.com/library/b95d8815-de18-4c3f-a8cc-a0a53bdf8690) or [struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c).  
  
 The following sample generates CS0541:  
  
```  
// CS0541.cs  
namespace x  
{  
   interface IFace  
   {  
      void F();  
   }  
  
   interface IFace2 : IFace  
   {  
      void IFace.F();   // CS0541  
   }  
}  
```