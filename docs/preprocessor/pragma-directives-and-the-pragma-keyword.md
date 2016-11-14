---
title: "Pragma Directives and the __Pragma Keyword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
|[alloc_text](../preprocessor/alloc-text.md)|[auto_inline](../preprocessor/auto-inline.md)|[bss_seg](../preprocessor/bss-seg.md)|  
|[check_stack](../preprocessor/check-stack.md)|[code_seg](../preprocessor/code-seg.md)|[comment](../preprocessor/comment-c-cpp.md)|  
|[component](../preprocessor/component.md)|[conform](../preprocessor/conform.md) <sup>1</sup>|[const_seg](../preprocessor/const-seg.md)|  
|[data_seg](../preprocessor/data-seg.md)|[deprecated](../preprocessor/deprecated-c-cpp.md)|[detect_mismatch](../preprocessor/detect-mismatch.md)|  
|[fenv_access](../preprocessor/fenv-access.md)|[float_control](../preprocessor/float-control.md)|[fp_contract](../preprocessor/fp-contract.md)|  
|[function](../preprocessor/function-c-cpp.md)|[hdrstop](../preprocessor/hdrstop.md)|[include_alias](../preprocessor/include-alias.md)|  
|[init_seg](../preprocessor/init-seg.md) <sup>1</sup>|[inline_depth](../preprocessor/inline-depth.md)|[inline_recursion](../preprocessor/inline-recursion.md)|  
|[intrinsic](../preprocessor/intrinsic.md)|[loop](../preprocessor/loop.md) <sup>1</sup>|[make_public](../preprocessor/make-public.md)|  
|[managed](../preprocessor/managed-unmanaged.md)|[message](../preprocessor/message.md)||  
|[omp](../preprocessor/omp.md)|[once](../preprocessor/once.md)||  
|[optimize](../preprocessor/optimize.md)|[pack](../preprocessor/pack.md)|[pointers_to_members](../preprocessor/pointers-to-members.md) <sup>1</sup>|  
|[pop_macro](../preprocessor/pop-macro.md)|[push_macro](../preprocessor/push-macro.md)|[region, endregion](../preprocessor/region-endregion.md)|  
|[runtime_checks](../preprocessor/runtime-checks.md)|[section](../preprocessor/section.md)|[setlocale](../preprocessor/setlocale.md)|  
|[strict_gs_check](../preprocessor/strict-gs-check.md)|[unmanaged](../preprocessor/managed-unmanaged.md)|[vtordisp](../preprocessor/vtordisp.md) <sup>1</sup>|  
|[warning](../preprocessor/warning.md)|||  
  
 1. Supported only by the C++ compiler.  
  
## Pragmas and Compiler Options  
 Some pragmas provide the same functionality as compiler options. When a pragma is encountered in source code, it overrides the behavior specified by the compiler option. For example, if you specified [/Zp8](../build/reference/zp-struct-member-alignment.md), you can override this compiler setting for specific sections of the code with [pack](../preprocessor/pack.md):  
  
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
  
 The compiler also supports the `__pragma` keyword, which has the same functionality as the `#pragma` directive, but can be used inline in a macro definition. The `#pragma` directive cannot be used in a macro definition because the compiler interprets the number sign character ('#') in the directive to be the [stringizing operator (#)](../preprocessor/stringizing-operator-hash.md).  
  
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
 [C/C++ Preprocessor Reference](../preprocessor/c-cpp-preprocessor-reference.md)   
 [C Pragmas](../c-language/c-pragmas.md)   
 [Keywords](../cpp/keywords-cpp.md)