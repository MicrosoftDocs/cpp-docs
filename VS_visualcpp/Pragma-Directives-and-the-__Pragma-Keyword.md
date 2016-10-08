---
title: "Pragma Directives and the __Pragma Keyword"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9867b438-ac64-4e10-973f-c3955209873f
caps.latest.revision: 20
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
# Pragma Directives and the __Pragma Keyword
Pragma directives specify machine- or operating-specific compiler features. The `__pragma` keyword, which is specific to the Microsoft compiler, enables you to code pragma directives within macro definitions.  
  
## Syntax  
  
```  
  
      #pragma token-string  
__pragma(token-string)  
```  
  
## Remarks  
 Each implementation of C and C++ supports some features unique to its host machine or operating system. Some programs, for example, must exercise precise control over the memory areas where data is put or to control the way certain functions receive parameters. The `#pragma` directives offer a way for each compiler to offer machine- and operating system-specific features while retaining overall compatibility with the C and C++ languages.  
  
 Pragmas are machine- or operating system-specific by definition, and are usually different for every compiler. Pragmas can be used in conditional statements, to provide new preprocessor functionality, or to provide implementation-defined information to the compiler.  
  
 The `token-string` is a series of characters that gives a specific compiler instruction and arguments, if any. The number sign (**#**) must be the first non-white-space character on the line that contains the pragma; white-space characters can separate the number sign and the word "pragma". Following `#pragma`, write any text that the translator can parse as preprocessing tokens. The argument to `#pragma` is subject to macro expansion.  
  
 If the compiler finds a pragma that it does not recognize, it issues a warning and continues compilation.  
  
 The Microsoft C and C++ compilers recognize the following pragmas:  
  
||||  
|-|-|-|  
|[alloc_text](../VS_visualcpp/alloc_text.md)|[auto_inline](../VS_visualcpp/auto_inline.md)|[bss_seg](../VS_visualcpp/bss_seg.md)|  
|[check_stack](../VS_visualcpp/check_stack.md)|[code_seg](../VS_visualcpp/code_seg.md)|[comment](../VS_visualcpp/comment--C-C---.md)|  
|[component](../VS_visualcpp/component.md)|[conform](../VS_visualcpp/conform.md) <sup>1</sup>|[const_seg](../VS_visualcpp/const_seg.md)|  
|[data_seg](../VS_visualcpp/data_seg.md)|[deprecated](../VS_visualcpp/deprecated--C-C---.md)|[detect_mismatch](../VS_visualcpp/detect_mismatch.md)|  
|[fenv_access](../VS_visualcpp/fenv_access.md)|[float_control](../VS_visualcpp/float_control.md)|[fp_contract](../VS_visualcpp/fp_contract.md)|  
|[function](../VS_visualcpp/function--C-C---.md)|[hdrstop](../VS_visualcpp/hdrstop.md)|[include_alias](../VS_visualcpp/include_alias.md)|  
|[init_seg](../VS_visualcpp/init_seg.md) <sup>1</sup>|[inline_depth](../VS_visualcpp/inline_depth.md)|[inline_recursion](../VS_visualcpp/inline_recursion.md)|  
|[intrinsic](../VS_visualcpp/intrinsic.md)|[loop](../VS_visualcpp/loop.md) <sup>1</sup>|[make_public](../VS_visualcpp/make_public.md)|  
|[managed](../VS_visualcpp/managed--unmanaged.md)|[message](../VS_visualcpp/message.md)||  
|[omp](../VS_visualcpp/omp.md)|[once](../VS_visualcpp/once.md)||  
|[optimize](../VS_visualcpp/optimize.md)|[pack](../VS_visualcpp/pack.md)|[pointers_to_members](../VS_visualcpp/pointers_to_members.md) <sup>1</sup>|  
|[pop_macro](../VS_visualcpp/pop_macro.md)|[push_macro](../VS_visualcpp/push_macro.md)|[region, endregion](../VS_visualcpp/region--endregion.md)|  
|[runtime_checks](../VS_visualcpp/runtime_checks.md)|[section](../VS_visualcpp/section.md)|[setlocale](../VS_visualcpp/setlocale.md)|  
|[strict_gs_check](../VS_visualcpp/strict_gs_check.md)|[unmanaged](../VS_visualcpp/managed--unmanaged.md)|[vtordisp](../VS_visualcpp/vtordisp.md) <sup>1</sup>|  
|[warning](../VS_visualcpp/warning.md)|||  
  
 1. Supported only by the C++ compiler.  
  
## Pragmas and Compiler Options  
 Some pragmas provide the same functionality as compiler options. When a pragma is encountered in source code, it overrides the behavior specified by the compiler option. For example, if you specified [/Zp8](../VS_visualcpp/-Zp--Struct-Member-Alignment-.md), you can override this compiler setting for specific sections of the code with [pack](../VS_visualcpp/pack.md):  
  
```  
cl /Zp8 ...  
  
<file> - packing is 8  
// ...  
#pragma pack(push, 1) - packing is now 1  
// ...  
#pragma pack(pop) - packing is 8  
</file>  
```  
  
## The __pragma() Keyword  
 **Microsoft specific**  
  
 The compiler also supports the `__pragma` keyword, which has the same functionality as the `#pragma` directive, but can be used inline in a macro definition. The `#pragma` directive cannot be used in a macro definition because the compiler interprets the number sign character ('#') in the directive to be the [stringizing operator (#)](../VS_visualcpp/Stringizing-Operator--#-.md).  
  
 The following code example demonstrates how the `__pragma` keyword can be used in a macro. This code is excerpted from the mfcdual.h header in the ACDUAL sample in "Compiler COM Support Samples":  
  
```  
#define CATCH_ALL_DUAL \  
CATCH(COleException, e) \  
{ \  
_hr = e->m_sc; \  
} \  
AND_CATCH_ALL(e) \  
{ \  
__pragma(warning(push)) \  
__pragma(warning(disable:6246)) /*disable _ctlState prefast warning*/ \  
AFX_MANAGE_STATE(pThis->m_pModuleState); \  
__pragma(warning(pop)) \  
_hr = DualHandleException(_riidSource, e); \  
} \  
END_CATCH_ALL \  
return _hr; \  
```  
  
 **End Microsoft specific**  
  
## See Also  
 [C/C++ Preprocessor Reference](../VS_visualcpp/C-C---Preprocessor-Reference.md)   
 [C Pragmas](../VS_visualcpp/C-Pragmas.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)