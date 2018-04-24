---
title: "Compiler Error CS0185 | Microsoft Docs"
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
  - "CS0185"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0185"
ms.assetid: d6546e10-0af3-4860-8e6f-2da7dbeb3d28
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0185
'type' is not a reference type as required by the lock statement  
  
 The [lock](http://msdn.microsoft.com/library/656da1a4-707e-4ef6-9c6e-6d13b646af42) statement can only evaluate reference types. For more information, see [Thread Synchronization](http://msdn.microsoft.com/library/413e1f28-a2c5-4eec-8338-aa43e7982ff4) and [Reference Types](http://msdn.microsoft.com/library/801cf030-6e2d-4a0d-9daf-1431b0c31f47).  
  
## Example  
 The following sample generates CS0185:  
  
```  
// CS0185.cs  
public class MainClass  
{  
    public static void Main ()  
    {  
        lock (1)   // CS0185  
        // try the following lines instead  
        // MainClass x = new MainClass();  
        // lock(x)  
        {  
        }  
    }  
}  
```