---
description: "Learn more about: `/Yu` (Use precompiled header file)"
title: "/Yu (Use precompiled header file)"
ms.date: 07/31/2020
f1_keywords: ["/Yu"]
helpviewer_keywords: ["Yu compiler option [C++]", "/Yu compiler option [C++]", "-Yu compiler option [C++]", "PCH files, use existing", ".pch files, use existing", "precompiled header files, use existing"]
ms.assetid: 24f1bd0e-b624-4296-a17e-d4b53e374e1f
---
# `/Yu` (Use precompiled header file)

Instructs the compiler to use an existing precompiled header (*`.pch`*) file in the current compilation.

## Syntax

> **`/Yu`**\[*filename*]

## Arguments

*filename*<br/>
The name of a header file, which is included in the source file using a `#include` preprocessor directive.

## Remarks

The name of the include file must be the same for both the **`/Yc`** option that creates the precompiled header and for any later **`/Yu`** option that indicates use of the precompiled header.

For **`/Yc`**, *filename* specifies the point at which precompilation stops; the compiler precompiles all code though *filename* and names the resulting precompiled header using the base name of the include file and an extension of *`.pch`*.

The *`.pch`* file must have been created using **`/Yc`**.

The compiler treats all code occurring before the .h file as precompiled. It skips to just beyond the `#include` directive associated with the *`.h`* file, uses the code contained in the *`.pch`* file, and then compiles all code after *filename*.

On the command line, no space is allowed between **`/Yu`** and *filename*.

When you specify the **`/Yu`** option without a file name, your source program must contain a [`#pragma hdrstop`](../../preprocessor/hdrstop.md) pragma that specifies the file name of the precompiled header, *`.pch`* file. In this case, the compiler will use the precompiled header (*`.pch`* file) named by [`/Fp (Name .pch file)`](fp-name-dot-pch-file.md). The compiler skips to the location of that pragma and restores the compiled state from the specified precompiled header file. Then it compiles only the code that follows the pragma. If `#pragma hdrstop` doesn't specify a file name, the compiler looks for a file with a name derived from the base name of the source file with a *`.pch`* extension. You can also use the **`/Fp`** option to specify a different *`.pch`* file.

If you specify the **`/Yu`** option without a file name and fail to specify a `hdrstop` pragma, an error message is generated and the compilation is unsuccessful.

If the **`/Yc`**_filename_ and **`/Yu`**_filename_ options occur on the same command line and both reference the same file name, **`/Yc`**_filename_ takes precedence, precompiling all code up to and including the named file. This feature simplifies the writing of makefiles.

Because *`.pch`* files contain information about the machine environment and memory address information about the program, you should only use a *`.pch`* file on the machine where it was created.

For more information on precompiled headers, see:

- [`/Y` (Precompiled headers)](y-precompiled-headers.md)

- [Precompiled header files](../creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Specify [`/Yc` (Create precompiled header file)](yc-create-precompiled-header-file.md) on a .cpp file in your project.

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Precompiled Headers** property page.

1. Modify the **Precompiled Header** property, the **Create/Use PCH Through File** property, or the **Create/Use Precompiled Header** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.

## Example

If the following code:

```cpp
#include <afxwin.h>   // Include header for class library
#include "resource.h" // Include resource definitions
#include "myapp.h"    // Include information specific to this app
...
```

is compiled by using the command line `CL /YuMYAPP.H PROG.CPP`, the compiler doesn't process the three include statements. Instead, it uses precompiled code from *`MYAPP.pch`*, which saves the time involved in preprocessing all three of the files (and any files they might include).

You can use the [`/Fp (Name .pch file)`](fp-name-dot-pch-file.md) option with the **`/Yu`** option to specify the name of the *`.pch`* file if the name is different from either the *filename* argument to **`/Yc`** or the base name of the source file, as in the following example:

```cmd
CL /YuMYAPP.H /FpMYPCH.pch PROG.CPP
```

This command specifies a precompiled header file named *`MYPCH.pch`*. The compiler uses its contents to restore the precompiled state of all header files up to and including *`MYAPP.h`*. The compiler then compiles the code that occurs after the `#include "MYAPP.h"`* directive.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
