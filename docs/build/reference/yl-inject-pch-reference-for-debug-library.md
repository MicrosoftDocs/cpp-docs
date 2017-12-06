---
title: "-Yl (Inject PCH Reference for Debug Library) | Microsoft Docs"
ms.custom: ""
ms.date: "12/04/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["/yl"]
dev_langs: ["C++"]
helpviewer_keywords: ["-Yl compiler option [C++]", "Yl compiler option [C++]", "/Yl compiler option [C++]"]
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Yl (Inject PCH Reference for Debug Library)

The **/Yl** option creates a common symbol for a precompiled header file and injects references to this symbol in all files that use the precompiled header. This makes the complete type information for precompiled header symbols available to the debugger in all files that use the precompiled header. This option is enabled by default. Use of this option can prevent linker errors due to missing debug information in linked libraries that use precompiled headers.

## Syntax

>**/Yl**  
>**/Yl**_name_  
>**/Yl-**  

### Arguments

*name*  
An optional name used to define a symbol to be stored and referenced in object files that define or use the precompiled header.

*\-*  
A dash (-) explicitly disables the **/Yl** compiler option.

## Remarks

The **/Yl** option enables the debugger to get complete information about types in a precompiled header in every file that includes the precompiled header. This option creates an internal symbol name, injects the symbol definition in the object file used to create the precompiled header by the [/Yc](../../build/reference/yc-create-precompiled-header-file.md) option, and injects a reference to the symbol in all files that include the precompiled header by using the [/Yu](../../build/reference/yu-use-precompiled-header-file.md) compiler option. Because all source files that use the precompiled header refer to the named symbol, the linker always links the object file that defines the symbol and the associated precompiled header debugging information. This option is enabled by default.

The **/Yl**_name_ option is used to explicitly create the identifying symbol for the precompiled header file. The compiler uses the *name* argument to create a symbol similar to \_\_@@\_PchSym\_@00@...@*name*, where the ellipsis (...) represents a linker-generated character string. If the argument is omitted, the compiler generates a symbol name automatically.

**/Yl-** disables the default behavior and does not put an identifying symbol reference in the object files that include the precompiled header. This option may be required for files compiled without the precompiled header file present.

If you use **/Yl-**, **/Yc** and [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md) options to build a library, the compiler creates a precompiled header file that contains debugging information that is stored in an object file rather than a .pdb file. [LNK1211](../../error-messages/tool-errors/linker-tools-error-lnk1211.md) errors or [LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md) warnings can occur in builds that use this library and the precompiled header if the source file used to create the precompiled header does not define any symbols. The linker may exclude this library object file from the link, along with the associated precompiled header debug information, when nothing in the object file is referenced in the library client. To solve the problem, specify **/Yl** when you use **/Yc** to create a precompiled header file and **/Yu** to use it. This ensures that the object file that contains the debugging information is included in your build.

For more information on precompiled headers, see:

- [/Y (Precompiled Headers)](../../build/reference/y-precompiled-headers.md)

- [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Choose the **Command Line** property page in the **C/C++** folder.

1. Add the **/Yl**_name_ compiler option in the **Additional Options** box. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[Compiler Options](../../build/reference/compiler-options.md)  
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)  
