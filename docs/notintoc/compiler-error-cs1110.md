---
title: "Compiler Error CS1110"
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
  - "CS1110"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1110"
ms.assetid: 5b571a76-1891-4f33-b23d-7c4cc654a05f
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
# Compiler Error CS1110
Cannot use 'this' modifier on first parameter of method declaration without a reference to System.Core.dll. Add a reference to System.Core.dll or remove 'this' modifier from the method declaration.  
  
 Extension methods are supported on version 3.5 and later of the .NET Framework. Extension methods generate metadata which marks the method with an attribute. The attribute class is in system.core.dll.  
  
### To correct this error  
  
1.  As the message states, add a reference to System.Core.dll or remove the `this` modifier from the method declaration.  
  
## Example  
 The following example generates CS1110 if the file is not compiled with a reference to System.Core.dll:  
  
```  
// cs1110.cs  
// CS1110  
// Compile with: /target:library  
public static class Extensions  
{  
    public static bool Test(this bool b) { return b; }  
}  
```  
  
## See Also  
 [Extension Methods](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)