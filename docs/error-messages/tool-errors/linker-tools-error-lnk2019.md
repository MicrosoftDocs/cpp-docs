---
title: "Linker Tools Error LNK2019"
description: "All about the Microsoft Visual Studio Linker error LNK2019 and how to diagnose and correct it in C and C++ code."
ms.date: 09/07/2022
f1_keywords: ["LNK2019"]
helpviewer_keywords: ["nochkclr.obj", "LNK2019", "_check_commonlanguageruntime_version"]
no-loc: [main, WinMain, wmain, wWinMain, __cdecl, __stdcall, __fastcall, __vectorcall, extern, static, const, ARCH, AVX2, wchar_t, VERBOSE, EXPORTS, SYMBOLS, DUMPBIN, UNDNAME]
---
# Linker Tools Error LNK2019

> unresolved external symbol '*symbol*' referenced in function '*function*'

The compiled code for *function* makes a reference or call to *symbol*, but the linker can't find the symbol definition in any of the libraries or object files.

This error message is followed by fatal error [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). To fix error LNK1120, you must fix all LNK2001 and LNK2019 errors first.

## Possible causes

There are many ways to get this error. All of them involve a reference to a function or variable that the linker couldn't *resolve*, or find a definition for. The compiler can identify when a symbol isn't *declared*, but it can't tell when the symbol isn't *defined*. It's because the definition may be in a different source file or library. If a symbol is referred to but never defined, the linker generates an unresolved external symbol error.

Here are some common problems that cause LNK2019:

### The source file that contains the definition of the symbol isn't compiled

In Visual Studio, make sure the source file that defines the symbol gets compiled as part of your project. Check the intermediate build output directory for a matching .obj file. If the source file isn't compiled, right-click on the file in Solution Explorer, and then choose **Properties** to check the properties of the file. The **Configuration Properties** > **General** page should show an **Item Type** of **C/C++ Compiler**. On the command line, make sure the source file that contains the definition is compiled.

### The object file or library that contains the definition of the symbol isn't linked

In Visual Studio, make sure the object file or library that contains the symbol definition is linked as part of your project. On the command line, make sure the list of files to link includes the object file or library.

### The declaration of the symbol isn't spelled the same as the definition of the symbol

Verify you use the correct spelling and capitalization in both the declaration and the definition, and wherever the symbol is used or called.

### A function is used but the type or number of the parameters don't match the function definition

The function declaration must match the definition. Make sure the function call matches the declaration, and that the declaration matches the definition. Code that invokes function templates must also have matching function template declarations that include the same template parameters as the definition. For an example of a template declaration mismatch, see sample LNK2019e.cpp in the Examples section.

### A function or variable is declared but not defined

LNK2019 can occur when a declaration exists in a header file, but no matching definition is implemented. For member functions or static data members, the implementation must include the class scope selector. For an example, see [Missing Function Body or Variable](../../error-messages/tool-errors/missing-function-body-or-variable.md).

### The calling convention is different between the function declaration and the function definition

Some calling conventions ([`__cdecl`](../../cpp/cdecl.md), [`__stdcall`](../../cpp/stdcall.md), [`__fastcall`](../../cpp/fastcall.md), and [`__vectorcall`](../../cpp/vectorcall.md)) are encoded as part of the decorated name. Make sure the calling convention is the same.

### A symbol is defined in a C file, but declared without using `extern "C"` in a C++ file

A file that's compiled as C creates decorated names for symbols that are different from the decorated names for the same symbols declared in a C++ file, unless you use an [`extern "C"`](../../cpp/extern-cpp.md) modifier. Make sure the declaration matches the compilation linkage for each symbol. Similarly, if you define a symbol in a C++ file that will be used by a C program, use `extern "C"` in the definition.

### A symbol is defined as static and then later referenced outside the file

In C++, unlike C, [global constants](../../error-messages/tool-errors/global-constants-in-cpp.md) have **`static`** linkage. To get around this limitation, you can include the **`const`** initializations in a header file and include that header in your .cpp files, or you can make the variable non-constant and use a constant reference to access it.

