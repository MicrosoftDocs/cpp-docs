---
title: "C runtime (CRT) and C++ standard library (STL) lib files"
description: "List of Microsoft C runtime and C++ standard library (STL) lib files that you can link against and their associated compiler options and preprocessor directives."
ms.date: "3/5/2021"
ms.topic: "reference"
ms.custom: contperf-fy21q3
helpviewer_keywords: ["MSVCR71.dll", "libraries [C++], multithreaded", "library files, run-time", "LIBCMT.lib", "LIBCP.lib", "LIBCPMT.lib", "run-time libraries, C", "CRT, release versions", "MSVCP71.dll", "LIBC.lib", "libraries [C++]", "libraries [C++], run-time", "linking [C++], libraries", "STL libraries", "Microsoft standard template libraries"]
---
# C runtime (CRT) and C++ standard library (STL) `.lib` files

This article lists the Microsoft C runtime library `.lib` files that you can link against when you develop your application, and their associated compiler options and preprocessor directives.

See [Redistributing Visual C++ files](../windows/redistributing-visual-cpp-files.md) if you're looking for information about deploying the C runtime files necessary to support your application.

See [C runtime library reference](./c-run-time-library-reference.md) if you're looking for API reference for the C runtime library.

>[!NOTE]
> Microsoft's implementation of the C++ standard library is often referred to as the *STL* or *Standard Template Library*. Although *C++ standard library* is the official name of the library as defined in ISO 14882, due to the popular use of "STL" and "Standard Template Library" in search engines, we occasionally use those names to make it easier to find our documentation.

From a historical perspective, "STL" originally referred to the Standard Template Library written by Alexander Stepanov. Parts of that library were standardized in the C++ standard library. The standard library also incorporates the ISO C runtime library, parts of the Boost library, and other functionality. Sometimes "STL" is used to refer to the containers and algorithms parts of the C++ standard library adapted from Stepanov's STL. In this documentation, Standard Template Library (STL) refers to the C++ standard library as a whole.

## C runtime `.lib` files

The ISO C standard library is part of the C++ standard library. The Visual C++ libraries that implement the CRT support native code development, and both mixed native and managed code. All versions of the CRT support multi-threaded development. Most of the libraries support both static linking, to link the library directly into your code, or dynamic linking to let your code use common DLL files.

In Visual Studio 2015, the CRT was refactored into new binaries. The Universal CRT (UCRT) contains the functions and globals exported by the standard C99 CRT library. The UCRT is now a Windows component, and ships as part of Windows 10 and later versions. The static library, DLL import library, and header files for the UCRT are now found in the Windows SDK. When you install Visual C++, Visual Studio setup installs the subset of the Windows SDK required to use the UCRT. You can use the UCRT on any version of Windows supported by Visual Studio 2015 and later versions. You can redistribute it using vcredist for supported versions of Windows other than Windows 10 or later. For more information, see [Redistributing Visual C++ Files](../windows/redistributing-visual-cpp-files.md).

The following table lists the libraries that implement the UCRT.

| Library | Associated DLL | Characteristics | Option | Preprocessor directives |
|--|--|--|--|--|
| *`libucrt.lib`* | None | Statically links the UCRT into your code. | **`/MT`** | `_MT` |
| *`libucrtd.lib`* | None | Debug version of the UCRT for static linking. Not redistributable. | **`/MTd`** | `_DEBUG`, `_MT` |
| *`ucrt.lib`* | *`ucrtbase.dll`* | DLL import library for the UCRT. | **`/MD`** | `_MT`, `_DLL` |
| *`ucrtd.lib`* | *`ucrtbased.dll`* | DLL import library for the Debug version of the UCRT. Not redistributable. | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |

The vcruntime library contains Visual C++ CRT implementation-specific code: exception handling and debugging support, runtime checks and type information, implementation details, and certain extended library functions. The vcruntime library version needs to match the version of the compiler you're using.

This table lists the libraries that implement the vcruntime library.

