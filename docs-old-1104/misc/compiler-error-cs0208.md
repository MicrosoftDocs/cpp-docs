---
title: "Compiler Error CS0208 | Microsoft Docs"
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
  - "CS0208"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0208"
ms.assetid: 03534893-1522-4dab-9822-8b9ed97b3bd0
caps.latest.revision: 11
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
# Compiler Error CS0208
Cannot take the address of, get the size of, or declare a pointer to a managed type ('type')  
  
 Even when used with the [unsafe](/dotnet/csharp/language-reference/keywords/unsafe) keyword, taking the address of a managed object, getting the size of a managed object, or declaring a pointer to a managed type is not allowed. A managed type is:  
  
-   any reference type  
  
-   any struct that contains a reference type as a field or property  
  
 For more information, see [Unsafe Code and Pointers](/dotnet/csharp/programming-guide/unsafe-code-pointers/index) and [sizeof](/dotnet/csharp/language-reference/keywords/sizeof).  
  
## Example  
 The following sample generates CS0208:  
  
```  
// CS0208.cs  
// compile with: /unsafe  
  
class myClass  
{  
    public int a = 98;  
}  
  
struct myProblemStruct  
{  
    string s;  
    float f;  
}  
  
struct myGoodStruct  
{  
    int i;  
    float f;  
}  
  
public class MyClass  
{  
    unsafe public static void Main()  
    {  
        // myClass is a class, a managed type.  
        myClass s = new myClass();    
        myClass* s2 = &s;    // CS0208  
  
        // The struct contains a string, a managed type.  
        int i = sizeof(myProblemStruct); //CS0208  
  
        // The struct contains only value types.  
        i = sizeof(myGoodStruct); //OK  
  
    }  
}  
  
```  
  
## See Also  
 [sizeof](/dotnet/csharp/language-reference/keywords/sizeof)