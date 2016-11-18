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
unresolved external symbol "symbol"  
  
 Code references something (such as a function, variable, or label) that the linker can't find in the libraries and object files.  
  
 This error message is followed by fatal error [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md).  
  
 **Possible Causes**  
  
-   When upgrading a managed library or web service project from Visual C++ 2003, the **/Zl** compiler option is added to the **Command Line** property page. This will cause LNK2001.  
  
     To resolve this error, either add msvcrt.lib and msvcmrt.lib to the linker's Additional Dependencies property. Or, remove **/Zl** from the **Command Line** property page. For more information, see [/Zl (Omit Default Library Name)](../../build/reference/zl-omit-default-library-name.md) and [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
-   What the code asks for doesn't exist (the symbol is spelled incorrectly or uses the wrong case, for example).  
  
-   The code asks for the wrong thing (you are using mixed versions of the libraries, some from one version of the product, others from another version).  
  
 **Specific Causes**  
  
 **Coding Problems**  
  
-   If the LNK2001 diagnostic text reports that `__check_commonlanguageruntime_version` is an unresolved external symbol, see [LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md) for information on how to resolve.  
  
-   The definition of member template is outside the class. Visual C++ has a limitation in which member templates must be fully defined within the enclosing class. See KB article Q239436 for more information about LNK2001 and member templates.  
  
-   Mismatched case in your code or module-definition (.def) file can cause LNK2001. For example, if you named a variable `var1` in one C++ source file and tried to access it as `VAR1` in another.  
  
-   A project that uses [function inlining](../../error-messages/tool-errors/function-inlining-problems.md) yet defines the functions in a .cpp file rather than in the header file can cause LNK2001.  
  
-   Calling a C function from a C++ program without using `extern` "C" (which causes the compiler to use the C naming convention) can cause LNK2001. Compiler options [/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) and [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) cause the compiler to compile files as C++ or C, respectively, regardless of the filename extension. These options can cause function names different from what you expect.  
  
-   Attempting to reference functions or data that don't have external linkage can cause LNK2001. In C++, inline functions and `const` data have internal linkage unless explicitly specified as `extern`.  
  
-   A [missing function body or variable](../../error-messages/tool-errors/missing-function-body-or-variable.md) can cause LNK2001. With just a function prototype or `extern` declaration the compiler can continue without error, but the linker cannot resolve a call to an address or reference to a variable because there is no function code or variable space reserved.  
  
-   Calling a function with parameter types that do not match those in the function declaration can cause LNK2001. [Name decoration](../../error-messages/tool-errors/name-decoration.md) incorporates the parameters of a function into the final decorated function name.  
  
-   Incorrectly included prototypes, which cause the compiler to expect a function body that is not provided can cause LNK2001. If you have both a class and non-class implementation of a function `F`, beware of C++ scope-resolution rules.  
  
-   When using C++, including a function prototype in a class definition and failing to [include the implementation](../../error-messages/tool-errors/missing-function-body-or-variable.md) of the function for that class can cause LNK2001.  
  
-   Attempting to call a pure virtual function from the constructor or destructor of an abstract base class can cause LNK2001. A pure virtual function has no base class implementation.  
  
-   Trying to use a variable declared within a function ([a local variable](../../error-messages/tool-errors/automatic-function-scope-variables.md)) outside the scope of that function can cause LNK2001.  
  
-   When building a Release version of an ATL project, indicates that CRT startup code is required. To fix, do one of the following,  
  
    -   Remove `_ATL_MIN_CRT` from the list of preprocessor defines to allow CRT startup code to be included. See [General Configuration Settings Property Page](../../ide/general-property-page-project.md) for more information.  
  
    -   If possible, remove calls to CRT functions that require CRT startup code. Instead, use their Win32 equivalents. For example, use `lstrcmp` instead of `strcmp`. Known functions that require CRT startup code are some of the string and floating point functions.  
  
 **Compiling and Linking Problems**  
  
-   The project is missing a reference to a library (.LIB) or object (.OBJ) file. See [.lib Files as Linker Input](../../build/reference/dot-lib-files-as-linker-input.md) for more information.  
  
-   If you use [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) or [/Zl](../../build/reference/zl-omit-default-library-name.md), libraries containing required code will not be linked into the project unless you have explicitly included them. (When compiling with **/clr** or **/clr:pure**, you will see a reference to .cctor; see [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md) for more information.)  
  
-   If you are using Unicode and MFC, you will get an unresolved external on `_WinMain@16` if you don't create an entrypoint to `wWinMainCRTStartup`; use the [/ENTRY](../../build/reference/entry-entry-point-symbol.md). See [Unicode Programming Summary](../../text/unicode-programming-summary.md).  
  
     See the following Knowledge Base articles, located in the MSDN Library, for more information. In the MSDN Library, click the **Search** tab, paste the article number or article title into the text box, and then click **List Topics**. If you search on the article number, make sure the **Search titles only** option is clear.  
  
    -   Q125750   "PRB: Error LNK2001: '_WinMain@16': Unresolved External Symbol"  
  
    -   Q131204   "PRB: Wrong Project Selection Causes LNK2001 on _WinMain@16"  
  
    -   Q100639   "Unicode Support in the Microsoft Foundation Class Library"  
  
    -   Q291952    "PRB: Link Error LNK2001: Unresolved External Symbol _main"  
  
