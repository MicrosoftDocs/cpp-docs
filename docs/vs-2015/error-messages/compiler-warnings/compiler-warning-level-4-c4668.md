---
title: "Compiler Warning (level 4) C4668 | Microsoft Docs"
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
  - "C4668"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4668"
ms.assetid: c6585460-bc4a-4a15-9242-4cbfce53c961
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4668
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4668](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4668).  
  
  
symbol' is not defined as a preprocessor macro, replacing with '0' for 'directives'  
  
 A symbol that was not defined was used with a preprocessor directive. The symbol will evaluate to false. To define a symbol, you can use either the [#define directive](../../preprocessor/hash-define-directive-c-cpp.md) or [/D](../../build/reference/d-preprocessor-definitions.md) compiler option.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
## Example  
 The following sample generates C4668:  
  
```  
// C4668.cpp  
// compile with: /W4  
#include <stdio.h>  
  
#pragma warning (default : 4668)   // turn warning on  
  
int main()   
{  
    #if q   // C4668, q is not defined  
        printf_s("defined");  
    #else  
        printf_s("undefined");  
    #endif  
}  
```

