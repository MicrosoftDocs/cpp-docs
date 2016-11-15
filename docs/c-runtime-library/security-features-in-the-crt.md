---
title: "Security Features in the CRT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_CRT_SECURE_NO_DEPRECATE"
  - "_CRT_NONSTDC_NO_WARNINGS"
  - "_CRT_SECURE_NO_WARNINGS"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "security deprecation warnings [C++]"
  - "CRT_NONSTDC_NO_DEPRECATE"
  - "buffers [C++], buffer overruns"
  - "deprecation warnings (security-related), disabling"
  - "_CRT_NONSTDC_NO_WARNINGS"
  - "security [CRT]"
  - "_CRT_SECURE_NO_WARNINGS"
  - "_CRT_NONSTDC_NO_DEPRECATE"
  - "_CRT_SECURE_NO_DEPRECATE"
  - "security-enhanced CRT"
  - "CRT_SECURE_NO_WARNINGS"
  - "CRT_SECURE_NO_DEPRECATE"
  - "deprecation warnings (security-related)"
  - "buffer overruns"
  - "CRT_NONSTDC_NO_WARNINGS"
  - "CRT, security enhancements"
  - "parameters [C++], validation"
ms.assetid: d9568b08-9514-49cd-b3dc-2454ded195a3
caps.latest.revision: 23
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
# Security Features in the CRT
Many old CRT functions have newer, more secure versions. If a secure function exists, the older, less secure version is marked as deprecated and the new version has the `_s` ("secure") suffix.  
  
 In this context, "deprecated" just means that a function's use is not recommended; it does not indicate that the function is scheduled to be removed from the CRT.  
  
 The secure functions do not prevent or correct security errors; rather, they catch errors when they occur. They perform additional checks for error conditions, and in the case of an error, they invoke an error handler (see [Parameter Validation](../c-runtime-library/parameter-validation.md)).  
  
 For example, the `strcpy` function has no way of telling if the string that it is copying is too big for its destination buffer. However, its secure counterpart, `strcpy_s`, takes the size of the buffer as a parameter, so it can determine if a buffer overrun will occur. If you use `strcpy_s` to copy eleven characters into a ten-character buffer, that is an error on your part; `strcpy_s` cannot correct your mistake, but it can detect your error and inform you by invoking the invalid parameter handler.  
  
## Eliminating deprecation warnings  
 There are several ways to eliminate deprecation warnings for the older, less secure functions. The simplest is simply to define `_CRT_SECURE_NO_WARNINGS` or use the [warning](../preprocessor/warning.md) pragma. Either will disable deprecation warnings, but of course the security issues that caused the warnings still exist. It is far better to leave deprecation warnings enabled and take advantage of the new CRT security features.  
  
 In C++, the easiest way to do that is to use [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md), which in many cases will eliminate deprecation warnings by replacing calls to deprecated functions with calls to the new secure versions of those functions. For example, consider this deprecated call to `strcpy`:  
  
```  
char szBuf[10];   
strcpy(szBuf, "test"); // warning: deprecated   
```  
  
 Defining `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` as 1 eliminates the warning by changing the `strcpy` call to `strcpy_s`, which prevents buffer overruns. For more information, see [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md).  
  
 For those deprecated functions without secure template overloads, you should definitely consider manually updating your code to use the secure versions.  
  
 Another source of deprecation warnings, unrelated to security, is the POSIX functions. Replace POSIX function names with their standard equivalents (for example, change [access](../c-runtime-library/reference/access-crt.md) to [_access](../c-runtime-library/reference/access-waccess.md)), or disable POSIX-related deprecation warnings by defining `_CRT_NONSTDC_NO_WARNINGS`. For more information, see [Deprecated CRT Functions](http://msdn.microsoft.com/en-us/7e259932-c6c8-4c1a-9637-639e591681a5).  
  
## Additional Security Features  
 Some of the security features include the following:  
  
-   `Parameter Validation`. Parameters passed to CRT functions are validated, in both secure functions and in many preexisting versions of functions. These validations include:  
  
    -   Checking for `NULL` values passed to the functions.  
  
    -   Checking enumerated values for validity.  
  
    -   Checking that integral values are in valid ranges.  
  
-   For more information, see [Parameter Validation](../c-runtime-library/parameter-validation.md).  
  
-   A handler for invalid parameters is also accessible to the developer. When an encountering an invalid parameter, instead of asserting and exiting the application, the CRT provides a way to check these problems with the [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) function.  
  
-   `Sized Buffers`. The secure functions require that the buffer size be passed to any function that writes to a buffer. The secure versions validate that the buffer is large enough before writing to it, helping to avoid dangerous buffer overrun errors that could allow malicious code to execute. These functions usually return an `errno` type of error code and invoke the invalid parameter handler if the size of the buffer is too small. Functions that read from input buffers, such as `gets`, have secure versions that require you to specify a maximum size.  
  
-   `Null termination`. Some functions that left potentially non-terminated strings have secure versions which ensure that strings are properly null terminated.  
  
-   `Enhanced error reporting`. The secure functions return error codes with more error information than was available with the preexisting functions. The secure functions and many of the preexisting functions now set `errno` and often return an `errno` code type as well, to provide better error reporting.  
  
-   `Filesystem security`. Secure file I/O APIs support secure file access in the default case.  
  
-   `Windows security`. Secure process APIs enforce security policies and allow ACLs to be specified.  
  
-   `Format string syntax checking`. Invalid strings are detected, for example, using incorrect type field characters in `printf` format strings.  
  
## See Also  
 [Parameter Validation](../c-runtime-library/parameter-validation.md)   
 [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md)   
 [CRT Library Features](../c-runtime-library/crt-library-features.md)