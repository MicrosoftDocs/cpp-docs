---
description: "Learn more about: /Zc:wchar_t (wchar_t Is Native Type)"
title: "/Zc:wchar_t (wchar_t Is Native Type)"
ms.date: "03/01/2018"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.TreatWChar_tAsBuiltInType", "VC.Project.VCCLCompilerTool.TreatWChar_tAsBuiltInType", "/Zc:wchar_t"]
helpviewer_keywords: ["/Zc compiler options [C++]", "-Zc compiler options [C++]", "wchar_t type", "Conformance compiler options", "Zc compiler options [C++]"]
ms.assetid: b0de5a84-da72-4e5a-9a4e-541099f939e0
---
# /Zc:wchar_t (wchar_t Is Native Type)

Parse **`wchar_t`** as a built-in type according to the C++ standard.

## Syntax

> **/Zc:wchar_t**[**-**]

## Remarks

If **/Zc:wchar_t** is on, **`wchar_t`** is a keyword for a built-in integral type in code compiled as C++. If **/Zc:wchar_t-** (with a minus sign) is specified, or in code compiled as C, **`wchar_t`** is not a built-in type. Instead, **`wchar_t`** is defined as a **`typedef`** for **`unsigned short`** in the canonical header stddef.h. (The Microsoft implementation defines it in another header that is included by stddef.h and other standard headers.)

We do not recommend **/Zc:wchar_t-** because the C++ standard requires that **`wchar_t`** be a built-in type. Using the **`typedef`** version can cause portability problems. If you upgrade from earlier versions of Visual Studio and encounter compiler error [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) because the code is trying to implicitly convert a **`wchar_t`** to **`unsigned short`**, we recommend that you change the code to fix the error, instead of setting **/Zc:wchar_t-**.

The **/Zc:wchar_t** option is on by default in C++ compilations, and is ignored in C compilations. The [/permissive-](permissive-standards-conformance.md) option does not affect **/Zc:wchar_t**.

Microsoft implements **`wchar_t`** as a two-byte unsigned value. It maps to the Microsoft-specific native type **`__wchar_t`**. For more information about **`wchar_t`**, see [Data Type Ranges](../../cpp/data-type-ranges.md) and [Fundamental Types](../../cpp/fundamental-types-cpp.md).

If you write new code that has to interoperate with older code that still uses the **`typedef`** version of **`wchar_t`**, you can provide overloads for both the **`unsigned short`** and **`__wchar_t`** variations of **`wchar_t`**, so that your code can be linked with code compiled with **/Zc:wchar_t** or code compiled without it. Otherwise, you would have to provide two different builds of the library, one with and one without **/Zc:wchar_t** enabled. Even in this case, we recommend that you build the older code by using the same compiler that you use to compile the new code. Never mix binaries compiled with different compilers.

When **/Zc:wchar_t** is specified, **\_WCHAR\_T\_DEFINED** and **\_NATIVE\_WCHAR\_T\_DEFINED** symbols are defined. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md).

If your code uses the compiler COM global functions, because **/Zc:wchar_t** is now on by default, we recommend that you change explicit references to comsupp.lib (either from the [comment pragma](../../preprocessor/comment-c-cpp.md) or on the command line) to either comsuppw.lib or comsuppwd.lib. (If you must compile with **/Zc:wchar_t-**, use comsupp.lib.) If you include the comdef.h header file, the correct library is specified for you. For information about compiler COM support, see [Compiler COM Support](../../cpp/compiler-com-support.md).

The **`wchar_t`** built-in type is not supported when you compile C code. For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Language** page.

1. Modify the **Treat wchar_t as Built-in Type** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.TreatWChar_tAsBuiltInType%2A>.

## See also

[/Zc (Conformance)](zc-conformance.md)<br/>
