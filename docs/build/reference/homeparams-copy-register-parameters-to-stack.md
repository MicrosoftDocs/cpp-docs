---
title: "/homeparams (Copy Register Parameters to Stack)"
ms.date: "11/04/2016"
f1_keywords: ["/homeparams"]
helpviewer_keywords: ["/homeparams compiler option [C++]", "-homeparams compiler option [C++]"]
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
---
# /homeparams (Copy Register Parameters to Stack)

Forces parameters passed in registers to be written to their locations on the stack upon function entry.

## Syntax

```
/homeparams
```

## Remarks

This compiler option is only for the x64 compilers (native and cross compile).

When parameters are passed in an x64 compilation, calling conventions require stackspace for parameters, even for parameters passed in registers. For more information, see [Parameter Passing](../../build/parameter-passing.md). However, by default in a release build, the register parameters will not be written to the stack, into the space that is already provided for the parameters. This makes it difficult to debug an optimized (release) build of your program.

For a release build, use **/homeparams** to ensure that you can debug your application. **/homeparams** does imply a performance disadvantage, because it does require a cycle to load the register parameters on to the stack.

In a debug build, the stack is always populated with parameters passed in registers.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](../compiler-command-line-syntax.md)