---
title: "Compiler Error CS1527 | Microsoft Docs"
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
  - "CS1527"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1527"
ms.assetid: a0d52130-d6da-41bb-b153-8e96cbb7e316
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1527
Elements defined in a namespace cannot be explicitly declared as private, protected, or protected internal  
  
 Type declarations in a namespace can have either [public](http://msdn.microsoft.com/library/0ae45d16-a551-4b74-9845-57208de1328e) or [internal](http://msdn.microsoft.com/library/6ee0785c-d7c8-49b8-bb72-0a4dfbcb6461) access. If no accessibility is specified, **internal** is the default.  
  
 The following sample generates CS1527:  
  
```  
// CS1527.cs  
namespace Sample  
{  
   private class C1 {};             // CS1527  
   protected class C2 {};           // CS1527  
   protected internal class C3 {};  // CS1527  
}  
```  
  
 The following example generates CS1527 because when no namespace is explicitly declared in your program code, all type declarations are located implicitly within the global namespace.  
  
```  
//cs1527_2.cs  
using System;  
  
protected class C4{}  
private struct S1{}  
```  
  
## See Also  
 [Namespaces](http://msdn.microsoft.com/library/b1c4ab46-3fad-4ffa-9deb-dd50a2d8c65a)   
 [global](http://msdn.microsoft.com/library/8932c16a-6959-42c2-86e7-2c4221ab788b)   
 [:: Operator](http://msdn.microsoft.com/library/698b5a73-85cf-4e0e-9e8e-6496887f8527)   
 [Accessibility Domain](http://msdn.microsoft.com/library/8af779c1-275b-44be-a864-9edfbca71bcc)   
 [Access Modifiers](http://msdn.microsoft.com/library/6e81ee82-224f-4a12-9baf-a0dca2656c5b)