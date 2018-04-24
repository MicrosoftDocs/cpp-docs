---
title: "Compiler Error C2019 | Microsoft Docs"
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
  - "C2019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2019"
ms.assetid: 4f37b1e1-9eca-418f-a4c3-141e8512d7b6
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2019
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2019](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2019).  
  
  
expected preprocessor directive, found 'character'  
  
 The character followed a `#` sign but it is not the first letter of a preprocessor directive.  
  
 The following sample generates C2019:  
  
```  
// C2019.cpp  
#!define TRUE 1   // C2019  
```  
  
 Possible resolution:  
  
```  
// C2019b.cpp  
// compile with: /c  
#define TRUE 1  
```

