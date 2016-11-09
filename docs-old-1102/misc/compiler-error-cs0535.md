---
title: "Compiler Error CS0535"
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
  - "CS0535"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0535"
ms.assetid: 282ed5d6-acb7-445b-999f-27a973ccc0b5
caps.latest.revision: 9
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
# Compiler Error CS0535
'class' does not implement interface member 'member'  
  
 A [class](../Topic/class%20\(C%23%20Reference\).md) derived from an [interface](../Topic/interface%20\(C%23%20Reference\).md), but the class did not implement one or more of the interface's members. A class must implement all members of interfaces from which it derives or else be declared `abstract`.  
  
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