---
title: "Compiler Error C3861 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3861"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3861"
ms.assetid: 0a1eee30-b3db-41b1-b1e5-35949c3924d7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3861

> '*identifier*': identifier not found  
  
The compiler was not able to resolve a reference to an identifier, even using argument-dependent lookup.  
  
To fix this error, compare use of *identifier* to the identifier declaration for case and spelling. Verify that [scope resolution operators](../../cpp/scope-resolution-operator.md) and namespace [using directives](../../cpp/namespaces-cpp.md#using_directives) are used correctly. If the identifier is declared in a header file, verify that the header is included before the identifier is referenced. If the identifier is meant to be externally visible, make sure that it is declared in any source file that uses it. Also check that the identifier declaration or definition is not excluded by [conditional compilation directives](../../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md). 

Changes to remove obsolete functions from the C Runtime Library in Visual Studio 2015 can cause C3861. To resolve this error, remove references to these functions or replace them with their secure alternatives, if any. For more information, see [Obsolete Functions](../../c-runtime-library/obsolete-functions.md).  

If error C3861 appears after project migration from older versions of the compiler, you may have issues related to supported Windows versions. Visual C++ no longer supports targeting Windows 95, Windows 98, Windows ME, Windows NT or Windows 2000. If your WINVER or _WIN32_WINNT macros are assigned to one of these versions of Windows, you must modify the macros. For more information, see [Modifying WINVER and _WIN32_WINNT](../../porting/modifying-winver-and-win32-winnt.md).
  
## Example  

The following sample generates C3861 because the identifier is not defined.  
  
```cpp  
// C3861.cpp  
void f2(){}  
int main() {  
   f();    // C3861  
   f2();   // OK  
}  
```  
  
## Example  

The following sample generates C3861 because an identifier is only visible in the file scope of its definition, unless it is declared in other source files that use it.  
  
```cpp  
// C3861_a1.cpp
// Compile with: cl /EHsc /W4 C3861_a1.cpp C3861_a2.cpp  
#include <iostream>
// Uncomment the following line to fix:
// int f();  // declaration makes external function visible
int main() {  
   std::cout << f() << std::endl;    // C3861
}  
```  
  
```cpp  
// C3861_a2.cpp  
int f() {  // declared and defined here
   return 42;  
}
```  
  
## Example  

Exception classes in the C++ Standard Library require the `std` namespace.  
  
```cpp  
// C3861_b.cpp  
// compile with: /EHsc  
#include <iostream>  
int main() {  
   try {  
      throw exception("Exception");   // C3861  
      // try the following line instead  
      // throw std::exception("Exception");  
   }  
   catch (...) {  
      std::cout << "caught an exception" << std::endl;  
   }  
}  
```  
## Example  

Obsolete functions have been removed from the CRT library.  
  
```cpp  
// C3861_c.cpp  
#include <stdio.h>  
int main() {  
   char line[21]; // room for 20 chars + '\0'  
   gets( line );  // C3861  
   // Use gets_s instead.  
   printf( "The line entered was: %s\n", line );  
}  
```