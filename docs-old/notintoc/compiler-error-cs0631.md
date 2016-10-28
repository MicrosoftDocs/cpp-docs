---
title: "Compiler Error CS0631"
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
  - "CS0631"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0631"
ms.assetid: 5ae06b13-7874-4d0d-b256-7d8b33396156
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
# Compiler Error CS0631
ref and out are not valid in this context  
  
 The declaration for an [indexer](../Topic/Indexers%20\(C%23%20Programming%20Guide\).md) cannot include the use of [ref](../Topic/ref%20\(C%23%20Reference\).md) or [out](../Topic/out%20\(C%23%20Reference\).md) parameters.  
  
## Example  
 The following sample generates CS0631:  
  
```  
// CS0631.cs  
public class MyClass  
{  
    public int this[ref int i]   // CS0631  
    // try the following line instead  
    // public int this[int i]  
    {  
        get  
        {  
            return 0;  
        }  
    }  
}  
  
public class MyClass2  
{  
    public static void Main()  
    {  
    }  
}  
```