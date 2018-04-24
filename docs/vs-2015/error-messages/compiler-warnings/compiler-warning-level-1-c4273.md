---
title: "Compiler Warning (level 1) C4273 | Microsoft Docs"
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
  - "C4273"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4273"
ms.assetid: cc18611d-9454-40a4-ad73-69823d5888fb
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4273
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4273](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4273).  
  
  
function' : inconsistent DLL linkage  
  
 Two definitions in a file differ in their use of [dllimport](../../cpp/dllexport-dllimport.md).  
  
## Example  
 The following sample generates C4273.  
  
```  
// C4273.cpp  
// compile with: /W1 /c  
char __declspec(dllimport) c;  
char c;   // C4273, delete this line or the line above to resolve  
```  
  
## Example  
 The following sample generates C4273.  
  
```  
// C4273_b.cpp  
// compile with: /W1 /clr /c  
#include <stdio.h>  
extern "C" int printf_s(const char *, ...);   // C4273  
```

