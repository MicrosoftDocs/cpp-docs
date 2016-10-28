---
title: "Compiler Error CS0717"
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
  - "CS0717"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0717"
ms.assetid: 1976e82a-d048-4f13-a95a-a7f4e3cd7038
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
# Compiler Error CS0717
'static class': static classes cannot be used as constraints  
  
 Static classes cannot be extended as they only contain static members and not instance members. Because they cannot be extended, this makes them useless as type parameters and constraints, as no type can exist that is a specialization of a static class.  
  
## Example  
 The following sample generates CS0717:  
  
```  
// CS0717.cs  
  
public static class SC  
{  
    public static void F()  
    {  
    }  
}  
  
public class G<T> where T : SC  // CS0717  
{  
    public static void Main()  
    {  
    }  
}  
```