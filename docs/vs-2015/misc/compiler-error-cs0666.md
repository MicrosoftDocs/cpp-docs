---
title: "Compiler Error CS0666 | Microsoft Docs"
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
  - "CS0666"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0666"
ms.assetid: 44ad4574-b4a2-487b-8d05-0116762231ab
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0666
'member' : new protected member declared in struct  
  
 A [struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c) cannot be [abstract](http://msdn.microsoft.com/library/b0797770-c1f3-4b4d-9441-b9122602a6bb) and is always implicitly [sealed](http://msdn.microsoft.com/library/8e4ed5d3-10be-47db-9488-0da2008e6f3f). Because structs do not support inheritance, the concept of a [protected](http://msdn.microsoft.com/library/05ce3794-6675-4025-bddb-eaaa0ec22892) member in a struct makes no sense. For more information, see [Inheritance](http://msdn.microsoft.com/library/81d64ee4-50f9-4d6c-a8dc-257c348d2eea).  
  
## Example  
 The following sample generates CS0666:  
  
```  
// CS0666.cs  
class M  
{  
    static void Main()  
    {  
    }  
}  
  
struct S  
{  
    protected int x;   // CS0666  
}  
```