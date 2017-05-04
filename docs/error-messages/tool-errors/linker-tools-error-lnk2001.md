---
title: "Linker Tools Error LNK2001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2001"
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
caps.latest.revision: 21
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
# Linker Tools Error LNK2001
unresolved external symbol "*symbol*"  
  
The compiled code references a symbol (such as a function, variable, or label) named *symbol* that isn't defined in any of the libraries and object files specified to the linker.  
  
This error message is followed by fatal error [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). You must fix all LNK2001 errors to fix error LNK1120.  
  
## Possible causes for missing symbols  
  
There are many ways to get this error, but all of them involve a symbol reference that the linker can't *resolve*, or find a definition for. The compiler can identify when a symbol is not *declared*, but not when it is not *defined*, because the definition may be in a different source file or library. If a symbol is referred to but never defined, the linker generates LNK2001.  
  
The most common way to get an unresolved external symbol is to call a function or refer to a global variable from one source file that is defined in a second library or source file, but not to include the library or the object file for the second source file in the link command. When the linker can't find the definition for the symbol referred to by the first source file, it generates LNK2001. To fix this issue, explicitly include the object file or library that has the missing definition in the link command.  
  
This error also commonly occurs when the symbol the code asks for doesn't exist because the declaration of the symbol doesn't match the definition. The declaration and definition of the symbols have to match in both spelling and case. In the case of functions, the signatures and calling conventions must match. The declarations and definitions for any enclosing namespaces and classes must also match. To fix this issue, verify that the declaration of the missing symbol matches the definition. Also verify that it's defined in the same scope as the declaration.  
  
This error can also happen when the code asks for a symbol from one version of a library, but you supply a different version of the library to the linker. Generally, you can't mix object files or libraries that are built for different versions of the compiler. To fix this issue, build all the object files and libraries with the same version of the compiler before linking them together.  
  
## Specific causes for missing symbols  
  
### Coding issues  
  
This error can be caused by mismatched case in your code or module-definition (.def) file. For example, if you name a variable `var1` in one C++ source file and try to access it as `VAR1` in another, this error is generated. Use consistent names to fix this error.  
  
This error can be caused in a project that uses [function inlining](../../error-messages/tool-errors/function-inlining-problems.md) if you define the functions in a source file rather than in a header file. Inlined functions can't be seen outside the source file that defines them. To fix this issue, define the inlined functions in the headers where they are declared.  
  
This error can be caused if you call a C function from a C++ program without using an `extern "C"` declaration for the C function. The compiler uses different internal symbol naming conventions for C and C++ code, and it is the internal symbol name that the linker looks for when resolving symbols. To fix this issue, use an `extern "C"` wrapper around all declarations of C functions used in your C++ code, which causes the compiler to use the C internal naming convention for those symbols. Compiler options [/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) and [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) cause the compiler to compile files as C++ or C, respectively, regardless of the filename extension. These options can cause internal function names different from what you expect.  
  
This error can be caused by an attempt to reference functions or data that don't have external linkage. In C++, inline functions and `const` data have internal linkage unless explicitly specified as `extern`. To fix this issue, use explicit `extern` declarations on symbols referred to outside the defining source file.  
  
This error can be caused by a [missing function body or variable](../../error-messages/tool-errors/missing-function-body-or-variable.md) definition. The compiler only needs a function prototype or `extern` variable declaration to generate an object file without error, but the linker cannot resolve a call to an address or reference to a variable because there is no function code or variable space reserved. To fix this issue, make sure that every referenced function and variable is fully defined in a source file or library included in your link.  
  
This error can be caused by a function called using return and parameter types or calling conventions that do not match those in the function definition. In C++ object files, [Name decoration](../../error-messages/tool-errors/name-decoration.md) incorporates the calling convention, class or namespace scope, and return and parameter types of a function into the final decorated function name, which is used as the symbol to match when resolving calls to the function from other object files. To fix this issue, make sure that the declaration, definition, and calls to the function all use the same scopes, types, and calling conventions.  
  
This error can be caused by incorrectly included prototypes, which cause the compiler to expect a function body that is not provided. For example, if you have both a class and non-class implementation of a function, the C++ scope-resolution rules within the class.  
  
This error can be caused in C++ code when you include a function prototype in a class definition but fail to [include the implementation](../../error-messages/tool-errors/missing-function-body-or-variable.md) of the function for that class. To fix this issue, be sure to provide a definition for all declared members of a class.  
  
This error can be caused by an attempt to call a pure virtual function from an abstract base class. A pure virtual function has no base class implementation. To fix this issue, make sure all called virtual functions are implemented.  
  
This error can be caused by trying to use a variable declared within a function ([a local variable](../../error-messages/tool-errors/automatic-function-scope-variables.md)) outside the scope of that function. To fix this issue, remove the reference to the variable that is not in scope.  
  
This error can occur when you build a Release version of an ATL project, producing a message that CRT startup code is required. To fix this issue, do one of the following,  
  
-   Remove `_ATL_MIN_CRT` from the list of preprocessor defines to allow CRT startup code to be included. See [General Property Page (Project)](../../ide/general-property-page-project.md) for more information.  
  
