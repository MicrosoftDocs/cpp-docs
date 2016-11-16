---
title: "#error Directive (C-C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#error"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#error directive"
  - "preprocessor, directives"
  - "error directive (#error directive)"
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
caps.latest.revision: 8
author: "corob-msft"
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
# #error Directive (C/C++)
The `#error` directive emits a user-specified error message at compile time and then terminates the compilation.  
  
## Syntax  
  
```  
#errortoken-string  
```  
  
## Remarks  
 The error message that this directive emits includes the *token-string* parameter. The `token-string` parameter is not subject to macro expansion. This directive is most useful during preprocessing for notifying the developer of a program inconsistency or the violation of a constraint. The following example demonstrates error processing during preprocessing:  
  
```  
#if !defined(__cplusplus)  
#error C++ compiler required.  
#endif  
```  
  
## See Also  
 [Preprocessor Directives](../preprocessor/preprocessor-directives.md)