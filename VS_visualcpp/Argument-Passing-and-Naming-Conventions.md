---
title: "Argument Passing and Naming Conventions"
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
ms.topic: language-reference
ms.assetid: de468979-eab8-4158-90c5-c198932f93b9
caps.latest.revision: 9
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
# Argument Passing and Naming Conventions
**Microsoft Specific**  
  
 The Visual C++ compilers allow you to specify conventions for passing arguments and return values between functions and callers. Not all conventions are available on all supported platforms, and some conventions use platform-specific implementations. In most cases, keywords or compiler switches that specify an unsupported convention on a particular platform are ignored, and the platform default convention is used.  
  
 On x86 plaftorms, all arguments are widened to 32 bits when they are passed. Return values are also widened to 32 bits and returned in the EAX register, except for 8-byte structures, which are returned in the EDX:EAX register pair. Larger structures are returned in the EAX register as pointers to hidden return structures. Parameters are pushed onto the stack from right to left. Structures that are not PODs will not be returned in registers.  
  
 The compiler generates prolog and epilog code to save and restore the ESI, EDI, EBX, and EBP registers, if they are used in the function.  
  
> [!NOTE]
>  When a struct, union, or class is returned from a function by value, all definitions of the type need to be the same, else the program may fail at runtime.  
  
 For information on how to define your own function prolog and epilog code, see [Naked Function Calls](../VS_visualcpp/Naked-Function-Calls.md).  
  
 For information about the default calling conventions in code that targets x64 platforms, see [Overview of x64 Calling Conventions](../VS_visualcpp/Overview-of-x64-Calling-Conventions.md). For information about calling convention issues in code that targets ARM platforms, see [Common Visual C++ ARM Migration Issues](../VS_visualcpp/Common-Visual-C---ARM-Migration-Issues.md).  
  
 The following calling conventions are supported by the Visual C/C++ compiler.  
  
|Keyword|Stack cleanup|Parameter passing|  
|-------------|-------------------|-----------------------|  
|[__cdecl](../VS_visualcpp/__cdecl.md)|Caller|Pushes parameters on the stack, in reverse order (right to left)|  
|[__clrcall](../VS_visualcpp/__clrcall.md)|n/a|Load parameters onto CLR expression stack in order (left to right).|  
|[__stdcall](../VS_visualcpp/__stdcall.md)|Callee|Pushes parameters on the stack, in reverse order (right to left)|  
|[__fastcall](../VS_visualcpp/__fastcall.md)|Callee|Stored in registers, then pushed on stack|  
|[__thiscall](../VS_visualcpp/__thiscall.md)|Callee|Pushed on stack; **this** pointer stored in ECX|  
|[__vectorcall](../VS_visualcpp/__vectorcall.md)|Callee|Stored in registers, then pushed on stack in reverse order (right to left)|  
  
 For related information, see [Obsolete Calling Conventions](../VS_visualcpp/Obsolete-Calling-Conventions.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [Calling Conventions](../VS_visualcpp/Calling-Conventions.md)