| Library | Associated DLL | Characteristics | Option | Preprocessor directives |
|--|--|--|--|--|
| *`libvcruntime.lib`* | None | Statically linked into your code. | **`/MT`** | `_MT` |
| *`libvcruntimed.lib`* | None | Debug version for static linking. Not redistributable. | **`/MTd`** | `_MT`, `_DEBUG` |
| *`vcruntime.lib`* | *`vcruntime<version>.dll`* | DLL import library for the vcruntime. | **`/MD`** | `_MT`, `_DLL` |
| *`vcruntimed.lib`* | *`vcruntime<version>d.dll`* | DLL import library for the Debug vcruntime. Not redistributable. | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |

> [!NOTE]
> When the UCRT was refactored, the Concurrency Runtime functions were moved into
*`concrt140.dll`*, which was added to the C++ redistributable package. This DLL is required for C++ parallel containers and algorithms such as `concurrency::parallel_for`. In addition, the C++ standard library requires this DLL on Windows XP to support synchronization primitives, because Windows XP doesn't have condition variables.

The code that initializes the CRT is in one of several libraries, based on whether the CRT library is statically or dynamically linked, or native, managed, or mixed code. This code handles CRT startup, internal per-thread data initialization, and termination. It's specific to the version of the compiler used. This library is always statically linked, even when using a dynamically linked UCRT.

This table lists the libraries that implement CRT initialization and termination.

| Library | Characteristics | Option | Preprocessor directives |
|--|--|--|--|
| *`libcmt.lib`* | Statically links the native CRT startup into your code. | **`/MT`** | `_MT` |
| *`libcmtd.lib`* | Statically links the Debug version of the native CRT startup. Not redistributable. | **`/MTd`** | `_DEBUG`, `_MT` |
| *`msvcrt.lib`* | Static library for the native CRT startup for use with DLL UCRT and vcruntime. | **`/MD`** | `_MT`, `_DLL` |
| *`msvcrtd.lib`* | Static library for the Debug version of the native CRT startup for use with DLL UCRT and vcruntime. Not redistributable. | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |
| *`msvcmrt.lib`* | Static library for the mixed native and managed CRT startup for use with DLL UCRT and vcruntime. | **`/clr`** |  |
| *`msvcmrtd.lib`* | Static library for the Debug version of the mixed native and managed CRT startup for use with DLL UCRT and vcruntime. Not redistributable. | **`/clr`** |  |
| *`msvcurt.lib`* | **Deprecated** Static library for the pure managed CRT. | **`/clr:pure`** |  |
| *`msvcurtd.lib`* | **Deprecated** Static library for the Debug version of the pure managed CRT. Not redistributable. | **`/clr:pure`** |  |

If you link your program from the command line without a compiler option that specifies a C runtime library, the linker will use the statically linked CRT libraries: *`libcmt.lib`*, *`libvcruntime.lib`*, and *`libucrt.lib`*.

Using the statically linked CRT implies that any state information saved by the C runtime library will be local to that instance of the CRT. For example, if you use [`strtok`](./reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) when using a statically linked CRT, the position of the `strtok` parser is unrelated to the `strtok` state used in code in the same process (but in a different DLL or EXE) that is linked to another instance of the static CRT. In contrast, the dynamically linked CRT shares state for all code within a process that is dynamically linked to the CRT. This concern doesn't apply if you use the new more secure versions of these functions; for example, `strtok_s` doesn't have this problem.

Because a DLL built by linking to a static CRT has its own CRT state, we don't recommend you link statically to the CRT in a DLL unless the consequences are understood and desired. For example, if you call [`_set_se_translator`](./reference/set-se-translator.md) in an executable that loads the DLL linked to its own static CRT, any hardware exceptions generated by the code in the DLL won't be caught by the translator, but hardware exceptions generated by code in the main executable will be caught.

If you're using the **`/clr`** compiler switch, your code will be linked with a static library, `msvcmrt.lib`. The static library provides a proxy between your managed code and the native CRT. You can't use the statically linked CRT ( **`/MT`** or **`/MTd`** options) with **`/clr`**. Use the dynamically linked libraries (**`/MD`** or **`/MDd`**) instead. The pure managed CRT libraries are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

For more information on using the CRT with **`/clr`**, see [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md).

