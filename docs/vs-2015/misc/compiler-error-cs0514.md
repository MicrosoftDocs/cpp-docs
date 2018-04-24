---
title: "Compiler Error CS0514 | Microsoft Docs"
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
  - "CS0514"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0514"
ms.assetid: 74ce3010-f9e9-458c-8b68-cfb908a3e7a2
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0514
'constructor' : static constructor cannot have an explicit 'this' or 'base' constructor call  
  
 Calling `this` in the static constructor is not allowed because the static constructor is called automatically before creating any instance of the class. Also, static constructors are not inherited, and cannot be called directly.  
  
 For more information, see [this](http://msdn.microsoft.com/library/d4f827fe-4710-410b-89b8-867dad44b8a3) and [base](http://msdn.microsoft.com/library/8b645dbe-1a33-49b8-8716-1c401f9a5ea5).  
  
## Example  
 The following example generates CS0514:  
  
```  
// CS0514.cs  
class A  
{  
    static A() : base(0) // CS0514  
    {  
    }  
  
    public A(object o)  
    {  
    }  
}  
  
class B  
{  
    static B() : this(null) // CS0514  
    {  
    }  
  
    public B(object o)  
    {  
    }  
}  
```