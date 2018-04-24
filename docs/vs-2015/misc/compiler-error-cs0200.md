---
title: "Compiler Error CS0200 | Microsoft Docs"
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
---
# Compiler Error CS0200
Property or indexer 'property' cannot be assigned to — it is read only  
  
 An attempt was made to assign a value to a [property](http://msdn.microsoft.com/library/f7f67b05-0983-4cdb-96af-1855d24c967c), but the property does not have a set accessor. Resolve the error by adding a set accessor. For more information, see [How to: Declare and Use Read Write Properties](http://msdn.microsoft.com/library/a4962fef-af7e-4c4b-a929-4ae4d646ab8a).  
  
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