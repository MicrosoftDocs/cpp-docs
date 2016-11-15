---
title: "Linker Tools Error LNK2019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nochkclr.obj"
  - "LNK2019"
  - "_check_commonlanguageruntime_version"
ms.assetid: 4392be92-195c-4eb2-bd4d-49cfac3ca291
caps.latest.revision: 39
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Linker Tools Error LNK2019
unresolved external symbol 'symbol' referenced in function 'function'  
  
 The linker could not find a definition for external symbol "`symbol`" used in function "`function`".  
  
 There are many issues that can cause this error. This topic will help you identify the cause and find a solution.  
  
 A *symbol* is the name the compiler uses for a function or global variable. An *external symbol* is the name used to refer to a symbol that is defined in a different source or object file. The linker must *resolve*, or find the definition for, the external symbol for every function or global variable used by each compiled file when it is linked into an application or DLL. If the linker can't find a matching definition for an external symbol in any of the linked files, it generates LNK2019.  
  
 This error can occur if the object or library file that has the definition of a symbol is not included in the build. It can also occur if the symbol name the linker searches for does not match the name of the symbol in the library or object file that defines it. This can happen if the name in the calling code is misspelled, uses different capitalization, uses a different calling convention, or specifies different parameters.  
  
 Code that uses C++ linkage uses [Name Decoration](../../error-messages/tool-errors/name-decoration.md), also known as *name-mangling*, to encode extra information about a variable or function's type and calling convention in the symbol name. The *decorated name* is the name the linker searches for to resolve external symbols. Because the type information becomes part of the symbol's decorated name, LNK2019 can result if the declaration of the external symbol where it is used does not match the declaration of the symbol where it is defined. To help you find the cause of the error, the error message shows you both the "friendly name," the name used in source code, and the decorated name (in parentheses) for the unresolved external symbol. You don't need to know how to translate the decorated name to be able to compare it with other decorated names.  
  
 **Common issues**  
  
 Here are some common problems that cause LNK2019:  
  
-   **The object file or library that contains the definition of the symbol is not linked.** In Visual Studio, verify that the source file that contains the definition is built and linked as part of your project. On the command line, verify that the source file that contains the definition is compiled, and that the resulting object file is included in the list of files to link.  
  
-   **The declaration of the symbol is not spelled the same as the definition of the symbol.** Verify the correct spelling and capitalization is used in both the declaration and the definition, and wherever the symbol is used or called.  
  
-   **A function is used but the type or number of the parameters do not match the function definition.** The function declaration must match the definition. Verify that the function call matches the declaration, and that the declaration matches the definition. Code that invokes template functions must also have matching template function declarations that include the same template parameters as the definition. For an example of a template declaration mismatch, see sample LNK2019e.cpp in the Examples section.  
  
-   **A function or variable is declared but not defined.** This usually means a declaration exists in a header file, but no matching definition is implemented. For member functions or static data members, the implementation must include the class scope selector. For an example, see [Missing Function Body or Variable](../../error-messages/tool-errors/missing-function-body-or-variable.md).  
  
-   **The calling convention is different between the function declaration and the function definition.** Calling conventions ([__cdecl](../../cpp/cdecl.md), [__stdcall](../../cpp/stdcall.md), [__fastcall](../../cpp/fastcall.md), or [__vectorcall](../../cpp/vectorcall.md)) are encoded as part of the decorated name. Verify that the calling convention is the same.  
  
-   **A symbol is defined in a C file, but declared without using extern "C" in a C++ file.** Symbols defined in a file that is compiled as C have different decorated names than symbols declared in a C++ file unless you use an [extern "C"](../../cpp/using-extern-to-specify-linkage.md) modifier. Verify that the declaration matches the compilation linkage for each symbol.  
  
     Similarly, if you define a symbol in a C++ file that will be used by a C program, use `extern "C"` in the definition.  
  
-   **A symbol is defined as static and then later referenced outside the file.** In C++, unlike C, [global constants](../../error-messages/tool-errors/global-constants-in-cpp.md) have `static` linkage. To get around this limitation, you can include the `const` initializations in a header file and include that header in your .cpp files, or you can make the variable non-constant and use a constant reference to access it.  
  
-   **A static member of a class is not defined.** A static class member must have a unique definition, or it will violate the one-definition rule. A static class member that cannot be defined inline must be defined in one source file by using its fully-qualified name. If it is not defined at all, the linker generates LNK2019.  
  
-   **A build dependency is only defined as a project dependency in the solution.** In earlier versions of [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)], this level of dependency was sufficient. However, starting with Visual Studio 2010, [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] requires a [project-to-project reference](/visualstudio/ide/managing-references-in-a-project). If your project does not have a project-to-project reference, you may receive this linker error. Add a project-to-project reference to fix it.  
  
-   **You build a console application by using settings for a Windows application**. If the error message is similar to **unresolved external symbol WinMain referenced in function**`function_name`, link by using **/SUBSYSTEM:CONSOLE** instead of **/SUBSYSTEM:WINDOWS**. For more information about this setting, and for instructions on how to set this property in Visual Studio, see [/SUBSYSTEM (Specify Subsystem)](../../build/reference/subsystem-specify-subsystem.md).  
  
-   **You use different compiler options for function inlining in different source files.** Using inlined functions defined in .cpp files and mixing function inlining compiler options in different source files can cause LNK2019. For more information, see [Function Inlining Problems](../../error-messages/tool-errors/function-inlining-problems.md).  
  
-   **You use automatic variables outside their scope.** Automatic (function scope) variables can only be used in the scope of that function. These variables can't be declared `extern` and used in other source files. For an example, see [Automatic (Function Scope) Variables](../../error-messages/tool-errors/automatic-function-scope-variables.md).  
  
