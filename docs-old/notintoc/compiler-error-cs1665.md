---
title: "Compiler Error CS1665"
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
  - "CS1665"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1665"
ms.assetid: 93d4a4af-23c3-4730-a778-77852e41db4d
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
# Compiler Error CS1665
Fixed size buffers must have a length greater than zero  
  
 This error occurs if a fixed size buffer is declared with a zero or negative size. The length of a fixed size buffer must be a positive integer.  
  
## Example  
 The following sample generates CS1665.  
  
```  
// CS1665.cs  
// compile with: /unsafe /target:library  
struct S  
{   
   public unsafe fixed int A[0];   // CS1665  
}  
```