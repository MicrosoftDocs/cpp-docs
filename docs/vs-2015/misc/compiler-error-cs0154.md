---
title: "Compiler Error CS0154 | Microsoft Docs"
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
  - "CS0154"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0154"
ms.assetid: 815150da-09b4-4593-825f-1dd435c92da8
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0154
The property or indexer 'property' cannot be used in this context because it lacks the get accessor  
  
 An attempt to use a [property](http://msdn.microsoft.com/library/f7f67b05-0983-4cdb-96af-1855d24c967c) failed because no get accessor method was defined in the property. For more information, see [Fields](http://msdn.microsoft.com/library/3cbb2f61-75f8-4cce-b4ef-f5d1b3de0db7).  
  
## Example  
 The following sample generates CS0154:  
  
```  
// CS0154.cs  
public class MyClass2  
{  
    public int i  
    {  
        set  
        {  
        }  
        // uncomment the get method to resolve this error  
        /*  
        get  
        {  
            return 0;  
        }  
        */  
    }  
}  
  
public class MyClass  
{  
    public static void Main()  
    {  
        MyClass2 myClass2 = new MyClass2();  
        int j = myClass2.i;   // CS0154, no get method  
    }  
}  
```