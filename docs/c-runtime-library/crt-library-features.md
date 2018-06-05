---
title: "CRT Library Features | Microsoft Docs"
ms.custom: ""
ms.date: "03/13/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.runtime"]
dev_langs: ["C++"]
helpviewer_keywords: ["MSVCR71.dll", "libraries [C++], multithreaded", "library files, run-time", "LIBCMT.lib", "LIBCP.lib", "LIBCPMT.lib", "run-time libraries, C", "CRT, release versions", "MSVCP71.dll", "LIBC.lib", "libraries [C++]", "libraries [C++], run-time", "linking [C++], libraries"]
ms.assetid: a889fd39-807d-48f2-807f-81492612463f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# CRT Library Features

This topic discusses the various .lib files that comprise the C run-time libraries as well as their associated compiler options and preprocessor directives.

## C Run-Time Libraries (CRT)

The C Run-time Library (CRT) is the part of the C++ Standard Library that incorporates the ISO C99 standard library. The Visual C++ libraries that implement the CRT support native code development, and both mixed native and managed code. All versions of the CRT support multi-threaded development. Most of the libraries support both static linking, to link the library directly into your code, or dynamic linking to let your code use common DLL files.

Starting in Visual Studio 2015, the CRT has been refactored into new binaries. The Universal CRT (UCRT) contains the functions and globals exported by the standard C99 CRT library. The UCRT is now a Windows component, and ships as part of Windows 10. The static library, DLL import library, and header files for the UCRT are now found in the Windows 10 SDK. When you install Visual C++, Visual Studio setup installs the subset of the Windows 10 SDK required to use the UCRT. You can use the UCRT on any version of Windows supported by Visual Studio 2015 and later versions. You can redistribute it using vcredist for supported versions of Windows other than Windows 10. For more information, see [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md).

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
|msvcurt.lib|**Deprecated** Static library for the pure managed CRT.|**/clr:pure**||
|msvcurtd.lib|**Deprecated** Static library for the Debug version of the pure managed CRT. Not redistributable.|**/clr:pure**||

If you link your program from the command line without a compiler option that specifies a C run-time library, the linker will use the statically linked CRT libraries: libcmt.lib, libvcruntime.lib, and libucrt.lib.

Using the statically linked CRT implies that any state information saved by the C runtime library will be local to that instance of the CRT. For example, if you use [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) when using a statically linked CRT, the position of the `strtok` parser is unrelated to the `strtok` state used in code in the same process (but in a different DLL or EXE) that is linked to another instance of the static CRT. In contrast, the dynamically linked CRT shares state for all code within a process that is dynamically linked to the CRT. This concern does not apply if you use the new more secure versions of these functions; for example, `strtok_s` does not have this problem.

Because a DLL built by linking to a static CRT will have its own CRT state, it is not recommended to link statically to the CRT in a DLL unless the consequences of this are specifically desired and understood. For example, if you call [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) in an executable that loads the DLL linked to its own static CRT, any hardware exceptions generated by the code in the DLL will not be caught by the translator, but hardware exceptions generated by code in the main executable will be caught.

If you are using the **/clr** compiler switch, your code will be linked with a static library, msvcmrt.lib. The static library provides a proxy between your managed code and the native CRT. You cannot use the statically linked CRT ( **/MT** or **/MTd** options) with **/clr**. Use the dynamically-linked libraries (**/MD** or **/MDd**) instead. The pure managed CRT libraries are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

For more information on using the CRT with **/clr**, see [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md).

To build a debug version of your application, the [_DEBUG](../c-runtime-library/debug.md) flag must be defined and the application must be linked with a debug version of one of these libraries. For more information about using the debug versions of the library files, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).

This version of the CRT is not fully conformant with the C99 standard. In particular, the \<tgmath.h> header and the CX_LIMITED_RANGE/FP_CONTRACT pragma macros are not supported. Certain elements such as the meaning of parameter specifiers in standard IO functions use legacy interpretations by default. You can use /Zc compiler conformance options and specify linker options to control some aspects of library conformance,

## C++ Standard Library

|C++ Standard Library|Characteristics|Option|Preprocessor directives|
|----------------------------|---------------------|------------|-----------------------------|
|libcpmt.lib|Multithreaded, static link|**/MT**|_MT|
|msvcprt.lib|Multithreaded, dynamic link (import library for MSVCP*version*.dll)|**/MD**|_MT, _DLL|
|libcpmtd.lib|Multithreaded, static link|**/MTd**|_DEBUG, _MT|
|msvcprtd.lib|Multithreaded, dynamic link (import library for MSVCP*version*D.DLL)|**/MDd**|_DEBUG, _MT, _DLL|

When you build a release version of your project, one of the basic C run-time libraries (libcmt.lib, msvcmrt.lib, msvcrt.lib) is linked by default, depending on the compiler option you choose (multithreaded, DLL, /clr). If you include one of the [C++ Standard Library header files](../standard-library/cpp-standard-library-header-files.md) in your code, a C++ Standard Library will be linked in automatically by Visual C++ at compile time. For example:

```cpp
#include <ios>
```

For binary compatibility, more than one DLL file may be specified by a single import library. Version updates may introduce *dot libraries*, separate DLLs that introduce new library functionality. For example, Visual Studio 2017 version 15.6 introduced msvcp140_1.dll to support additional standard library functionality without breaking the ABI supported by msvcp140.dll. The msvcprt.lib import library included in the toolset for Visual Studio 2017 version 15.6 supports both DLLs, and the vcredist for this version installs both DLLs. Once shipped, a dot library has a fixed ABI, and will never have a dependency on a later dot library.

## What problems exist if an application uses more than one CRT version?

A process may load multiple CRTs based on how the DLLs and EXEs are built, static CRT, dynamic CRT (DLL) or different versions. Each CRT can use a different allocator and the classes implemented may have a different layout in memory making them incompatable. This means passing allocated memory or classes accross a DLL boundary (via DLL exports) is problematic and strongly discouraged. Application Binary Interface (ABI) technologies should be used instead as they are designed to be stable and versionable.

For example, statically linking the CRT into multiple DLLs or the EXE that pass CRT resources between them produces this problem. If you must do this ensure that all components use the same DLL version of the CRT; compile them all with **/MD** using the same toolset).

If your program is passing certain CRT resources (such as file handles, locales and environment variables) accross DLL boundaires, even with the same version of the CRT, some care is needed. For more information on the issues involved and how to resolve them, see [Potential Errors Passing CRT Objects Across DLL Boundaries](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

## See also

- [C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md)
