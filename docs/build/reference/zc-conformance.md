---
title: "/Zc (Conformance)"
description: "The /Zc conformance compiler options enable or disable support for conforming or backward-compatible behavior."
ms.date: 08/29/2023
helpviewer_keywords: ["/Zc compiler options [C++]", "-Zc compiler options [C++]", "Conformance compiler options", "Zc compiler options [C++]"]
---
# `/Zc` (Conformance)

Use the **`/Zc`** compiler options to specify standard or Microsoft-specific compiler behavior.

## Syntax

> **`/Zc:`**_option_{,_option_ ...}

You may set multiple **`/Zc`** options separated by commas in a single **`/Zc`** compiler option. If a **`/Zc`** option is enabled and disabled in the same command, the option that appears last is used.

## Remarks

When Visual Studio has implemented an extension to C or C++ that is incompatible with the standard, you can use a **`/Zc`** conformance option to specify standard-conforming or Microsoft-specific behavior. For some options, the Microsoft-specific behavior is the default, to prevent large-scale breaking changes to existing code. In other cases, the default is the standard behavior, where improvements in security, performance, or compatibility outweigh the costs of breaking changes. The default setting of each conformance option may change in newer versions of Visual Studio. For more information about each conformance option, see the article for the specific option. The [`/permissive-`](permissive-standards-conformance.md) compiler option implicitly sets the conformance options that aren't set by default to their conforming settings.

Here are the **`/Zc`** compiler options:

| Option | Behavior |
|--|--|
| [`/Zc:__cplusplus[-]`](zc-cplusplus.md) | Enable the `__cplusplus` macro to report the supported standard. Off by default. |
| [`/Zc:__STDC__`](zc-stdc.md) | Enable the `__STDC__` macro to report the C standard is supported. Off by default. |
| [`/Zc:alignedNew[-]`](zc-alignednew.md) | Enable C++17 over-aligned dynamic allocation. Off by default unless **`/std:c++17`** or later is specified. |
| [`/Zc:auto[-]`](zc-auto-deduce-variable-type.md) | Enforce the new Standard C++ meaning for **`auto`**. On by default. |
| [`/Zc:char8_t[-]`](zc-char8-t.md) | Enable or disable C++20 native `u8` literal support as `const char8_t`. Off by default unless **`/std:c++20`** or later is specified. |
| [`/Zc:enumTypes[-]`](zc-enumtypes.md) | Enable Standard C++ rules for `enum` type deduction. Off by default. |
| [`/Zc:externC[-]`](zc-externc.md) | Enforce Standard C++ rules for `extern "C"` functions. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:externConstexpr[-]`](zc-externconstexpr.md) | Enable external linkage for **`constexpr`** variables. Off by default. |
| [`/Zc:forScope[-]`](zc-forscope-force-conformance-in-for-loop-scope.md) | Enforce Standard C++ **`for`** scoping rules. On by default. |
| [`/Zc:gotoScope[-]`](zc-gotoscope.md) | Enforce Standard C++ **`goto`** rules around local variable initialization. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:hiddenFriend[-]`](zc-hiddenfriend.md) | Enforce Standard C++ hidden friend rules. Off by default unless **`/permissive-`**  is specified. |
| [`/Zc:implicitNoexcept[-]`](zc-implicitnoexcept-implicit-exception-specifiers.md) | Enable implicit **`noexcept`** on required functions. On by default. |
| [`/Zc:inline[-]`](zc-inline-remove-unreferenced-comdat.md) | Remove unreferenced functions or data if they're COMDAT or have internal linkage only. Off by default. |
| [`/Zc:lambda[-]`](zc-lambda.md) | Enable new lambda processor for conformance-mode syntactic checks in generic lambdas. Off by default unless **`/std:c++20`** or later is specified. |
| [`/Zc:noexceptTypes[-]`](zc-noexcepttypes.md) | Enforce C++17 **`noexcept`** rules. Off by default unless **`/std:c++17`** or later is specified. |
| [`/Zc:nrvo[-]`](zc-nrvo.md) | Enable optional copy and move elisions. Off by default unless **`/O2`**, **`/permissive-`**, or **`/std:c++20`** or later is specified. |
| [`/Zc:preprocessor[-]`](zc-preprocessor.md) | Use the new conforming preprocessor. Off by default unless **`/std:c11`** or later is specified. |
| [`/Zc:referenceBinding[-]`](zc-referencebinding-enforce-reference-binding-rules.md) | A UDT temporary won't bind to a nonconst lvalue reference. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:rvalueCast[-]`](zc-rvaluecast-enforce-type-conversion-rules.md) | Enforce Standard C++ explicit type conversion rules. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:sizedDealloc[-]`](zc-sizeddealloc-enable-global-sized-dealloc-functions.md) | Enable C++14 global sized deallocation functions. On by default. |
| [`/Zc:strictStrings[-]`](zc-strictstrings-disable-string-literal-type-conversion.md) | Disable string-literal to `char*` or `wchar_t*` conversion. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:static_assert[-]`](zc-static-assert.md) | strict handling of `static_assert`. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:templateScope[-]`](zc-templatescope.md) | Enforce Standard C++ template parameter shadowing rules. Off by default. |
| [`/Zc:ternary[-]`](zc-ternary.md) | Enforce conditional operator rules on operand types. Off by default unless **`/permissive-`** is specified. |
| [`/Zc:threadSafeInit[-]`](zc-threadsafeinit-thread-safe-local-static-initialization.md) | Enable thread-safe local static initialization. On by default. |
| [`/Zc:throwingNew[-]`](zc-throwingnew-assume-operator-new-throws.md) | Assume **`operator new`** throws on failure. Off by default. |
| [`/Zc:tlsGuards[-]`](zc-tlsguards.md) | Generate runtime checks for TLS variable initialization. On by default. |
| [`/Zc:trigraphs[-]`](zc-trigraphs-trigraphs-substitution.md) | Enable trigraphs (obsolete, off by default). |
| [`/Zc:twoPhase-`](zc-twophase.md) | Use nonconforming template parsing behavior (only applicable when **`/permissive-`** is specified, which defaults to conforming). |
| [`/Zc:wchar_t[-]`](zc-wchar-t-wchar-t-is-native-type.md) | **`wchar_t`** is a native type, not a typedef. On by default. |
| [`/Zc:zeroSizeArrayNew[-]`](zc-zerosizearraynew.md) | Call member `new`/`delete` for 0-size arrays of objects. On by default. |

For more information about conformance issues in MSVC, see [Nonstandard behavior](../../cpp/nonstandard-behavior.md).

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
