---
title: "Compatibility"
description: "Describes the compatibility of the Microsoft Universal C runtime library (UCRT) with the Standard C library, POSIX, the Safe CRT, and Store apps."
ms.date: 1/19/2022
ms.topic: "conceptual"
helpviewer_keywords: ["CRT, compatibility", "compatibility, C runtime libraries", "compatibility"]
ms.assetid: 346709cb-edda-4909-9a19-3d253eddb6b7
---
# Compatibility

The Universal C Runtime Library (UCRT) supports most of the C standard library required for C++ conformance. It implements the C99 (ISO/IEC 9899:1999) library, with certain exceptions:

- strict type compatibility in \<complex.h>.
- `aligned_alloc`, which will probably not be implemented because the Windows operating system doesn't support aligned allocations. Use the non-standard `_aligned_malloc`, instead.
- `strerrorlen_s`
- atomic support in \<stdatomic.h>
- threading support in \<threads.h>

The UCRT also implements a large subset of the POSIX.1 (ISO/IEC 9945-1:1996, the POSIX System Application Program Interface) C library. However, it's not fully conformant to any specific POSIX standard. The UCRT also implements several Microsoft-specific functions and macros that aren't part of a standard.

Functions specific to the Microsoft implementation of Visual C++ are found in the vcruntime library.  Many of these functions are for internal use and can't be called by user code. Some are documented for use in debugging and implementation compatibility.

The C++ standard reserves names that begin with an underscore in the global namespace to the implementation. Both the POSIX functions and Microsoft-specific runtime library functions are in the global namespace, but aren't part of the standard C runtime library. It's why the preferred Microsoft implementations of these functions have a leading underscore. For portability, the UCRT also supports the default names, but the Microsoft C++ compiler issues a deprecation warning when code that uses them is compiled. Only the default names are deprecated, not the functions themselves. To suppress the warning, define `_CRT_NONSTDC_NO_WARNINGS` before including any headers in code that uses the original POSIX names. Because the C standard doesn't allow non-standard names in header files, by default [`/std:c11`](../build/reference/std-specify-language-standard-version.md) and [`/std:c17`](../build/reference/std-specify-language-standard-version.md) don't expose the default names for POSIX functions, types, and macros. If these names are necessary, define `_CRT_DECLARE_NONSTDC_NAMES` to expose them.

Certain functions in the standard C library have a history of unsafe usage, because of misused parameters and unchecked buffers. These functions are often the source of security issues in code. Microsoft created a set of safer versions of these functions that verify parameter usage. They invoke the invalid parameter handler when an issue is detected at runtime.  By default, the Microsoft C++ compiler issues a deprecation warning when a function is used that has a safer variant available. When you compile your code as C++, you can define `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` as 1 to eliminate most warnings. This macro enables template overloads to call the safer variants while maintaining portable source code. To suppress the warning, define `_CRT_SECURE_NO_WARNINGS` before including any headers in code that uses these functions. For more information, see [Security features in the CRT](./security-features-in-the-crt.md).

Except as noted within the documentation for specific functions, the UCRT is compatible with the Windows API.  Certain functions aren't supported in Windows Store or Universal Windows Platform ([UWP](/uwp)) apps. These functions are listed in [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Related articles

| Title | Description |
|---|---|
| [UWP apps, the Windows Runtime, and the C runtime](./windows-store-apps-the-windows-runtime-and-the-c-run-time.md) | Describes when UCRT routines aren't compatible with Universal Windows apps or Microsoft Store apps. |
| [ANSI C conformance](./ansi-c-compliance.md) | Describes standard-conforming names in the UCRT. |
| [UNIX](./unix.md) | Provides guidelines for porting programs to UNIX. |
| [Windows platforms (CRT)](./windows-platforms-crt.md) | Lists the operating systems that are the CRT supports. |
| [Backward compatibility](./backward-compatibility.md) | Describes how to map old CRT names to the new ones. |
| [C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md) | Provides an overview of the CRT library (.lib) files and the associated compiler options. |
