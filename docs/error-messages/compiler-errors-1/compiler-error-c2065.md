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
  
The compiler can't find the declaration for an identifier. If the identifier is a variable, you must specify the type of the variable in a declaration before it can be used. If the identifier is a function name, the parameters that the function uses must be specified in a declaration before the function can be used. If the identifier is the tag for a user-defined type, for example, a `class` or `struct`, the type of the tag must be declared before it can be used. If the identifier is a type alias, the type must be declared by using a `using` declaration or `typedef` before the type can be used.  
  
There are many possible causes for this error. Here are some of the most common issues:
  
## Example: misspelled identifier  
  
This error commonly occurs when the identifier name is misspelled, or the identifier uses the wrong uppercase and lowercase letters. The name in the declaration must exactly match the name you use.  
  
```cpp  
// C2065_spell.cpp  
// compile with: cl /EHsc C2065_spell.cpp 
#include <iostream> 
using namespace std; 
int main() { 
    int someIdentifier = 42; 
    cout << "Some Identifier: " << SomeIdentifier << endl;   
    // C2065: 'SomeIdentifier': undeclared identifier 
    // To fix, correct the spelling:  
    // cout << "Some Identifier: " << someIdentifier << endl;   
}  
```
  
## Example: missing header file  
  
You have not included the header file that declares the identifier. Make sure the file that contains the declaration for the identifier is included in every source file that uses it.  
  
```cpp  
// C2065_header.cpp  
// compile with: cl /EHsc C2065_spell.cpp 

//#include <stdio.h> 
int main() { 
    fpos_t file_position = 42; // C2065: 'fpos_t': undeclared identifier 
    // To fix, uncomment the #include <stdio.h> line
    // to include the header where fpos_t is defined  
} 
```  
  
You may see this error in Windows Desktop app source files if you define `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN`, or `WIN32_EXTRA_LEAN`. These preprocessor macros exclude some header files from windows.h and afxv\_w32.h to speed compiles. Look in windows.h and afxv_w32.h for an up-to-date description of what's excluded.  
  
## Eample: missing closing quote  
  
This error can occur if you are missing a closing quote after a string constant. This is an easy way to confuse the compiler. 
  
```cpp  
// C2065_quote.cpp  
// compile with: cl /EHsc C2065_quote.cpp 
#include <iostream>  

int main() { 
    // Fix this issue by adding the closing quote to "Aaaa"
    char * first = "Aaaa, * last = "Zeee"; 
    std::cout << "Name: " << first 
        << " " << last << std::endl; // C2065: 'last': undeclared identifier 
} 
```  
  
## Example: use iterator outside for loop scope  
  
This error can occur if you declare an iterator variable in a `for` loop, and then you try to use that iterator variable outside the scope of the `for` loop. The compiler enables the [/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) compiler option by default. See [Debug Iterator Support](../../standard-library/debug-iterator-support.md) for more information.  
  
```cpp  
// C2065_iter.cpp  
// compile with: cl /EHsc C2065_iter.cpp 
#include <iostream> 
#include <string> 

int main() {
    // char last = '!'; 
    std::string letters{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" }; 
    for (const char& c : letters) {
        if ('Q' == c) {
            std::cout << "Found Q!" << std::endl;
        }
        // last = c;
    }
    std::cout << "Last letter was " << c << std::endl; // C2065
    // Fix by using a variable declared in an outer scope.
    // Uncomment the lines that declare and use 'last' for an example.
    // std::cout << "Last letter was " << last << std::endl; // C2065
} 
```  
  
## Example: preprocessor removed declaration  
  
This error can occur if you refer to a function or variable that is in conditionally compiled code that is not compiled for your current configuration. This can also occur if you call a function in a header file that is currently not supported in your build environment. If certain variables or functions are only available when a particular preprocessor macro is defined, make sure the code that calls those functions can only be compiled when the same preprocessor macro is defined. This issue is easy to spot in the IDE, because the declaration for the function is greyed out if the required preprocessor macros are not defined for the current build configuration.  
  
This is an example of code that works when you build in Debug, but not Retail:  
  
```cpp  
// C2065_defined.cpp
// Compile with: cl /EHsc /W4 /MT C2065_defined.cpp
#include <iostream>
#include <crtdbg.h>
#ifdef _DEBUG
    _CrtMemState oldstate;
#endif
int main() {
    _CrtMemDumpStatistics(&oldstate); 
    std::cout << "Total count " << oldstate.lTotalCount; // C2065
    // Fix by guarding references the same way as the declaration:
    // #ifdef _DEBUG
    //    std::cout << "Total count " << oldstate.lTotalCount;
    // #endif
}
```
  
## Example: use an unscoped identifier  
  
This error can occur if your identifier is not properly scoped. For example, when C++ Standard Library functions and operators are not fully qualified by namespace, or you have not brought the `std` namespace into the current scope by using a `using` directive, the compiler can't find them. To fix this issue, you must either fully qualify the identifier names, or specify the namespace with the `using` directive.  
  
This example fails to compile because `cout` and `endl` are defined in the `std` namespace:  
  
```cpp  
// C2065_scope.cpp  
// compile with: cl /EHsc C2065_scope.cpp 
// using namespace std;   // Uncomment this line to fix  
#include <iostream>  
int main() {  
    cout << "Hello" << endl;   // C2065 'cout': undeclared identifier 
                               // C2065 'endl': undeclared identifier
    // Or try the following line instead  
    std::cout << "Hello" << std::endl;  
}
```  
  
Identifiers that are declared inside of `class`, `struct`, or `enum class` types, must also be qualified by the name of the enclosing scope.
  
## Example: C++/CLI type deduction failure  
  
This error can occur when calling a generic function, if the intended type argument cannot be deduced from the parameters used. For more information, see [Generic Functions (C++/CLI)](../../windows/generic-functions-cpp-cli.md).  
  
```cpp  
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
  
## Example: C++/CLI attribute parameters  
  
This error can also be generated as a result of compiler conformance work that was done for Visual C++ 2005: parameter checking for Visual C++ attributes.  
  
```cpp  
// C2065_attributes.cpp  
// compile with: cl /c /clr C2065_attributes.cpp  
[module(DLL, name=MyLibrary)];   // C2065  
// try the following line instead  
// [module(dll, name="MyLibrary")];  
  
[export]  
struct MyStruct {  
   int i;  
};  
```  
