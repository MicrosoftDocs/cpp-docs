---
title: "/sdl (Enable Additional Security Checks)"
description: "The Microsoft C/C++ compiler /sdl option enables recommended Security Development Lifecycle (SDL) checks and warnings."
ms.date: 10/02/2020
f1_keywords: ["VC.Project.VCCLCompilerTool.SDLCheck"]
ms.assetid: 3dcf86a0-3169-4240-9f29-e04a9f535826
---
# /sdl (Enable Additional Security Checks)

Enables recommended Security Development Lifecycle (SDL) checks. These checks change security-relevant warnings into errors, and set additional secure code-generation features.

## Syntax

> **`/sdl`**[**`-`**]

## Remarks

**/sdl** enables a superset of the baseline security checks provided by [`/GS`](gs-buffer-security-check.md) and overrides **`/GS-`**. By default, **`/sdl`** is off. **`/sdl-`** disables the additional security checks.

### Compile-time Checks

**`/sdl`** enables these warnings as errors:

| Warning enabled by /sdl | Equivalent command-line switch | Description |
|--|--|--|
| [C4146](../../error-messages/compiler-warnings/compiler-warning-level-2-c4146.md) | /we4146 | A unary minus operator was applied to an unsigned type, resulting in an unsigned result. |
| [C4308](../../error-messages/compiler-warnings/compiler-warning-level-2-c4308.md) | /we4308 | A negative integral constant converted to unsigned type, resulting in a possibly meaningless result. |
| [C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md) | /we4532 | Use of `continue`, `break`, or `goto` keywords in a `__finally`/`finally` block has undefined behavior during abnormal termination. |
| [C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md) | /we4533 | Code initializing a variable will not be executed. |
| [C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) | /we4700 | Use of an uninitialized local variable. |
| [C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md) | /we4703 | Use of a potentially uninitialized local pointer variable. |
| [C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md) | /we4789 | Buffer overrun when specific C run-time (CRT) functions are used. |
| [C4995](../../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md) | /we4995 | Use of a function marked with pragma [`deprecated`](../../preprocessor/deprecated-c-cpp.md). |
| [C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) | /we4996 | Use of a function marked as [`deprecated`](../../cpp/deprecated-cpp.md). |

### Runtime checks

When **`/sdl`** is enabled, the compiler generates code that does these checks at run time:

- Enables the strict mode of **`/GS`** run-time buffer overrun detection, equivalent to compiling with `#pragma strict_gs_check(push, on)`.

- Does limited pointer sanitization. In expressions that don't involve dereferences and in types that have no user-defined destructor, pointer references are set to a non-valid address after a call to **`delete`**. This sanitization helps to prevent the reuse of stale pointer references.

- Initializes class member pointers. Automatically initializes class members of pointer type to **`nullptr`** on object instantiation (before the constructor runs). It helps prevent the use of uninitialized pointers that the constructor doesn't explicitly initialize. The compiler-generated member pointer initialization is called as long as:

  - The object isn't allocated using a custom (user defined) `operator new`

  - The object isn't allocated as part of an array (for example `new A[x]`)

  - The class isn't managed or imported

  - The class has a user-defined default constructor.

  To be initialized by the compiler-generated class initialization function, a member must be a pointer, and not a property or constant.

For more information, see [Warnings, /sdl, and improving uninitialized variable detection](https://www.microsoft.com/security/blog/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **General** property page.

1. Set the **SDL checks** property by using the property drop-down control. Choose **OK** or **Apply** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
