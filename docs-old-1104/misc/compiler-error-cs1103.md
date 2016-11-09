---
title: "Compiler Error CS1103 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1103"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1103"
ms.assetid: 513a26ea-9d66-4dc3-b3e6-d709c3089b1a
caps.latest.revision: 6
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
# Compiler Error CS1103
The first parameter of an extension method cannot be of type 'type'.  
  
 The first parameter of an extension method cannot be a pointer type.  
  
## Example  
 The following example generates CS1103:  
  
```  
// cs1103.cs  
public static class Extensions  
{  
    public unsafe static char* Test(this char* charP) { return charP; } // CS1103  
}   
```  
  
## See Also  
 [Extension Methods](/dotnet/csharp/programming-guide/classes-and-structs/extension-methods)   
 [unsafe](/dotnet/csharp/language-reference/keywords/unsafe)