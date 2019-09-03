---
title: "Pragma directives and the __pragma keyword"
ms.date: "08/29/2019"
f1_keywords: ["#pragma"]
helpviewer_keywords: ["#pragma directives, C/C++", "__pragma keyword", "pragma directives, C/C++", "pragmas, C/C++", "preprocessor", "pragmas", "preprocessor, pragmas", "pragma directives (#pragma)"]
ms.assetid: 9867b438-ac64-4e10-973f-c3955209873f
---
# Pragma directives and the __pragma keyword

Pragma directives specify machine- or operating system-specific compiler features. The **__pragma** keyword, which is specific to the Microsoft compiler, enables you to code pragma directives within macro definitions.

## Syntax

> **#pragma** *token-string*\
> **__pragma(** *token-string* **)**

## Remarks

Each implementation of C and C++ supports some features unique to its host machine or operating system. Some programs, for example, must exercise precise control over the location of data in memory, or control the way certain functions receive parameters. The **#pragma** directives offer a way for each compiler to offer machine- and operating system-specific features, while maintaining overall compatibility with the C and C++ languages.

Pragmas are machine- or operating system-specific by definition, and are typically different for every compiler. Pragmas can be used in conditional directives, to provide new preprocessor functionality, or to provide implementation-defined information to the compiler.

The *token-string* is a series of characters that gives a specific compiler instruction and arguments, if any. The number sign (**#**) must be the first non-white-space character on the line that contains the pragma. White-space characters can separate the number sign and the word "pragma". Following **#pragma**, write any text that the translator can parse as preprocessing tokens. The argument to **#pragma** is subject to macro expansion.

The compiler issues a warning when it finds a pragma that it doesn't recognize, and continues compilation.

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
|[managed](../preprocessor/managed-unmanaged.md)|[message](../preprocessor/message.md)|[omp](../preprocessor/omp.md)|
|[once](../preprocessor/once.md)|[optimize](../preprocessor/optimize.md)|[pack](../preprocessor/pack.md)|
|[pointers_to_members](../preprocessor/pointers-to-members.md) <sup>1</sup>|[pop_macro](../preprocessor/pop-macro.md)|[push_macro](../preprocessor/push-macro.md)|
|[region, endregion](../preprocessor/region-endregion.md)|[runtime_checks](../preprocessor/runtime-checks.md)|[section](../preprocessor/section.md)|
|[setlocale](../preprocessor/setlocale.md)|[strict_gs_check](../preprocessor/strict-gs-check.md)|[unmanaged](../preprocessor/managed-unmanaged.md)|
|[vtordisp](../preprocessor/vtordisp.md) <sup>1</sup>|[warning](../preprocessor/warning.md)||

<sup>1</sup> Supported only by the C++ compiler.

## Pragmas and compiler options

Some pragmas provide the same functionality as compiler options. When a pragma is encountered in source code, it overrides the behavior specified by the compiler option. For example, if you specified [/Zp8](../build/reference/zp-struct-member-alignment.md), you can override this compiler setting for specific sections of the code with [pack](../preprocessor/pack.md):

```cmd
cl /Zp8 some_file.cpp
```

```cpp
// some_file.cpp - packing is 8
// ...
#pragma pack(push, 1) - packing is now 1
// ...
#pragma pack(pop) - packing is 8 again
// ...
```

## The __pragma() keyword

**Microsoft specific**

The compiler also supports the **__pragma** keyword, which has the same functionality as the **#pragma** directive. The difference is, the **__pragma** keyword is usable inline in a macro definition. The **#pragma** directive isn't usable in a macro definition, because the compiler interprets the number sign character ('#') in the directive as the [stringizing operator (#)](../preprocessor/stringizing-operator-hash.md).

The following code example demonstrates how the **__pragma** keyword can be used in a macro. This code is excerpted from the mfcdual.h header in the ACDUAL sample in "Compiler COM Support Samples":

```cpp
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

## See also

[C/C++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)\
[C pragmas](../c-language/c-pragmas.md)\
[Keywords](../cpp/keywords-cpp.md)
