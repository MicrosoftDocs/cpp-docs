---
description: "Learn more about: /MD, /MT, /LD (Use Run-Time Library)"
title: "/MD, -MT, -LD (Use Run-Time Library)"
ms.date: "07/17/2019"
f1_keywords: ["/ld", "/mt", "VC.Project.VCCLWCECompilerTool.RuntimeLibrary", "VC.Project.VCCLCompilerTool.RuntimeLibrary", "/md", "/ml"]
helpviewer_keywords: ["/MT compiler option [C++]", "-MD compiler option [C++]", "threading [C++], multithread compiler option", "MSVCRTD.lib", "MSVCRT.lib", "LIBCMT.lib", "MD compiler option [C++]", "/MD compiler option [C++]", "MT compiler option [C++]", "LD compiler option [C++]", "MDd compiler option [C++]", "-MDd compiler option [C++]", "LIBCD.lib", "-MTd compiler option [C++]", "MTd compiler option [C++]", "/MTd compiler option [C++]", "-LD compiler option [C++]", "/MDd compiler option [C++]", "multithread compiler option", "_STATIC_CPPLIB symbol", "LIBC.lib", "/LD compiler option [C++]", "DLLs [C++], compiler options", "LIBCMTD.lib", "-MT compiler option [C++]"]
ms.assetid: cf7ed652-dc3a-49b3-aab9-ad60e5395579
---
# /MD, /MT, /LD (Use Run-Time Library)

Indicates whether a multithreaded module is a DLL and specifies retail or debug versions of the run-time library.

## Syntax

```
/MD[d]
/MT[d]
/LD[d]
```

## Remarks

|Option|Description|
|------------|-----------------|
|**/MD**|Causes the application to use the multithread-specific and DLL-specific version of the run-time library. Defines `_MT` and `_DLL` and causes the compiler to place the library name MSVCRT.lib into the .obj file.<br /><br /> Applications compiled with this option are statically linked to MSVCRT.lib. This library provides a layer of code that enables the linker to resolve external references. The actual working code is contained in MSVCR*versionnumber*.DLL, which must be available at run time to applications linked with MSVCRT.lib.|
|**/MDd**|Defines `_DEBUG`, `_MT`, and `_DLL` and causes the application to use the debug multithread-specific and DLL-specific version of the run-time library. It also causes the compiler to place the library name MSVCRTD.lib into the .obj file.|
|**/MT**|Causes the application to use the multithread, static version of the run-time library. Defines `_MT` and causes the compiler to place the library name LIBCMT.lib into the .obj file so that the linker will use LIBCMT.lib to resolve external symbols.|
|**/MTd**|Defines `_DEBUG` and `_MT`. This option also causes the compiler to place the library name LIBCMTD.lib into the .obj file so that the linker will use LIBCMTD.lib to resolve external symbols.|
|**/LD**|Creates a DLL.<br /><br /> Passes the **/DLL** option to the linker. The linker looks for, but does not require, a `DllMain` function. If you do not write a `DllMain` function, the linker inserts a `DllMain` function that returns TRUE.<br /><br /> Links the DLL startup code.<br /><br /> Creates an import library (.lib), if an export (.exp) file is not specified on the command line. You link the import library to applications that call your DLL.<br /><br /> Interprets [/Fe (Name EXE File)](fe-name-exe-file.md) as naming a DLL rather than an .exe file. By default, the program name becomes *basename*.dll instead of *basename*.exe.<br /><br /> Implies **/MT** unless you explicitly specify **/MD**.|
|**/LDd**|Creates a debug DLL. Defines `_MT` and `_DEBUG`.|

For more information about C run-time libraries and which libraries are used when you compile with [/clr (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md), see [CRT Library Features](../../c-runtime-library/crt-library-features.md).

All modules passed to a given invocation of the linker must have been compiled with the same run-time library compiler option (**/MD**, **/MT**, **/LD**).

For more information about how to use the debug versions of the run-time libraries, see [C Run-Time Library Reference](../../c-runtime-library/c-run-time-library-reference.md).

For more about DLLs, see [Create C/C++ DLLs in Visual Studio](../dlls-in-visual-cpp.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Modify the **Runtime Library** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeLibrary%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
