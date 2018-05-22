---
title: "Compiler Error C2004 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2004"
ms.assetid: d81526dd-3a00-4593-87b0-d910d3d29bca
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2004
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2004](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2004).  
  
  
expected 'defined(id)'  
  
 An identifier must appear in the parentheses following the preprocessor keyword.  
  
 This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: missing parenthesis in preprocessor directive. If the closing parenthesis is missing from a preprocessor directive, the compiler will generate an error.  
  
## Example  
 The following sample generates C2004:  
  
```  
// C2004.cpp  
// compile with: /DDEBUG  
#include <stdio.h>  
  
int main()   
{  
    #if defined(DEBUG   // C2004  
        printf_s("DEBUG defined\n");  
    #endif  
}  
```  
  
## Example  
 Possible resolution:  
  
```  
// C2004b.cpp  
// compile with: /DDEBUG  
#include <stdio.h>  
  
int main()   
{  
    #if defined(DEBUG)  
        printf_s("DEBUG defined\n");  
    #endif  
}  
```

