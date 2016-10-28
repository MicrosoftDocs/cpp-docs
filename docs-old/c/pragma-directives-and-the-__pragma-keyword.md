---
title: "Pragma Directives and the __Pragma Keyword"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "#pragma"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#pragma directives, C/C++"
  - "__pragma keyword"
  - "pragma directives, C/C++"
  - "pragmas, C/C++"
  - "preprocessor"
  - "pragmas"
  - "preprocessor, pragmas"
  - "pragma directives (#pragma)"
ms.assetid: 9867b438-ac64-4e10-973f-c3955209873f
caps.latest.revision: 20
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
|[alloc_text](../c/alloc_text.md)|[auto_inline](../c/auto_inline.md)|[bss_seg](../c/bss_seg.md)|  
|[check_stack](../c/check_stack.md)|[code_seg](../c/code_seg.md)|[comment](../c/comment--c-c---.md)|  
|[component](../c/component.md)|[conform](../c/conform.md) <sup>1</sup>|[const_seg](../c/const_seg.md)|  
|[data_seg](../c/data_seg.md)|[deprecated](../c/deprecated--c-c---.md)|[detect_mismatch](../c/detect_mismatch.md)|  
|[fenv_access](../c/fenv_access.md)|[float_control](../c/float_control.md)|[fp_contract](../c/fp_contract.md)|  
|[function](../c/function--c-c---.md)|[hdrstop](../c/hdrstop.md)|[include_alias](../c/include_alias.md)|  
|[init_seg](../c/init_seg.md) <sup>1</sup>|[inline_depth](../c/inline_depth.md)|[inline_recursion](../c/inline_recursion.md)|  
|[intrinsic](../c/intrinsic.md)|[loop](../c/loop.md) <sup>1</sup>|[make_public](../c/make_public.md)|  
|[managed](../c/managed--unmanaged.md)|[message](../c/message.md)||  
|[omp](../c/omp.md)|[once](../c/once.md)||  
|[optimize](../c/optimize.md)|[pack](../c/pack.md)|[pointers_to_members](../c/pointers_to_members.md) <sup>1</sup>|  
|[pop_macro](../c/pop_macro.md)|[push_macro](../c/push_macro.md)|[region, endregion](../c/region--endregion.md)|  
|[runtime_checks](../c/runtime_checks.md)|[section](../c/section.md)|[setlocale](../c/setlocale.md)|  
|[strict_gs_check](../c/strict_gs_check.md)|[unmanaged](../c/managed--unmanaged.md)|[vtordisp](../c/vtordisp.md) <sup>1</sup>|  
|[warning](../c/warning.md)|||  
  
 1. Supported only by the C++ compiler.  
  
## Pragmas and Compiler Options  
 Some pragmas provide the same functionality as compiler options. When a pragma is encountered in source code, it overrides the behavior specified by the compiler option. For example, if you specified [/Zp8](../buildref/-zp--struct-member-alignment-.md), you can override this compiler setting for specific sections of the code with [pack](../c/pack.md):  
  
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
  
 The compiler also supports the `__pragma` keyword, which has the same functionality as the `#pragma` directive, but can be used inline in a macro definition. The `#pragma` directive cannot be used in a macro definition because the compiler interprets the number sign character ('#') in the directive to be the [stringizing operator (#)](../c/stringizing-operator--sharp-.md).  
  
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
 [C/C++ Preprocessor Reference](../c/c-c---preprocessor-reference.md)   
 [C Pragmas](../c/c-pragmas.md)   
 [Keywords](../cpp/keywords--c---.md)