### A static member of a class isn't defined

A static class member must have a unique definition, or it will violate the one-definition rule. A static class member that can't be defined inline must be defined in one source file by using its fully qualified name. If it isn't defined at all, the linker generates LNK2019.

### A build dependency is only defined as a project dependency in the solution

In earlier versions of Visual Studio, this level of dependency was sufficient. However, starting with Visual Studio 2010, Visual Studio requires a [project-to-project reference](/visualstudio/ide/managing-references-in-a-project). If your project doesn't have a project-to-project reference, you may receive this linker error. Add a project-to-project reference to fix it.

### An entry point isn't defined

The application code must define an appropriate entry point: `main` or `wmain` for console applications, and `WinMain` or `wWinMain` for Windows applications. For more information, see [`main` function and command-line arguments](../../cpp/main-function-command-line-args.md) or [`WinMain` function](/windows/win32/api/winbase/nf-winbase-winmain). To use a custom entry point, specify the [`/ENTRY` (Entry-Point Symbol)](../../build/reference/entry-entry-point-symbol.md) linker option.

### You build a console application by using settings for a Windows application

If the error message is similar to **unresolved external symbol WinMain referenced in function** *function_name*, link by using **`/SUBSYSTEM:CONSOLE`** instead of **`/SUBSYSTEM:WINDOWS`**. For more information about this setting, and for instructions on how to set this property in Visual Studio, see [`/SUBSYSTEM` (Specify Subsystem)](../../build/reference/subsystem-specify-subsystem.md).

### You attempt to link 64-bit libraries to 32-bit code, or 32-bit libraries to 64-bit code

Libraries and object files linked to your code must be compiled for the same architecture as your code. Make sure the libraries your project references are compiled for the same architecture as your project. Make sure the [`/LIBPATH`](../../build/reference/libpath-additional-libpath.md) or **Additional Library Directories** property points to libraries built for the correct architecture.

### You use different compiler options for function inlining in different source files

Using inlined functions defined in .cpp files and mixing function inlining compiler options in different source files can cause LNK2019. For more information, see [Function Inlining Problems](../../error-messages/tool-errors/function-inlining-problems.md).

### You use automatic variables outside their scope

Automatic (function scope) variables can only be used in the scope of that function. These variables can't be declared **`extern`** and used in other source files. For an example, see [Automatic (Function Scope) Variables](../../error-messages/tool-errors/automatic-function-scope-variables.md).

### You call intrinsic functions or pass argument types to intrinsic functions that aren't supported on your target architecture

For example, if you use an AVX2 intrinsic, but don't specify the [`/ARCH:AVX2`](../../build/reference/arch-x86.md) compiler option, the compiler assumes that the intrinsic is an external function. Instead of generating an inline instruction, the compiler generates a call to an external symbol with the same name as the intrinsic. When the linker tries to find the definition of this missing function, it generates LNK2019. Make sure you only use intrinsics and types supported by your target architecture.

### You mix code that uses native `wchar_t` with code that doesn't

C++ language conformance work that was done in Visual Studio 2005 made **`wchar_t`** a native type by default. If not all files have been compiled by using the same **`/Zc:wchar_t`** settings, type references may not resolve to compatible types. Make sure **`wchar_t`** types in all library and object files are compatible. Either update from a **`wchar_t`** typedef, or use consistent **/Zc:wchar_t** settings when you compile.

### You get errors for `*printf*` and `*scanf*` functions when you link a legacy static library

