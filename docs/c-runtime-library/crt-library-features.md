---
title: "CRT Library Features | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.runtime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "MSVCR71.dll"
  - "libraries [C++], multithreaded"
  - "library files, run-time"
  - "LIBCMT.lib"
  - "LIBCP.lib"
  - "LIBCPMT.lib"
  - "run-time libraries, C"
  - "CRT, release versions"
  - "MSVCP71.dll"
  - "LIBC.lib"
  - "libraries [C++]"
  - "libraries [C++], run-time"
  - "linking [C++], libraries"
ms.assetid: a889fd39-807d-48f2-807f-81492612463f
caps.latest.revision: 32
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
# CRT Library Features
This topic discusses the various .lib files that comprise the C run-time libraries as well as their associated compiler options and preprocessor directives.  
  
## C Run-Time Libraries (CRT)  
 The C Run-time Library (CRT) is the part of the C++ Standard Library that incorporates the ISO C99 standard library. The Visual C++ libraries that implement the CRT support native code development, and both mixed native and managed code, and pure managed code for .NET development. All versions of the CRT support multi-threaded development. Most of the libraries support both static linking, to link the library directly into your code, or dynamic linking to let your code use common DLL files.  
  
 In Visual Studio 2015, the CRT has been refactored into new binaries. The Universal CRT (UCRT) contains the functions and globals exported by the standard C99 CRT library. The UCRT is now a Windows component, and ships as part of Windows 10. The static library, DLL import library, and header files for the UCRT are now found in the Windows 10 SDK. When you install Visual C++, Visual Studio setup installs the subset of the Windows 10 SDK required to use the UCRT. You can use the UCRT on any version of Windows supported by Visual Studio 2015. You can redistribute it using vcredist for supported versions of Windows other than Windows 10. For more information, see [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md).  
  
 The following table lists the libraries that implement the UCRT.  
  
|Library|Associated DLL|Characteristics|Option|Preprocessor directives|  
|-------------|--------------------|---------------------|------------|-----------------------------|  
|libucrt.lib|None|Statically links the UCRT into your code.|**/MT**|_MT|  
|libucrtd.lib|None|Debug version of the UCRT for static linking. Not redistributable.|**/MTd**|_DEBUG, _MT|  
|ucrt.lib|ucrtbase.dll|DLL import library for the UCRT.|**/MD**|_MT, _DLL|  
|ucrtd.lib|ucrtbased.dll|DLL import library for the Debug version of the UCRT. Not redistributable.|**/MDd**|_DEBUG, _MT, _DLL|  
  
 The vcruntime library contains Visual C++ CRT implementation-specific code, such as exception handling and debugging support, runtime checks and type information, implementation details and certain extended library functions. This library is specific to the version of the compiler used.  
  
 This table lists the libraries that implement the vcruntime library.  
  
|Library|Associated DLL|Characteristics|Option|Preprocessor directives|  
|-------------|--------------------|---------------------|------------|-----------------------------|  
|libvcruntime.lib|None|Statically linked into your code.|**/MT**|_MT|  
|libvcruntimed.lib|None|Debug version for static linking. Not redistributable.|**/MTd**|_MT, _DEBUG|  
|vcruntime.lib|vcruntime\<version>.dll|DLL import library for the vcruntime.|**/MD**|_MT, _DLL|  
|vcruntimed.lib|vcruntime\<version>d.dll|DLL import library for the Debug vcruntime. Not redistributable.|**/MDd**|_DEBUG, _MT, _DLL|  
  
 The code that initializes the CRT is in one of several libraries, based on whether the CRT library is statically or dynamically linked, or native, managed, or mixed code. This code handles CRT startup, internal per-thread data initialization, and termination. It is specific to the version of the compiler used. This library is always statically linked, even when using a dynamically linked UCRT.  
  
 This table lists the libraries that implement CRT initialization and termination.  
  