-   **You call instrinsic functions or pass argument types to intrinsic functions that are not supported on your target architecture.** For example, if you use an AVX2 intrinsic, but do not specify the [/ARCH:AVX2](../../build/reference/arch-x86.md) compiler option, the compiler assumes that the intrinsic is an external function. Instead of generating an inline instruction, the compiler generates a call to an external symbol with the same name as the intrinsic. When the linker tries to find the definition of this missing function, it generates LNK2019. Verify that you only use intrinsics and types supported by your target architecture.  
  
-   **You mix code that uses native wchar_t with code that doesn't.** C++ language conformance work that was done in Visual C++ 2005 made `wchar_t` a native type by default. You must use the [/Zc:wchar_t-](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) compiler option to generate code compatible with library and object files compiled by using earlier versions of Visual C++. If not all files have been compiled by using the same **/Zc:wchar_t** settings, type references may not resolve to compatible types. Verify that `wchar_t` types in all library and object files are compatible, either by updating the types that are used, or by using consistent **/Zc:wchar_t** settings when you compile.  
  
 For more information about possible causes and solutions for LNK2019, see the Stack Overflow question [What is an undefined reference/unresolved external symbol error and how do I fix it?](http://stackoverflow.com/q/12573816/2002113).  
  
 **Diagnosis tools**  
  
 It can be difficult to tell why the linker can't find a particular symbol definition. Often the problem is that you have not included the code in your build, or build options have created different decorated names for external symbols. There are several tools and options that can help you diagnose a LNK2019 error.  
  
-   The [/VERBOSE](../../build/reference/verbose-print-progress-messages.md) linker option can help you determine which files the linker references. This can help you verify whether the file that contains the definition of the symbol is included in your build.  
  
-   The [/EXPORTS](../../build/reference/dash-exports.md) and [/SYMBOLS](../../build/reference/symbols.md) options of the DUMPBIN utility can help you discover which symbols are defined in your .dll and object or library files. Verify that the exported decorated names match the decorated names the linker searches for.  
  
-   The UNDNAME utility can show you the equivalent undecorated external symbol for a decorated name.  
  
 **Examples**  
  
 Here are several examples of code that causes a LNK2019 error, together with information about how to fix the error.  
  
 **A symbol is declared but not defined**  
  
 The following sample generates LNK2019 because an external symbol is declared but not defined:  
  
```cpp  
// LNK2019.cpp  
// Compile by using: cl /EHsc LNK2019.cpp  
// LNK2019 expected  
extern char B[100];   // B is not available to the linker  
int main() {  
   B[0] = ' ';   // LNK2019  
}  
```  
  
 Here is another example:  
  
```cpp  
// LNK2019c.cpp  
// Compile by using: cl /EHsc LNK2019c.cpp  
// LNK2019 expected  
extern int i;  
extern void g();  
void f() {  
   i++;  
   g();  
}  
int main() {}  
```  
  
 If `i` and `g` are not defined in one of the files in the build, the linker generates LNK2019. You can fix the errors by including the source code file that contains the definitions as part of the compilation. Alternatively, you can pass to the linker .obj files or .lib files that contain the definitions.  
  
 **A static data member is declared but not defined**  
  
 LNK2019 can also occur when a static data member is declared but not defined. The following sample generates LNK2019, and shows how to fix it.  
  
```cpp  
// LNK2019b.cpp  
// Compile by using: cl /EHsc LNK2019b.cpp  
// LNK2019 expected  
struct C {  
   static int s;  
};  
  
// Uncomment the following line to fix the error.  
// int C::s;  
  
int main() {  
   C c;  
   C::s = 1;  
}  
```  
  
 **Declaration parameters do not match definition**  
  
 Code that invokes template functions must have matching template function declarations. Declarations must include the same template parameters as the definition. The following sample generates LNK2019 on a user-defined operator, and shows how to fix it.  
  
```cpp  
// LNK2019e.cpp  
// compile by using: cl /EHsc LNK2019e.cpp  
// LNK2019 expected  
#include <iostream>  
using namespace std;  
  
template<class T> class   
Test {  
   // The operator<< declaration does not match the definition below:  
   friend ostream& operator<<(ostream&, Test&);  
   // To fix, replace the line above with the following:  
   // template<typename T> friend ostream& operator<<(ostream&, Test<T>&);  
};  
  
template<typename T>  
ostream& operator<<(ostream& os, Test<T>& tt) {  
   return os;  
}  
  
int main() {  
   Test<int> t;  
   cout << "Test: " << t << endl;   // LNK2019 unresolved external  
}  
```  
  
 **Inconsistent wchar_t type definitions**  
  
 The following sample creates a DLL that has an export that uses `WCHAR`, which resolves to `wchar_t`.  
  
```cpp  
// LNK2019g.cpp  
// compile with: cl /EHsc /LD LNK2019g.cpp  
#include "windows.h"  
// WCHAR resolves to wchar_t  
__declspec(dllexport) void func(WCHAR*) {}  
```  
  
 The following sample uses the DLL in the previous sample, and generates LNK2019 because the types unsigned short* and WCHAR\* are not the same.  
  
```cpp  
// LNK2019h.cpp  
// compile by using: cl /EHsc LNK2019h LNK2019g.lib  
// LNK2019 expected  
__declspec(dllimport) void func(unsigned short*);  
  
int main() {  
   func(0);  
}  
```  
  
 To resolve this error, change `unsigned short` to `wchar_t` or `WCHAR`, or compile LNK2019g.cpp by using **/Zc:wchar_t-**.