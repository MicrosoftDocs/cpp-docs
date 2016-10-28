---
title: "Compiler Error CS0199"
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
  - "CS0199"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0199"
ms.assetid: 9eede3f2-b55a-4b85-a05d-6bf177e1c602
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
# Compiler Error CS0199
Fields of static readonly field 'name' cannot be passed ref or out (except in a static constructor)  
  
 A [readonly](../Topic/readonly%20\(C%23%20Reference\).md) variable must have the same [static](../Topic/static%20\(C%23%20Reference\).md) usage as the constructor in which you want to pass it as a [ref](../Topic/ref%20\(C%23%20Reference\).md) or [out](../Topic/out%20\(C%23%20Reference\).md) parameter. For more information, see [Passing Parameters](../Topic/Passing%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
## Example  
 The following sample generates CS0199:  
  
```  
// CS0199.cs  
class MyClass  
{  
    public static readonly int TestInt = 6;  
  
    static void TestMethod(ref int testInt)  
    {  
        testInt = 0;  
    }  
  
    MyClass()  
    {  
        TestMethod(ref TestInt);   // CS0199, TestInt is static  
    }  
  
    public static void Main()  
    {  
    }  
}  
```