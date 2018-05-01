---
title: "Compiler Error CS0538 | Microsoft Docs"
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
  - "CS0538"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0538"
ms.assetid: 46ac205e-16b0-4637-bd0f-9a755ac19f18
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0538
'name' in explicit interface declaration is not an interface  
  
 An attempt was made to explicitly declare an [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba), but an interface was not specified.  
  
 The following sample generates CS0538:  
  
```  
// CS0538.cs  
interface MyIFace  
{  
   void F();  
}  
  
public class MyClass  
{  
   public void G()  
   {  
   }  
}  
  
class C: MyIFace  
{  
   void MyIFace.F()  
   {  
   }  
  
   void MyClass.G()   // CS0538, MyClass not an interface  
   {  
   }  
}  
```