---
description: "Learn more about: /Zl (Omit Default Library Name)"
title: "/Zl (Omit Default Library Name)"
ms.date: "11/04/2016"
f1_keywords: ["/zl", "VC.Project.VCCLCompilerTool.OmitDefaultLibName"]
helpviewer_keywords: ["-Zl compiler option [C++]", "ZI compiler option", "Omit Default Library Name compiler option", "/Zl compiler option [C++]", "default libraries, omitting names"]
ms.assetid: b27d39d0-44d6-498c-84ae-27c1326fee59
---
# /Zl (Omit Default Library Name)

Omits the default C runtime library name from the .obj file. By default, the compiler puts the name of the library into the .obj file to direct the linker to the correct library.

## Syntax

```
/Zl
```

## Remarks

For more information on the default library, see [Use Run-Time Library](md-mt-ld-use-run-time-library.md).

You can use **/Zl** to compile .obj files you plan to put into a library. Although omitting the library name saves only a small amount of space for a single .obj file, the total space saved is significant in a library that contains many object modules.

This option is an advanced option. Setting this option removes certain C Runtime library support that may be required by your application, resulting in link-time errors if your application depends on this support. If you use this option you must provide the required components in some other way.

Use [/NODEFAULTLIB (Ignore Libraries)](nodefaultlib-ignore-libraries.md). to direct the linker to ignore library references in all .obj files.

For more information, see [CRT Library Features](../../c-runtime-library/crt-library-features.md).

When compiling with **/Zl**, `_VC_NODEFAULTLIB` is defined.  For example:

```cpp
// vc_nodefaultlib.cpp
// compile with: /Zl
void Test() {
   #ifdef _VC_NODEFAULTLIB
      int i;
   #endif

   int i;   // C2086
}
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Advanced** property page.

1. Modify the **Omit Default Library Names** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
