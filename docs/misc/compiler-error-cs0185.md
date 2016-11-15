---
title: "Compiler Error CS0185 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  
 The [lock](/dotnet/articles/csharp/language-reference/keywords/lock-statement) statement can only evaluate reference types. For more information, see [Thread Synchronization](http://msdn.microsoft.com/Library/413e1f28-a2c5-4eec-8338-aa43e7982ff4) and [Reference Types](/dotnet/articles/csharp/language-reference/keywords/reference-types).  
  
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