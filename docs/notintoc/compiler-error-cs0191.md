---
title: "Compiler Error CS0191"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0191"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0191"
ms.assetid: 512479e4-656e-4dcb-8d71-801541d72dcd
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
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
# Compiler Error CS0191
Property or indexer 'name' cannot be assigned to -- it is read only  
  
 A [readonly](../Topic/readonly%20\(C%23%20Reference\).md) field can only take an assignment in a constructor or at declaration. For more information, see [Constructors](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 CS0191 also results if the `readonly` field is [static](../Topic/static%20\(C%23%20Reference\).md) and the constructor is not marked `static`.  
  
## Example  
 The following sample generates CS0191.  
  
```  
// CS0191.cs  
class MyClass  
{  
    public readonly int TestInt = 6;  // OK to assign to readonly field in declaration  
  
    MyClass()  
    {  
        TestInt = 11; // OK to assign to readonly field in constructor  
    }  
  
    public void TestReadOnly()  
    {  
        TestInt = 19;                  // CS0191  
    }  
  
    public static void Main()  
    {  
    }  
}  
```