-   If possible, remove calls to CRT functions that require CRT startup code. Instead, use their Win32 equivalents. For example, use `lstrcmp` instead of `strcmp`. Known functions that require CRT startup code are some of the string and floating point functions.  
  
### Compilation and link issues  
  
This error can occur when the project is missing a reference to a library (.LIB) or object (.OBJ) file. To fix this issue, add a reference to the required library or object file to your project. For more information, see [.lib Files as Linker Input](../../build/reference/dot-lib-files-as-linker-input.md).  
  
This error can occur if you use the [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) or [/Zl](../../build/reference/zl-omit-default-library-name.md) options. When you specify these options, libraries that contain required code are not linked into the project unless you have explicitly included them. To fix this issue, explicitly include all the libraries you use on the link command line. If you see many missing CRT or Standard Library function names when you use these options, explicitly include the CRT and Standard Library DLLs or library files in the link.  

If you compile using the **/clr** option, there can be a missing reference to .cctor. To fix this issue, see [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md) for more information.  
  
This error can occur if you link to the release mode libraries when building a debug version of an application. Similarly, if you use options **/MTd** or **/MDd** or define `_DEBUG` and then link to the release libraries, you should expect many potential unresolved externals, among other problems. Linking a release mode build with the debug libraries also causes similar problems. To fix this issue, make sure you use the debug libraries in your debug builds, and retail libraries in your retail builds.  
  
Mixing versions of Microsoft libraries and compiler products can be problematic. A new compiler version's libraries may contain new symbols that cannot be found in the libraries included with previous versions. If you use environment variables to control builds and you install multiple versions of Visual Studio toolsets, you may want to change the order of the directories in the search path, or change them to point to the current version.  
  
-  The Tools &#124; Options &#124; Projects &#124; VC++ Directories dialog, under the Library files selection, allows you to change the library search order. The Linker folder in the project's Property Pages dialog box may also contain paths that could be out of date.  
  
-  This problem may appear when a new SDK is installed (perhaps to a different location), and the search order is not updated to point to the new location. Normally, you should put the path to new SDK include and lib directories in front of the default Visual C++ location. Also, a project containing embedded paths may still point to old paths that are valid, but out of date for new functionality added by the new version that is installed to a different location.  
  
There is currently no standard for [C++ naming](../../error-messages/tool-errors/name-decoration.md) between compiler vendors or even between different versions of a compiler. Therefore, linking object files compiled with other compilers may not produce the same naming scheme and thus cause error LNK2001.  
  
[Mixing inline and non-inline compile options](../../error-messages/tool-errors/function-inlining-problems.md) on different modules can cause LNK2001. If a C++ library is created with function inlining turned on (**/Ob1** or **/Ob2**) but the corresponding header file describing the functions has inlining turned off (no `inline` keyword), this error occurs. To fix this issue, define the functions `inline` in the header file you include in other source files.  
  
If you use the `#pragma inline_depth` compiler directive, make sure you have a [value of 2 or greater set](../../error-messages/tool-errors/function-inlining-problems.md), and make sure you also use the [/Ob1](../../build/reference/ob-inline-function-expansion.md) or [/Ob2](../../build/reference/ob-inline-function-expansion.md) compiler option.  
  
This error can occur if you omit the LINK option /NOENTRY when you create a resource-only DLL. To fix this issue, add the /NOENTRY option to the link command.  
  
This error can occur if you use incorrect /SUBSYSTEM or /ENTRY settings in your project. For example, if you write a console application and specify /SUBSYSTEM:WINDOWS, an unresolved external error is generated for `WinMain`. To fix this issue, make sure you match the options to the project type. For more information on these options and entry points, see the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) and [/ENTRY](../../build/reference/entry-entry-point-symbol.md) linker options.  
  
### Exported symbol issues  
  
This error occurs when an export listed in a .def file is not found. This could be because it does not exist, is spelled incorrectly, or uses C++ decorated names. A .def file does not take decorated names. To fix this issue, remove unneeded exports, and use `extern "C"` declarations for exported symbols.  
  
## Interpreting the decorated symbol name  
  
When a symbol is unresolved, you can get information about the original name of the function or variable by following these guidelines.  
  
On x86 platforms, the calling convention decoration for names compiled in C, or for extern "C" names in C++, is:  
  
|Calling convention|Interpretation|  
|-|-|  
|`__cdecl`|Function is given an underscore (_) prefix.|  
|`__stdcall`|Function is given an underscore (_) prefix and an @ suffix followed by the dword aligned size of parameters on the stack.|  
|`__fastcall`|Function is given an @ prefix and an @ suffix followed by the dword aligned size of parameters on the stack.|  
  
The rules for name decoration in C++ are complex. For information, see [Name decoration](../../error-messages/tool-errors/name-decoration.md). Most error messages produce both the decorated and undecorated name for a symbol, but in some cases, the linker can only produce the decorated name. You can use the undname.exe command line tool, included as one of the tools in the compiler toolset, to get the undecorated form of a decorated name.  
  