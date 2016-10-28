---
title: "INCLUDELIB (MASM)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "INCLUDELIB"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INCLUDELIB directive"
ms.assetid: 5455d004-8202-4b57-93f3-9aa66f133a2d
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# INCLUDELIB (MASM)
Informs the linker that the current module should be linked with *libraryname*.  
  
## Syntax  
  
```  
  
INCLUDELIB libraryname  
```  
  
## Remarks  
 The *libraryname* must be enclosed in angle brackets if it includes a backslash, semicolon, greater-than symbol, less-than symbol, single quotation mark, or double quotation mark.  
  
## See Also  
 [Directives Reference](../intrinsics/directives-reference.md)