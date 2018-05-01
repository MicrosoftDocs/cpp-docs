---
title: "Compiler Error CS0540 | Microsoft Docs"
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
  - "CS0540"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0540"
ms.assetid: 2da2cd4a-0ff1-45ea-bb72-ea078bc95dea
caps.latest.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0540
'interface member' : containing type does not implement interface 'interface'  
  
 You attempted to implement an interface member in a [class](http://msdn.microsoft.com/library/b95d8815-de18-4c3f-a8cc-a0a53bdf8690) that does not derive from the [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba). You should either delete the implementation of the interface member or add the interface to the base-class list of the class.  
  
## Example  
 The following sample generates CS0540.  
  
```  
// CS0540.cs  
interface I  
{  
   void m();  
}  
  
public class Clx  
{  
   void I.m() {}   // CS0540  
}  
  
// OK  
public class Cly : I  
{  
   void I.m() {}  
   public static void Main() {}  
}  
```  
  
## Example  
 The following sample generates CS0540.  
  
```  
// CS0540_b.cs  
using System;  
class C {  
   void IDisposable.Dispose() {}   // CS0540  
}  
  
class D : IDisposable {  
   void IDisposable.Dispose() {}  
   public void Dispose() {}  
  
   static void Main() {  
      using (D d = new D()) {}  
   }  
}  
```