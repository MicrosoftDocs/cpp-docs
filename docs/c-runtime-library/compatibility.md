---
title: "Compatibility | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.programs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CRT, compatibility"
  - "compatibility, C run-time libraries"
  - "compatibility"
ms.assetid: 346709cb-edda-4909-9a19-3d253eddb6b7
caps.latest.revision: 18
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
# Compatibility
The Universal C Run-Time Library (UCRT) supports most of the C standard library required for  C++ conformance. It implements the C99 (ISO/IEC 9899:1999)  library, with the exceptions of the type-generic macros defined in \<tgmath.h>, and strict type compatibility in \<complex.h>. The UCRT also implements a large subset of the POSIX.1 (ISO/IEC 9945-1:1996, the POSIX System Application Program Interface) C library, but is not fully conformant to any specific POSIX standard.  In addition, the UCRT implements several Microsoft-specific functions and macros that are not part of a standard.  
  
 Functions specific to the Microsoft implementation of Visual C++ are found in the vcruntime library.  Many of these functions are for internal use and cannot be called by user code. Some are documented for use in debugging and implementation compatibility.  
  
 The C++ standard reserves names that begin with an underscore in the global namespace to the implementation. Because the POSIX functions are in the global namespace, but are not part of the standard C runtime library, the Microsoft-specific implementations of these functions have a leading underscore. For portability, the UCRT also supports the default names, but the Visual C++ compiler issues a deprecation warning when code that uses them is compiled. Only the default POSIX names are deprecated, not the functions. To suppress the warning, define `_CRT_NONSTDC_NO_WARNINGS` before including any headers in code that uses the original POSIX names.  
  
 Certain functions in the standard C library have a history of unsafe usage, because of misused parameters and unchecked buffers. These functions are often the source of security issues in code. Microsoft created a set of safer versions of these functions that verify parameter usage and invoke the invalid parameter handler when an issue is detected at runtime.  By default, the Visual C++ compiler issues a deprecation warning when a function is used that has a safer variant available. When you compile your code as C++ , you can define `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` as 1 to eliminate most warnings. This uses template overloads to call the safer variants while maintaining portable source code. To suppress the warning, define `_CRT_SECURE_NO_WARNINGS` before including any headers in code that uses these functions. For more information, see [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md).  
  
 Except as noted within the documentation for specific functions, the UCRT is compatible with the Windows API.  Certain functions are not supported in Windows 8 Store apps or in Universal Windows apps on Windows 10. These functions are listed in [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx), which enumerates the functions not supported by the [Windows Runtime](http://msdn.microsoft.com/en-us/9a1a18b8-9802-4ec5-b9de-0d2dfdf414e9).  
  
## Related Articles  
  
|Title|Description|  
|-----------|-----------------|  
|[Windows Store Apps, the Windows Runtime, and the C Run-Time](../c-runtime-library/windows-store-apps-the-windows-runtime-and-the-c-run-time.md)|Describes when UCRT routines are not compatible with Universal Windows apps or Windows Store apps.|  
|[ANSI C Compliance](../c-runtime-library/ansi-c-compliance.md)|Describes standard-compliant naming in the UCRT.|  
|[UNIX](../c-runtime-library/unix.md)|Provides guidelines for porting programs to UNIX.|  
|[Windows Platforms (CRT)](../c-runtime-library/windows-platforms-crt.md)|Lists the operating systems that are the CRT supports.|  
|[Backward Compatibility](../c-runtime-library/backward-compatibility.md)|Describes how to map old CRT names to the new ones.|  
|[CRT Library Features](../c-runtime-library/crt-library-features.md)|Provides an overview of the CRT library (.lib) files and the associated compiler options.|