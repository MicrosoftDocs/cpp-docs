---
title: "Pragma directives and the __pragma and _Pragma keywords"
description: "Describes the pragma directives available in Microsoft Visual C and C++ (MSVC)"
ms.date: 03/22/2022
f1_keywords: ["#pragma", "_Pragma", "__pragma"]
helpviewer_keywords: ["#pragma directives, C/C++", "__pragma keyword", "_Pragma keyword", "pragma directives, C/C++", "pragmas, C/C++", "preprocessor", "pragmas", "preprocessor, pragmas", "pragma directives (#pragma)"]
no-loc: ["pragma"]
---
# Pragma directives and the `__pragma` and `_Pragma` keywords

Pragma directives specify machine-specific or operating system-specific compiler features. A line that starts with `#pragma` specifies a pragma directive. The Microsoft-specific **`__pragma`** keyword enables you to code pragma directives within macro definitions. The standard **`_Pragma`** preprocessor operator, introduced in C99 and adopted by C++11, is similar.

## Syntax

> **`#pragma`** *token-string*\
> **`__pragma(`** *token-string* **`)`** // two leading underscores - Microsoft-specific extension\
> **`_Pragma(`** *string-literal* **`)`** // C99

## Remarks

Each implementation of C and C++ supports some features unique to its host machine or operating system. Some programs, for example, must exercise precise control over the location of data in memory, or control the way certain functions receive parameters. The **`#pragma`** directives offer a way for each compiler to offer machine- and operating system-specific features, while maintaining overall compatibility with the C and C++ languages.

Pragma directives are machine-specific or operating system-specific by definition, and are typically different for every compiler. A pragma can be used in a conditional directive, to provide new preprocessor functionality. Or, use one to provide implementation-defined information to the compiler.

The *token-string* is a series of characters representing a specific compiler instruction and arguments, if any. The number sign (**`#`**) must be the first non-white-space character on the line that contains the pragma. White-space characters can separate the number sign and the word "pragma". Following **`#pragma`**, write any text that the translator can parse as preprocessing tokens. The argument to **`#pragma`** is subject to macro expansion.

The *string-literal* is the input to `_Pragma`. Outer quotes and leading/trailing whitespace are removed. `\"` is replaced with `"` and `\\` is replaced with `\`.

The compiler issues a warning when it finds a pragma that it doesn't recognize, and continues compilation.

The Microsoft C and C++ compilers recognize the following pragma directives:

:::row:::
   :::column span="":::
      [`alloc_text`](../preprocessor/alloc-text.md)\
      [`auto_inline`](../preprocessor/auto-inline.md)\
      [`bss_seg`](../preprocessor/bss-seg.md)\
      [`check_stack`](../preprocessor/check-stack.md)\
      [`code_seg`](../preprocessor/code-seg.md)\
      [`comment`](../preprocessor/comment-c-cpp.md)\
      [`component`](../preprocessor/component.md)\
      [`conform`](../preprocessor/conform.md) <sup>1</sup>\
      [`const_seg`](../preprocessor/const-seg.md)\
      [`data_seg`](../preprocessor/data-seg.md)\
      [`deprecated`](../preprocessor/deprecated-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`detect_mismatch`](../preprocessor/detect-mismatch.md)\
      [`endregion`](../preprocessor/region-endregion.md)\
      [`fenv_access`](../preprocessor/fenv-access.md)\
      [`float_control`](../preprocessor/float-control.md)\
      [`fp_contract`](../preprocessor/fp-contract.md)\
      [`function`](../preprocessor/function-c-cpp.md)\
      [`hdrstop`](../preprocessor/hdrstop.md)\
      [`include_alias`](../preprocessor/include-alias.md)\
      [`init_seg`](../preprocessor/init-seg.md) <sup>1</sup>\
      [`inline_depth`](../preprocessor/inline-depth.md)\
      [`inline_recursion`](../preprocessor/inline-recursion.md)
   :::column-end:::
   :::column span="":::
      [`intrinsic`](../preprocessor/intrinsic.md)\
      [`loop`](../preprocessor/loop.md) <sup>1</sup>\
      [`make_public`](../preprocessor/make-public.md)\
      [`managed`](../preprocessor/managed-unmanaged.md)\
      [`message`](../preprocessor/message.md)\
      [`omp`](../preprocessor/omp.md)\
      [`once`](../preprocessor/once.md)\
      [`optimize`](../preprocessor/optimize.md)\
      [`pack`](../preprocessor/pack.md)\
      [`pointers_to_members`](../preprocessor/pointers-to-members.md) <sup>1</sup>\
      [`pop_macro`](../preprocessor/pop-macro.md)
   :::column-end:::
   :::column span="":::
      [`push_macro`](../preprocessor/push-macro.md)\
      [`region`](../preprocessor/region-endregion.md)\
      [`runtime_checks`](../preprocessor/runtime-checks.md)\
      [`section`](../preprocessor/section.md)\
      [`setlocale`](../preprocessor/setlocale.md)\
      [`strict_gs_check`](../preprocessor/strict-gs-check.md)\
      [`system_header`](../preprocessor/system-header-pragma.md)\
      [`unmanaged`](../preprocessor/managed-unmanaged.md)\
      [`vtordisp`](../preprocessor/vtordisp.md) <sup>1</sup>\
      [`warning`](../preprocessor/warning.md)
   :::column-end:::
:::row-end:::

<sup>1</sup> Supported only by the C++ compiler.

## Pragma directives and compiler options

Some pragma directives provide the same functionality as compiler options. When a pragma is reached in source code, it overrides the behavior specified by the compiler option. For example, if you specified [`/Zp8`](../build/reference/zp-struct-member-alignment.md), you can override this compiler setting for specific sections of the code with [`pack`](../preprocessor/pack.md):

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

## <a name="the-pragma-keyword"></a> The `__pragma` keyword

The compiler also supports the Microsoft-specific **`__pragma`** keyword, which has the same functionality as the **`#pragma`** directive. The difference is, the **`__pragma`** keyword is usable inline in a macro definition. The **`#pragma`** directive isn't usable in a macro definition, because the compiler interprets the number sign character ('#') in the directive as the [stringizing operator (#)](../preprocessor/stringizing-operator-hash.md).

