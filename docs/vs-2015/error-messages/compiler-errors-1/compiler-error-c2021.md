---
title: "Compiler Error C2021 | Microsoft Docs"
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
  - "C2021"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2021"
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2021
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2021](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2021).  
  
  
expected exponent value, not 'character'  
  
 The character used as the exponent of a floating-point constant is not a valid number. Be sure to use an exponent that is in range.  
  
## Example  
 The following sample generates C2021:  
  
```  
// C2021.cpp  
float test1=1.175494351E;   // C2021  
```  
  
## Example  
 Possible resolution:  
  
```  
// C2021b.cpp  
// compile with: /c  
float test2=1.175494351E8;  
```

