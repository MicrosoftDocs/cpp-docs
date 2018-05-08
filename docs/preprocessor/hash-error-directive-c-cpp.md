---
title: "#error Directive (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["#error"]
dev_langs: ["C++"]
helpviewer_keywords: ["#error directive", "preprocessor, directives", "error directive (#error directive)"]
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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