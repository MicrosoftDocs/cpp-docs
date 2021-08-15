---
description: "Learn more about: /Zc:forScope (Force Conformance in for Loop Scope)"
title: "/Zc:forScope (Force Conformance in for Loop Scope)"
ms.date: "03/06/2018"
f1_keywords: ["VC.Project.VCCLCompilerTool.ForceConformanceInForLoopScope", "VC.Project.VCCLWCECompilerTool.ForceConformanceInForLoopScope", "/zc:forScope"]
helpviewer_keywords: ["/Zc compiler options [C++]", "-Zc compiler options [C++]", "Conformance compiler options", "Zc compiler options [C++]"]
ms.assetid: 3031f02d-3b14-4ad0-869e-22b0110c3aed
---
# /Zc:forScope (Force Conformance in for Loop Scope)

Used to implement standard C++ behavior for [for](../../cpp/for-statement-cpp.md) loops with Microsoft extensions ([/Ze](za-ze-disable-language-extensions.md)).

## Syntax

> **/Zc:forScope**[**-**]

## Remarks

Standard behavior is to let a **`for`** loop's initializer go out of scope after the **`for`** loop. Under **/Zc:forScope-** and [/Ze](za-ze-disable-language-extensions.md), the **`for`** loop's initializer remains in scope until the local scope ends.

The **/Zc:forScope** option is on by default. **/Zc:forScope** is not affected when the [/permissive-](permissive-standards-conformance.md) option is specified.

The **/Zc:forScope-** option is deprecated and will be removed in a future release. Use of **/Zc:forScope-** generates deprecation warning D9035.

The following code compiles under **/Ze** but not under **/Za**:

```cpp
// zc_forScope.cpp
// compile by using: cl /Zc:forScope- /Za zc_forScope.cpp
// C2065, D9035 expected
int main() {
    // Compile by using cl /Zc:forScope- zc_forScope.cpp
    // to compile this non-standard code as-is.
    // Uncomment the following line to resolve C2065 for /Za.
    // int i;
    for (int i = 0; i < 1; i++)
        ;
    i = 20;   // i has already gone out of scope under /Za
}
```

If you use **/Zc:forScope-**, warning C4288 (off by default) is generated if a variable is in scope because of a declaration that was made in a previous scope. To demonstrate this, remove the `//` characters in the example code to declare `int i`.

You can modify the run-time behavior of **/Zc:forScope** by using the [conform](../../preprocessor/conform.md) pragma.

If you use **/Zc:forScope-** in a project that has an existing .pch file, a warning is generated, **/Zc:forScope-** is ignored, and compilation continues by using the existing .pch files. If you want a new .pch file generated, use [/Yc (Create Precompiled Header File)](yc-create-precompiled-header-file.md).

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. Modify the **Force Conformance in For Loop Scope** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForceConformanceInForLoopScope%2A>.

## See also

[/Zc (Conformance)](zc-conformance.md)<br/>
[/Za, /Ze (Disable Language Extensions)](za-ze-disable-language-extensions.md)<br/>
