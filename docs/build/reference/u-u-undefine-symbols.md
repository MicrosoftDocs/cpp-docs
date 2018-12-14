---
title: "/U, /u (Undefine Symbols)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions", "VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions", "VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions", "/u", "VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions"]
helpviewer_keywords: ["-U compiler option [C++]", "Undefine Symbols compiler option", "/U compiler option [C++]", "U compiler option [C++]"]
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
---
# /U, /u (Undefine Symbols)

The **/U** compiler option undefines the specified preprocessor symbol. The **/u** compiler option undefines the Microsoft-specific symbols that the compiler defines.

## Syntax

```
/U[ ]symbol
/u
```

## Arguments

*symbol*<br/>
The preprocessor symbol to undefine.

## Remarks

Neither the **/U** or **/u** option can undefine a symbol created by using the **#define** directive.

The **/U** option can undefine a symbol that was previously defined by using the **/D** option.

By default, the compiler defines the following Microsoft-specific symbols.

|Symbol|Function|
|------------|--------------|
|_CHAR_UNSIGNED|Default char type is unsigned. Defined when the [/J](j-default-char-type-is-unsigned.md) option is specified.|
|_CPPRTTI|Defined for code compiled with the [/GR](gr-enable-run-time-type-information.md) option.|
|_CPPUNWIND|Defined for code compiled with the [/EHsc](eh-exception-handling-model.md) option.|
|_DLL|Defined when the [/MD](md-mt-ld-use-run-time-library.md) option is specified.|
|_M_IX86|By default, defined to 600 for x86 targets.|
|_MSC_VER|For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md).|
|_WIN32|Defined for WIN32 applications. Always defined.|
|_MT|Defined when the [/MD or /MT](md-mt-ld-use-run-time-library.md) option is specified.|

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Advanced** property page.

1. Modify the **Undefine Preprocessor Definitions** or **Undefine All Preprocessor Definitions** properties.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.

## See Also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/J (Default char Type Is unsigned)](j-default-char-type-is-unsigned.md)<br/>
[/GR (Enable Run-Time Type Information)](gr-enable-run-time-type-information.md)<br/>
[/EH (Exception Handling Model)](eh-exception-handling-model.md)<br/>
[/MD, /MT, /LD (Use Run-Time Library)](md-mt-ld-use-run-time-library.md)