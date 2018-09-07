---
title: "Compiler Error C2002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2002"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2002"]
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2002
invalid wide-character constant  
  
 The multibyte-character constant is not valid.  
  
### To fix by checking the following possible causes  
  
1.  The wide-character constant contains more bytes than expected.  
  
2.  The standard header STDDEF.h is not included.  
  
3.  Wide characters cannot be concatenated with ordinary string literals.  
  
4.  A wide-character constant must be preceded by the character 'L':  
  
    ```  
    L'mbconst'  
    ```  
  
5.  For Microsoft C++, the text arguments of a preprocessor directive must be ASCII. For example, the directive, `#pragma message(L"string")`, is not valid.