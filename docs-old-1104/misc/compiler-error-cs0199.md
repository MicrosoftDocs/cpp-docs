---
title: "Compiler Error CS0199 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0199"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0199"
ms.assetid: 9eede3f2-b55a-4b85-a05d-6bf177e1c602
caps.latest.revision: 10
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
# Compiler Error CS0199
Fields of static readonly field 'name' cannot be passed ref or out (except in a static constructor)  
  
 A [readonly](/dotnet/csharp/language-reference/keywords/readonly) variable must have the same [static](/dotnet/csharp/language-reference/keywords/static) usage as the constructor in which you want to pass it as a [ref](/dotnet/csharp/language-reference/keywords/ref) or [out](/dotnet/csharp/language-reference/keywords/out) parameter. For more information, see [Passing Parameters](/dotnet/csharp/programming-guide/classes-and-structs/passing-parameters).  
  
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