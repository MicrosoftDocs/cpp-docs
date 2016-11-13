---
title: "Compiler Error C2002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 10
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