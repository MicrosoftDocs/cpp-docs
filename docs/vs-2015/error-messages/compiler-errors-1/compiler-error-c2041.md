---
title: "Compiler Error C2041 | Microsoft Docs"
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
  - "C2041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2041"
ms.assetid: c9a33bb1-f9cf-47d6-bd21-7d867a8c37d5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2041
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2041](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2041).  
  
  
illegal digit 'character' for base 'number'  
  
 The specified character is not a valid digit for the base (such as octal or hex).  
  
 The following sample generates C2041:  
  
```  
// C2041.cpp  
int i = 081;   // C2041  8 is not a base 8 digit  
```  
  
 Possible resolution:  
  
```  
// C2041b.cpp  
// compile with: /c  
int j = 071;  
```

