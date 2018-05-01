---
title: "Compiler Error C2002 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2002"
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2002
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2002](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2002).  
  
  
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