-   Linking code compiled with /MT with the library LIBC.lib causes LNK2001 on `_beginthread`, `_beginthreadex`, `_endthread`, and `_endthreadex`.  
  
-   Linking code requiring the multithreaded libraries (any MFC code or code compiled with [/MT](../../build/reference/md-mt-ld-use-run-time-library.md)) causes LNK2001 on [_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md), `_beginthreadex`, [_endthread](../../c-runtime-library/reference/endthread-endthreadex.md), and `_endthreadex`. See the following Knowledge Base article for more information:  
  
    -   Q126646 "PRB: Error Msg: LNK2001 on __beginthreadex and \__endthreadex"  
  
    -   Q128641 "INFO: /Mx Compiler Options and the LIBC, LIBCMT, MSVCRT Libs"  
  
    -   Q166504 "PRB: MFC and CRT Must Match in debug/release and static/dynamic"  
  
-   When compiling with **/MD**, a reference to "func" in your source becomes a reference "`__imp__func`" in the object since all the run-time is now held within a DLL. If you try to link with the static libraries LIBC.lib or LIBCMT.lib, you will get LNK2001 on `__imp__func`. If you try to link with MSVCxx.lib when compiling without /MD you will not always get LNK2001, but you will likely have other problems.  
  
-   Linking with the release mode libraries when building a debug version of an application can cause LNK2001. Similarly, using an **/Mxd** option (**/MTd**, or **/MDd**) and/or defining `_DEBUG` and then linking with the release libraries will give you potential unresolved externals (among other problems). Linking a release mode build with the debug libraries will also cause similar problems.  
  
-   Mixing versions of Microsoft libraries and compiler products can be problematic. A new compiler version's libraries may contain new symbols that cannot be found in the libraries included with previous versions. You may want to change the order of the directories in the search path, or changing them to point to the current version.  
  
     The Tools &#124; Options &#124; Projects &#124; VC++ Directories dialog, under the Library files selection, allows you to change the search order. The Linker folder in the project's Property Pages dialog box may also contain paths that could be out of date.  
  
     This problem may appear when a new SDK is installed (perhaps to a different location), and the search order is not updated to point to the new location. Normally, you should put the path to new SDKs' include and lib directories in front of the default Visual C++ location. Also, a project containing embedded paths may still point to old paths that are valid, but out of date for new functionality added by the new version that is installed to a different location.  
  
-   There is currently no standard for [C++ naming](../../error-messages/tool-errors/name-decoration.md) between compiler vendors or even between different versions of a compiler. Therefore, linking object files compiled with other compilers may not produce the same naming scheme and thus cause error LNK2001.  
  
-   [Mixing inline and non-inline compile options](../../error-messages/tool-errors/function-inlining-problems.md) on different modules can cause LNK2001. If a C++ library is created with function inlining turned on (**/Ob1** or **/Ob2**) but the corresponding header file describing the functions has inlining turned off (no `inline` keyword), you will get this error. To prevent this problem, have the inline functions defined with `inline` in the header file you are going to include in other files.  
  
-   If you are using the `#pragma inline_depth` compiler directive, make sure you have a [value of 2 or greater set](../../error-messages/tool-errors/function-inlining-problems.md), and make sure you are using the [/Ob1](../../build/reference/ob-inline-function-expansion.md) or [/Ob2](../../build/reference/ob-inline-function-expansion.md) compiler option.  
  
-   Omitting the LINK option /NOENTRY when creating a resource-only DLL will cause LNK2001.  
  
-   Using incorrect /SUBSYSTEM or /ENTRY settings can cause LNK2001. For example, if you write a character-based application (a console application) and specify /SUBSYSTEM:WINDOWS, you will get an unresolved external for `WinMain`. For more information on these options and entry points, see the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) and [/ENTRY](../../build/reference/entry-entry-point-symbol.md) linker options.  
  
 **Export Problems**  
  
-   When you are porting an application from 16 to 32 or 64 bits, LNK2001 can occur. The current module-definition (.def) file syntax requires that `__cdecl`, `__stdcall`, and `__fastcall` functions be listed in the EXPORTS section without underscores (undecorated). This differs from the 16-bit syntax, where they must be listed with underscores (decorated). For more information, see the description of the [EXPORTS](../../build/reference/exports.md) section of module-definition files.  
  
-   Any export listed in the .def file and not found will cause LNK2001. This could be because it does not exist, is spelled incorrectly, or uses C++ decorated names (.def files do not take decorated names)  
  
 **Interpreting the Output**  
  
 When a symbol is unresolved, you can get information about the function by the following guidelines:  
  
 On x86 platforms, the calling convention decoration for names compiled in C, or for extern "C" names in C++, is:  
  
 `__cdecl`  
 Function has an underscore (_) prefix.  
  
 `__stdcall`  
 Function has an underscore (_) prefix and an @ suffix followed by the dword aligned size of parameters on the stack.  
  
 `__fastcall`  
 Function has an @ prefix and an @ suffix followed by the dword aligned size of parameters on the stack.  
  
 Use undname.exe to get the undecorated form of a decorated name.  
  
 For more information on some of the causes listed above, see [Name decoration](../../error-messages/tool-errors/name-decoration.md).