A static library that was built using a version of Visual Studio before Visual Studio 2015 may cause LNK2019 errors when linked with the UCRT. The UCRT header files `<stdio.h>`, `<conio.h>`, and `<wchar.h>`now define many `*printf*` and `*scanf*` variations as **`inline`** functions. The inlined functions are implemented by a smaller set of common functions. Individual exports for the inlined functions aren't available in the standard UCRT libraries, which only export the common functions. There are a couple of ways to resolve this issue. The method we recommend is to rebuild the legacy library with your current version of Visual Studio. Make sure the library code uses the standard headers for the definitions of the `*printf*` and `*scanf*` functions that caused the errors. Another option for a legacy library that you can't rebuild is to add `legacy_stdio_definitions.lib` to the list of libraries you link. This library file provides symbols for the `*printf*` and `*scanf*` functions that are inlined in the UCRT headers. For more information, see the **Libraries** section in [Overview of potential upgrade issues](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md#libraries).

## Third-party library issues and vcpkg

If you see this error when you're trying to configure a third-party library as part of your build, consider using [vcpkg](https://vcpkg.io/). **vcpkg** is a C++ package manager that uses your existing Visual Studio tools to install and build the library. **vcpkg** supports a large and growing [list of third-party libraries](https://github.com/Microsoft/vcpkg/tree/master/ports). It sets all the configuration properties and dependencies required for successful builds as part of your project.

## Diagnosis tools

Sometimes it's difficult to tell why the linker can't find a particular symbol definition. Often the problem is that you haven't included the code that contains the definition in your build. Or, build options have created different decorated names for external symbols. There are several tools and options that can help you diagnose LNK2019 errors.

- The [`/VERBOSE`](../../build/reference/verbose-print-progress-messages.md) linker option can help you determine which files the linker references. This option can help you verify whether the file that contains the definition of the symbol is included in your build.

- The [`/EXPORTS`](../../build/reference/dash-exports.md) and [`/SYMBOLS`](../../build/reference/symbols.md) options of the **DUMPBIN** utility can help you discover which symbols are defined in your .dll and object or library files. Make sure the exported decorated names match the decorated names the linker searches for.

- The **UNDNAME** utility can show you the equivalent undecorated external symbol for a decorated name.

## Examples

Here are several examples of code that causes LNK2019 errors, together with information about how to fix the errors.

### A symbol is declared but not defined

In this example, an external variable is declared but not defined:

```cpp
// LNK2019.cpp
// Compile by using: cl /EHsc /W4 LNK2019.cpp
// LNK2019 expected
extern char B[100];   // B isn't available to the linker
int main() {
   B[0] = ' ';   // LNK2019
}
```

Here's another example where a variable and function are declared as **`extern`** but no definition is provided:

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

Unless `i` and `g` are defined in one of the files included in the build, the linker generates LNK2019. You can fix the errors by including the source code file that contains the definitions as part of the compilation. Alternatively, you can pass `.obj` files or `.lib` files that contain the definitions to the linker.

### A static data member is declared but not defined

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

### Declaration parameters don't match the definition

Code that invokes function templates must have matching function template declarations. Declarations must include the same template parameters as the definition. The following sample generates LNK2019 on a user-defined operator, and shows how to fix it.

```cpp
// LNK2019e.cpp
// compile by using: cl /EHsc LNK2019e.cpp
// LNK2019 expected
#include <iostream>
using namespace std;

template<class T> class
Test {
   // The operator<< declaration doesn't match the definition below:
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

### Inconsistent wchar_t type definitions

This sample creates a DLL that has an export that uses `WCHAR`, which resolves to **`wchar_t`**.

```cpp
// LNK2019g.cpp
// compile with: cl /EHsc /LD LNK2019g.cpp
#include "windows.h"
// WCHAR resolves to wchar_t
__declspec(dllexport) void func(WCHAR*) {}
```

The next sample uses the DLL in the previous sample, and generates LNK2019 because the types `unsigned short*` and `WCHAR*` aren't the same.

```cpp
// LNK2019h.cpp
// compile by using: cl /EHsc LNK2019h LNK2019g.lib
// LNK2019 expected
__declspec(dllimport) void func(unsigned short*);

int main() {
   func(0);
}
```

To fix this error, change **`unsigned short`** to **`wchar_t`** or `WCHAR`, or compile LNK2019g.cpp by using **`/Zc:wchar_t-`**.

## See also

For more information about possible causes and solutions for LNK2019, LNK2001, and LNK1120 errors, see the Stack Overflow question: [`What is an undefined reference/unresolved external symbol error and how do I fix it?`](https://stackoverflow.com/q/12573816/2002113).
