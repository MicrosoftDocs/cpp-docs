---
title: "Compiler Error CS0535 | Microsoft Docs"
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
  - "CS0535"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0535"
ms.assetid: 282ed5d6-acb7-445b-999f-27a973ccc0b5
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0535
'class' does not implement interface member 'member'  
  
 A [class](http://msdn.microsoft.com/library/b95d8815-de18-4c3f-a8cc-a0a53bdf8690) derived from an [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba), but the class did not implement one or more of the interface's members. A class must implement all members of interfaces from which it derives or else be declared `abstract`.  
  
## Example  
 The following sample generates CS0535.  
  
```  
// CS0535.cs  
public interface A  
{  
   void F();  
}  
  
public class B : A {}   // CS0535 A::F is not implemented  
  
// OK  
public class C : A {  
   public void F() {}  
   public static void Main() {}  
}  
```  
  
## Example  
 The following sample generates CS0535.  
  
```  
// CS0535_b.cs  
using System;  
class C : IDisposable {}   // CS0535  
  
// OK  
class D : IDisposable {  
   void IDisposable.Dispose() {}  
   public void Dispose() {}  
  
   static void Main() {  
      using (D d = new D()) {}  
   }  
}  
```