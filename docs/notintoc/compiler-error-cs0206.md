---
title: "Compiler Error CS0206"
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
  - "CS0206"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0206"
ms.assetid: d2f9838a-d8ae-4342-b8bd-fa5745619a26
caps.latest.revision: 8
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
# Compiler Error CS0206
A property or indexer may not be passed as an out or ref parameter  
  
 A [property](../Topic/Properties%20\(C%23%20Programming%20Guide\).md) is not available to be passed as a [ref](../Topic/ref%20\(C%23%20Reference\).md) or [out](../Topic/out%20\(C%23%20Reference\).md) parameter. For more information, see [Passing Parameters](../Topic/Passing%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
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