To build a debug version of your application, the [`_DEBUG`](./debug.md) flag must be defined and the application must be linked with a debug version of one of these libraries. For more information about using the debug versions of the library files, see [CRT debugging techniques](./crt-debugging-techniques.md).

This version of the CRT isn't fully conformant with the C99 standard. In versions before Visual Studio 2019 version 16.8, the `<tgmath.h>` header isn't supported. In all versions, the `CX_LIMITED_RANGE` and `FP_CONTRACT` pragma macros aren't supported. Certain elements such as the meaning of parameter specifiers in standard IO functions use legacy interpretations by default. You can use **`/Zc`** compiler conformance options and specify linker options to control some aspects of library conformance.

## C++ standard library (STL) `.lib` files

| C++ standard library | Characteristics | Option | Preprocessor directives |
|--|--|--|--|
| *`libcpmt.lib`* | Multithreaded, static link | **`/MT`** | `_MT` |
| *`msvcprt.lib`* | Multithreaded, dynamic link (import library for *`msvcp<version>.dll`*) | **`/MD`** | `_MT`, `_DLL` |
| *`libcpmtd.lib`* | Multithreaded, static link | **`/MTd`** | `_DEBUG`, `_MT` |
| *`msvcprtd.lib`* | Multithreaded, dynamic link (import library for *`msvcp<version>d.dll`*) | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |

When you build a release version of your project, one of the basic C runtime libraries (*`libcmt.lib`*, *`msvcmrt.lib`*, *`msvcrt.lib`*) is linked by default, depending on the compiler option you choose (multithreaded, DLL, **`/clr`**). If you include one of the [C++ standard library header files](../standard-library/cpp-standard-library-header-files.md) in your code, a C++ standard library will be linked automatically by Visual C++ at compile time. For example:

```cpp
#include <ios>
```

For binary compatibility, more than one DLL file may be specified by a single import library. Version updates may introduce *dot libraries*, separate DLLs that introduce new library functionality. For example, Visual Studio 2017 version 15.6 introduced *`msvcp140_1.dll`* to support more standard library functionality without breaking the Application Binary Interface (ABI) supported by *`msvcp140.dll`*. The *`msvcprt.lib`* import library included in the toolset for Visual Studio 2017 version 15.6 supports both DLLs, and the vcredist for this version installs both DLLs. Once shipped, a dot library has a fixed ABI, and will never have a dependency on a later dot library.

## What problems exist if an application uses more than one CRT version?

Every executable image (EXE or DLL) can have its own statically linked CRT, or can dynamically link to a CRT. The version of the CRT statically included in or dynamically loaded by a particular image depends on the version of the tools and libraries it was built with. A single process may load multiple EXE and DLL images, each with its own CRT. Each of those CRTs may use a different allocator, may have different internal structure layouts, and may use different storage arrangements. It means allocated memory, CRT resources, or classes passed across a DLL boundary can cause problems in memory management, internal static usage, or layout interpretation. For example, if a class is allocated in one DLL but passed to and deleted by another, which CRT deallocator is used? The errors caused can range from the subtle to the immediately fatal, and therefore direct transfer of such resources is discouraged.

You can avoid many of these issues by using Application Binary Interface (ABI) technologies instead, as they're designed to be stable and versionable. Design your DLL export interfaces to pass information by value, or to work on memory that is passed in by the caller rather than allocated locally and returned to the caller. Use marshaling techniques to copy structured data between executable images. Encapsulate resources locally and only allow manipulation through handles or functions you expose to clients.

It's also possible to avoid some of these issues if all of the images in your process use the same dynamically loaded version of the CRT. To ensure that all components use the same DLL version of the CRT, build them by using the **`/MD`** option, and use the same compiler toolset and property settings.

Be careful if your program passes certain CRT resources across DLL boundaries. Resources such as file handles, locales, and environment variables can cause problems, even when using the same version of the CRT. For more information on the issues involved and how to resolve them, see [Potential errors passing CRT objects across DLL boundaries](./potential-errors-passing-crt-objects-across-dll-boundaries.md).

## See also

[C runtime library reference](./c-run-time-library-reference.md)\
[Redistributing Visual C++ Files](../windows/redistributing-visual-cpp-files.md)
