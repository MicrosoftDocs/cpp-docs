---
title: "Compiler Warning (level 2) CS0440"
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
  - "CS0440"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0440"
ms.assetid: ade6761f-4d7d-42bc-a0c5-bbb1b987a1aa
caps.latest.revision: 7
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
# Compiler Warning (level 2) CS0440
Defining an alias named 'global' is ill-advised since 'global::' always references the global namespace and not an alias  
  
 This warning is issued when you define an alias named global.  
  
## Example  
 The following example generates CS0440:  
  
```  
// CS0440.cs  
// Compile with: /W:1  
  
using global = MyClass;   // CS0440  
class MyClass  
{  
    static void Main()  
    {  
        // Note how global refers to the global namespace  
        // even though it is redefined above.  
        global::System.Console.WriteLine();  
    }  
}  
```