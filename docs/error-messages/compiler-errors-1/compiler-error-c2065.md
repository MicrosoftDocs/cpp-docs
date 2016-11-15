---
title: "Compiler Error C2065 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2065"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2065"
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
caps.latest.revision: 20
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
# Compiler Error C2065
'identifier' : undeclared identifier  
  
 A variable's type must be specified in a declaration before it can be used. The parameters that a function uses must be specified in a declaration, or prototype, before the function can be used.  
  
 Possible causes:  
  
1.  Identifier name is misspelled.  
  
2.  Identifier uses the wrong uppercase and lowercase letters.  
  
3.  Missing closing quote after a string constant.  
  
4.  You are compiling with a debug version of the C runtime, declaring a Standard C++ Library iterator variable in a `for` loop, and then trying to use that iterator variable outside the scope of the `for` loop. Compiling C++ Standard Library code with a debug version of the C runtime implies [/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  See [Debug Iterator Support](../../standard-library/debug-iterator-support.md) for more information.  
  
5.  You may be calling a function in an SDK header file that is currently not supported in your build environment.  
  
6.  Omitting necessary include files, especially if you define `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN`, or `WIN32_EXTRA_LEAN`. These symbols exclude some header files from windows.h and afxv_w32.h to speed compiles. (Look in windows.h and afxv_w32.h for an up-to-date description of what's excluded.)  
  
7.  Improper namespace scope. For example, to resolve C++ Standard Library functions and operators that are not fully qualified, you must specify the `std` namespace with the `using` directive. The following example fails to compile because the `using` directive is commented out and `cout` is defined in the `std` namespace:  
  
## Example  
 The following sample generates C2065 and shows how to fix it.  
  
```  
// C2065.cpp  
// compile with: /EHsc  
// using namespace std;   // Uncomment this line to fix  
#include <iostream>  
int main() {  
   cout << "Hello" << endl;   // C2065  
  
   // Or try the following line instead  
   std::cout << "Hello" << std::endl;  
}  
```  
  
## Example  
 When calling a generic function, if the intended type argument cannot be deduced from the parameters used, the compiler will report an error. For more information, see [Generic Functions (C++/CLI)](../../windows/generic-functions-cpp-cli.md).  
  
 The following sample generates C2065 and shows how to fix it.  
  
```  
// C2065_b.cpp  
// compile with: /clr  
generic <typename ItemType>  
void G(int i) {}  
  
int main() {  
   // global generic function call  
   G<T>(10);   // C2065  
   G<int>(10);   // OK - fix with a specific type argument  
}  
```  
  
## Example  
 This error can also be generated as a result of compiler conformance work that was done for Visual C++ 2005: parameter checking for Visual C++ attributes.  
  
 The following sample generates C2065 and shows how to fix it.  
  
```  
// C2065_c.cpp  
// compile with: /c  
[module(DLL, name=MyLibrary)];   // C2065  
// try the following line instead  
// [module(dll, name="MyLibrary")];  
  
[export]  
struct MyStruct {  
   int i;  
};  
```