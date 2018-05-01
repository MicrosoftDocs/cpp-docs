---
title: "How to: Detect -clr Compilation | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilation, detecting /clr"
  - "/clr compiler option [C++], detecting use of"
ms.assetid: a9310045-4810-4637-a64a-0b31a08791c1
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Detect /clr Compilation
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Detect -clr Compilation](https://docs.microsoft.com/cpp/dotnet/how-to-detect-clr-compilation).  
  
  
Use the `_MANAGED` or `_M_CEE` macro to see if a module is compiled with **/clr**. For more information, see [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 For more information about macros, see [Predefined Macros](../preprocessor/predefined-macros.md).  
  
## Example  
  
```  
// detect_CLR_compilation.cpp  
// compile with: /clr  
#include <stdio.h>  
  
int main() {  
   #if (_MANAGED == 1) || (_M_CEE == 1)  
      printf_s("compiling with /clr\n");  
   #else  
      printf_s("compiling without /clr\n");  
   #endif  
}  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

