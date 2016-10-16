---
title: "Compiler Error CS1725"
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
  - "cs1725"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1725"
ms.assetid: baef9ae3-b036-41d6-972c-9f3cdae1e8bd
caps.latest.revision: 5
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
# Compiler Error CS1725
Friend assembly reference 'reference' is invalid. InternalsVisibleTo declarations cannot have a version, culture, public key token, or processor architecture specified.  
  
 You cannot add a version culture in a friend assembly reference. Partial classes should be visible to friend assemblies.  
  
## Example  
 The following sample generates CS1725.  
  
```  
// CS1725.cs  
// compile with: /target:library  
using System.Runtime.CompilerServices;  
[assembly:InternalsVisibleTo("partial01,version=1.1.0.0")]   // CS1725  
// try the following line instead  
// [assembly:InternalsVisibleTo("partial01")]  
  
partial class TestClass   
{  
   public static string strBar = "my string";  
}  
```  
  
## See Also  
 [How to: Create Signed Friend Assemblies](../Topic/How%20to:%20Create%20Signed%20Friend%20Assemblies%20\(C%23%20and%20Visual%20Basic\).md)