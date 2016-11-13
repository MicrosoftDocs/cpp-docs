---
title: "Compiler Error CS0200 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0200"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0200"
ms.assetid: 1990704a-edfa-4dbd-8477-d9c7aae58c96
caps.latest.revision: 8
author: "BillWagner"
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
# Compiler Error CS0200
Property or indexer 'property' cannot be assigned to — it is read only  
  
 An attempt was made to assign a value to a [property](/dotnet/csharp/programming-guide/classes-and-structs/using-properties), but the property does not have a set accessor. Resolve the error by adding a set accessor. For more information, see [How to: Declare and Use Read Write Properties](../Topic/How%20to:%20Declare%20and%20Use%20Read%20Write%20Properties%20\(C%23%20Programming%20Guide\).md).  
  
## Example  
 The following sample generates CS0200:  
  
```  
// CS0200.cs  
public class MainClass  
{  
    // private int _mi;  
    int I  
    {  
        get  
        {  
            return 1;  
        }  
  
        // uncomment the set accessor and declaration for _mi  
        /*  
        set  
        {  
            _mi = value;  
        }  
        */  
    }  
  
    public static void Main ()  
    {  
        MainClass II = new MainClass();  
        II.I = 9;   // CS0200  
    }  
}  
```