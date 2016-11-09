---
title: "Compiler Error CS0206 | Microsoft Docs"
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
  - "CS0206"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0206"
ms.assetid: d2f9838a-d8ae-4342-b8bd-fa5745619a26
caps.latest.revision: 8
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
# Compiler Error CS0206
A property or indexer may not be passed as an out or ref parameter  
  
 A [property](/dotnet/csharp/programming-guide/classes-and-structs/properties) is not available to be passed as a [ref](/dotnet/csharp/language-reference/keywords/ref) or [out](/dotnet/csharp/language-reference/keywords/out) parameter. For more information, see [Passing Parameters](/dotnet/csharp/programming-guide/classes-and-structs/passing-parameters).  
  
## Example  
 The following sample generates CS0206:  
  
```  
// CS0206.cs  
public class MyClass  
{  
    public static int P  
    {  
        get  
        {  
            return 0;  
        }  
        set  
        {  
        }  
    }  
  
    public static void MyMeth(ref int i)  
    // public static void MyMeth(int i)  
    {  
    }  
  
    public static void Main()  
    {  
        MyMeth(ref P);   // CS0206  
        // try the following line instead  
        // MyMeth(P);   // CS0206  
    }  
}  
```