The following code example demonstrates how the **`__pragma`** keyword can be used in a macro. This code is excerpted from the *mfcdual.h* header in the ACDUAL sample in "Compiler COM Support Samples":

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

## <a name="the-pragma-preprocessing-operator"></a> The `_Pragma` preprocessing operator

`_Pragma` is similar to the Microsoft-specific [`__pragma`](#the-pragma-keyword) keyword. It was introduced into the C standard in C99, and the C++ standard in C++11. It's available in C only when you specify the [`/std:c11` or `/std:c17`](../build/reference/std-specify-language-standard-version.md) option. For C++, it's available in all **`/std`** modes, including the default.

Unlike **`#pragma`**, **`_Pragma`** allows you to put pragma directives into a macro definition. The string literal should be what you would otherwise put following a **`#pragma`** statement. For example:

```c
#pragma message("the #pragma way")
_Pragma ("message( \"the _Pragma way\")") 
```

Quotation marks and back-slashes should be escaped, as shown above. A pragma string that isn't recognized is ignored.

The following code example demonstrates how the **`_Pragma`** keyword could be used in an assert-like macro. It creates a pragma directive that suppresses a warning when the condition expression happens to be constant.

The macro definition uses the `do ... while(0)` idiom for multi-statement macros so that it can be used as though it were one statement. For more information, see [C multi-line macro](https://stackoverflow.com/questions/1067226/c-multi-line-macro-do-while0-vs-scope-block) on Stack Overflow. The **`_Pragma`** statement in the example only applies to the line of code that follows it.

```C
// Compile with /W4

#include <stdio.h>
#include <stdlib.h>

#define MY_ASSERT(BOOL_EXPRESSION) \
    do { \
        _Pragma("warning(suppress: 4127)") /* C4127 conditional expression is constant */  \
        if (!(BOOL_EXPRESSION)) {   \
            printf("MY_ASSERT FAILED: \"" #BOOL_EXPRESSION "\" on %s(%d)", __FILE__, __LINE__); \
            exit(-1); \
        } \
    } while (0)

int main()
{
    MY_ASSERT(0 && "Note that there is no warning: C4127 conditional expression is constant");

    return 0;
}
```

## See also

[C/C++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)\
[C pragma directives](../c-language/c-pragmas.md)\
[Keywords](../cpp/keywords-cpp.md)
