---
title: "-clr Restrictions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /clr Restrictions
ms.assetid: 385f6462-2c68-46d6-810e-469553ead447
caps.latest.revision: 27
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -clr Restrictions
Note the following restrictions on the use of **/clr**:  
  
-   In a structured exception handler, there are restrictions on using `_alloca` when compiling with **/clr**. For more information, see [_alloca](../VS_visualcpp/_alloca.md).  
  
-   The use of run-time error checks is not valid with **/clr**. For more information, see [Run-Time Error Checks](../Topic/How%20to:%20Use%20Native%20Run-Time%20Checks.md).  
  
-   When **/clr** is used to compile a program that only uses standard C++ syntax, the following guidelines apply to the use of inline assembly:  
  
    -   Inline assembly code that assumes knowledge of the native stack layout, calling conventions outside of the current function, or other low-level information about the computer may fail if that knowledge is applied to the stack frame for a managed function. Functions containing inline assembly code are generated as unmanaged functions, as if they were placed in a separate module that was compiled without **/clr**.  
  
    -   Inline assembly code in functions that pass copy-constructed function parameters is not supported.  
  
-   The [vprintf Functions](../VS_visualcpp/vprintf-Functions.md) cannot be called from a program compiled with **/clr**.  
  
-   The [naked](../VS_visualcpp/naked--C---.md) [__declspec](../VS_visualcpp/__declspec.md) modifier is ignored under /clr.  
  
-   The translator function set by [_set_se_translator](../VS_visualcpp/_set_se_translator.md) will affect only catches in unmanaged code. See [Exception Handling](../VS_visualcpp/Exception-Handling---C---Component-Extensions-.md) for more information.  
  
-   The comparison of function pointers is not permitted under **/clr**.  
  
-   The use of functions that are not fully prototyped is not permitted under **/clr**.  
  
-   The following compiler options are not supported with **/clr**:  
  
    -   **/EHsc** and **/EHs** (**/clr** implies **/EHa** (see [/EH (Exception Handling Model)](../VS_visualcpp/-EH--Exception-Handling-Model-.md))  
  
    -   **/fp:strict** and **/fp:except** (see [/fp (Specify Floating-Point Behavior)](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md))  
  
    -   [/Zd](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md)  
  
    -   [/Gm](../VS_visualcpp/-Gm--Enable-Minimal-Rebuild-.md)  
  
    -   [/MT](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)  
  
    -   [/RTC](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md)  
  
    -   **/ZI**  
  
-   The combination of the `_STATIC_CPPLIB` preprocessor definition (`/D_STATIC_CPPLIB`) and the **/clr** or **/clr:pure** compiler option is not supported. This is so because the definition would cause your application to link with the static multithreaded Standard C++ Library, which is not supported. For more information, see the [/MD, /MT, /LD (Use Run-Time Library)](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md) topic.  
  
-   [/J](../VS_visualcpp/-J--Default-char-Type-Is-unsigned-.md) is not supported with **/clr:safe** or **/clr:pure**.  
  
-   The ATL and MFC libraries are not supported by pure mode compilation (**/clr:pure**). You can use **/clr:pure** with the Standard C++ Library and the CRT if you also compile with **/MD** or **/MDd**.  
  
-   When using **/Zi** with **/clr**, there are performance implications. For more information, see [/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md).  
  
-   Passing a wide character to a .NET Framework output routine without also specifying [/Zc:wchar_t](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) or without casting the character to `__wchar_t` will cause the output to appear as an `unsigned short int`. For example:  
  
    ```  
    Console::WriteLine(L' ')              // Will output 32.  
    Console::WriteLine((__wchar_t)L' ')   // Will output a space.  
    ```  
  
-   [/GS](../VS_visualcpp/-GS--Buffer-Security-Check-.md) is ignored when compiling with **/clr**, unless a function is under `#pragma` [unmanaged](../VS_visualcpp/managed--unmanaged.md) or if the function must be compiled to native, in which case the compiler will generate warning C4793, which is off by default.  
  
-   See [/ENTRY](../VS_visualcpp/-ENTRY--Entry-Point-Symbol-.md) for function signature requirements of a managed application.  
  
-   Applications compiled with **/openmp** and **/clr** can only be run in a single appdomain process.  See [/openmp (Enable OpenMP 2.0 Support)](../VS_visualcpp/-openmp--Enable-OpenMP-2.0-Support-.md) for more information.  
  
-   Functions that take a variable number of arguments (varargs) will be generated as native functions. Any managed data types in the variable argument position will be marshaled to native types. Note that <xref:System.String?qualifyHint=True> types are actually wide-character strings, but they are marshaled to single-byte character strings. So if a printf specifier is %S (wchar_t*), it will marshal to a %s string instead.  
  
-   When using the va_arg macro, you may get unexpected results when compiling with **/clr:pure**.  For more information, see [va_arg, va_copy, va_end, va_start](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md).  
  
-   If your application passes an argument of type [va_list](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md) to a function declared to take a [variable number of arguments](../Topic/Variable%20Argument%20Lists.md), and your application is compiled with **/clr:pure**, the CLR throws <xref:System.NotSupportedException?qualifyHint=False>. If **/clr**  is used instead, the affected functions are compiled to native code and execute properly. If **/clr:safe** is used, an error diagnostic is emitted.  
  
-   You should not call, from managed code, any functions that walk the stack to get parameter information (function arguments); the P/Invoke layer causes that information to be further down the stack.  For example, do not compile proxy/stub with **/clr**.  
  
-   Functions will be compiled to managed code whenever possible, but not all C++ constructs can be translated to managed code.  This determination is made on a function-by-function basis. If any part of a function cannot be converted to managed code, the entire function will be converted to native code instead. The following cases prevent the compiler from generating managed code.  
  
    -   Compiler-generated thunks or helper functions. Native thunks are generated for any function call through a function pointer, including virtual function calls.  
  
    -   Functions that call `setjmp` or `longjmp`.  
  
    -   Functions that use certain intrinsic routines to directly manipulate machine resources. For example, the use of `__enable` and `__disable`, `_ReturnAddress` and `_AddressOfReturnAddress`, or multimedia intrinsics will all result in native code.  
  
    -   Functions that follow the `#pragma unmanaged` directive. (Note that the inverse, `#pragma managed`, is also supported.)  
  
    -   A function that contains references to aligned types, that is, types declared using `__declspec(align(...))`.  
  
-   You cannot use the [Compiler COM Support](../VS_visualcpp/Compiler-COM-Support.md) classes with **/clr:pure** or **/clr:safe**.  
  
## See Also  
 [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md)