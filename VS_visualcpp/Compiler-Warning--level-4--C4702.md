---
title: "Compiler Warning (level 4) C4702"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: d8198c1e-8762-42a6-9e6b-cb568b7a1686
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Warning (level 4) C4702
unreachable code  
  
 This warning is the result of compiler conformance work that was done for Visual Studio .NET 2003: unreachable code. When the compiler (back end) detects unreachable code, it will generate C4702, a level 4 warning.  
  
 For code that is valid in both the Visual Studio .NET 2003 and Visual Studio .NET versions of Visual C++, remove the unreachable code or assure that all source code is reachable by some flow of execution.  
  
## Example  
 The following sample generates C4702.  
  
```  
// C4702.cpp  
// compile with: /W4  
#include <stdio.h>  
  
int main() {  
   return 1;  
   printf_s("I won't print.\n");   // C4702 unreachable  
}  
```  
  
## Example  
 When compiling with **/GX**, **/EHc**, **/EHsc**, or **/EHac** and using extern C functions, code can become unreachable because extern C functions are assumed to not throw, thus the catch block isn't reachable.  If you feel that this warning is not valid because a function can throw, compile with **/EHa** or **/EHs**, depending on the exception thrown.  
  
 For more information, see [/EH (Exception Handling Model)](../VS_visualcpp/-EH--Exception-Handling-Model-.md) for more information.  
  
 The following sample generates C4702.  
  
```  
// C4702b.cpp  
// compile with: /W4 /EHsc  
#include <iostream>  
  
using namespace std;  
extern "C" __declspec(dllexport) void Function2(){}  
  
int main() {  
   try {  
      Function2();  
   }  
   catch (...) {  
      cout << "Exp: Function2!" << endl;   // C4702  
   }  
}  
```