---
title: "Compiler Error CS0185"
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
  - "CS0185"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0185"
ms.assetid: d6546e10-0af3-4860-8e6f-2da7dbeb3d28
caps.latest.revision: 9
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
# Compiler Error CS0185
'type' is not a reference type as required by the lock statement  
  
 The [lock](../Topic/lock%20Statement%20\(C%23%20Reference\).md) statement can only evaluate reference types. For more information, see [Thread Synchronization](../Topic/Thread%20Synchronization%20\(C%23%20and%20Visual%20Basic\).md) and [Reference Types](../Topic/Reference%20Types%20\(C%23%20Reference\).md).  
  
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