|Library|Characteristics|Option|Preprocessor directives|  
|-------------|---------------------|------------|-----------------------------|  
|libcmt.lib|Statically links the native CRT startup into your code.|**/MT**|_MT|  
|libcmtd.lib|Statically links the Debug version of the native CRT startup. Not redistributable.|**/MTd**|_DEBUG, _MT|  
|msvcrt.lib|Static library for the native CRT startup for use with DLL UCRT and vcruntime.|**/MD**|_MT, _DLL|  
|msvcrtd.lib|Static library for the Debug version of the native CRT startup for use with DLL UCRT and vcruntime. Not redistributable.|**/MDd**|_DEBUG, _MT, _DLL|  
|msvcmrt.lib|Static library for the mixed native and managed CRT startup for use with DLL UCRT and vcruntime.|**/clr**||  
|msvcmrtd.lib|Static library for the Debug version of the mixed native and managed CRT startup for use with DLL UCRT and vcruntime. Not redistributable.|**/clr**||  
|msvcurt.lib|Static library for the pure managed CRT.|**/clr:pure**||  
|msvcurtd.lib|Static library for the Debug version of the pure managed CRT. Not redistributable.|**/clr:pure**||  
  
 If you link your program from the command line without a compiler option that specifies a C run-time library, the linker will usethe statically linked CRT libraries: libcmt.lib, libvcruntime.lib, and libucrt.lib.  
  
 Using the statically linked CRT implies that any state information saved by the C runtime library will be local to that instance of the CRT. For example, if you use [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) when using a statically linked CRT, the position of the `strtok` parser is unrelated to the `strtok` state used in code in the same process (but in a different DLL or EXE) that is linked to another instance of the static CRT. In contrast, the dynamically linked CRT shares state for all code within a process that is dynamically linked to the CRT. This concern does not apply if you use the new more secure versions of these functions; for example, `strtok_s` does not have this problem.  
  
 Because a DLL built by linking to a static CRT will have its own CRT state, it is not recommended to link statically to the CRT in a DLL unless the consequences of this are specifically desired and understood. For example, if you call [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) in an executable that loads the DLL linked to its own static CRT, any hardware exceptions generated by the code in the DLL will not be caught by the translator, but hardware exceptions generated by code in the main executable will be caught.  
  
 If you are using the **/clr** compiler switch, your code will be linked with a static library, msvcmrt.lib. The static library provides a proxy between your managed code and the native CRT. You cannot use the statically linked CRT ( **/MT** or **/MTd** options) with **/clr**. Use the dynamically-linked libraries (**/MD** or **/MDd**) instead.  
  
 If you are using the **/clr:pure** compiler switch, your code will be linked with the static library msvcurt.lib. As with **/clr**, you cannot link with the statically linked library.  
  
 For more information on using the CRT with **/clr**, see [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md); for **/clr:pure**, see [Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 To build a debug version of your application, the [_DEBUG](../c-runtime-library/debug.md) flag must be defined and the application must be linked with a debug version of one of these libraries. For more information about using the debug versions of the library files, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).  
  
 This version of the CRT is not fully conformant with the C99 standard. In particular, the \<tgmath.h> header and the CX_LIMITED_RANGE/FP_CONTRACT pragma macros are not supported. Certain elements such as the meaning of parameter specifiers in standard IO functions use legacy interpretations by default. You can use /Zc compiler conformance options and specify linker options to control some aspects of library conformance,  
  
## Standard C++ Library  
  
|Standard C++ Library|Characteristics|Option|Preprocessor directives|  
|----------------------------|---------------------|------------|-----------------------------|  
|LIBCPMT.LIB|Multithreaded, static link|**/MT**|_MT|  
|MSVCPRT.LIB|Multithreaded, dynamic link (import library for MSVCP\<version>.dll)|**/MD**|_MT, _DLL|  
|LIBCPMTD.LIB|Multithreaded, static link|**/MTd**|_DEBUG, _MT|  
|MSVCPRTD.LIB|Multithreaded, dynamic link (import library for MSVCP\<version>D.DLL)|**/MDd**|_DEBUG, _MT, _DLL|  
  
 When you build a release version of your project, one of the basic C run-time libraries (LIBCMT.LIB, MSVCMRT.LIB, MSVCRT.LIB) is linked by default, depending on the compiler option you choose (multithreaded, DLL, /clr). If you include one of the [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) in your code, a Standard C++ Library will be linked in automatically by [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] at compile time. For example:  
  
```  
#include <ios>   
```  
  
## What problems exist if an application uses more than one CRT version?  
 If you have more than one DLL or EXE, then you may have more than one CRT, whether or not you are using different versions of [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)]. For example, statically linking the CRT into multiple DLLs can present the same problem. Developers encountering this problem with static CRTs have been instructed to compile with **/MD** to use the CRT DLL. If your DLLs pass CRT resources across the DLL boundary, you may encounter issues with mismatched CRTs and need to recompile your project with Visual C++.  
  
 If your program is using more than one version of the CRT, some care is needed when passing certain CRT objects (such as file handles, locales and environment variables) across DLL boundaries. For more information on the issues involved and how to resolve them, see [Potential Errors Passing CRT Objects Across DLL Boundaries](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).  
  
## See Also  
 [C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md)