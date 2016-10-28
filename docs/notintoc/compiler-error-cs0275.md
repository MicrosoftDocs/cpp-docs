---
title: "Compiler Error CS0275"
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
  - "CS0275"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0275"
ms.assetid: 4d59f11c-b0ea-4c91-b2cb-cbe3be9a9ba2
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
# Compiler Error CS0275
'accessor': accessibility modifiers may not be used on accessors in an interface  
  
 This error occurs when you use an access modifier on any one of the accessors of a property or indexer in an interface. To resolve, remove the access modifier.  
  
## Example  
 The following example generates CS0275:  
  
```  
// CS0275.cs  
public interface MyInterface  
{  
    int Property  
    {  
        get;  
        internal set;   // CS0275  
    }  
}  
```