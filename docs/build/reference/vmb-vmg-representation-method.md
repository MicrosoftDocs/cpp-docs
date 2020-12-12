---
description: "Learn more about: /vmb, /vmg (Representation Method)"
title: "/vmb, /vmg (Representation Method)"
ms.date: "11/04/2016"
f1_keywords: ["/vmb", "/vmg"]
helpviewer_keywords: ["vmb compiler option [C++]", "-vmg compiler option [C++]", "vmg compiler option [C++]", "-vmb compiler option [C++]", "/vmb compiler option [C++]", "representation method compiler options [C++]", "/vmg compiler option [C++]"]
ms.assetid: ecdb391c-7dab-40b1-916b-673d10889fd4
---
# /vmb, /vmg (Representation Method)

Select the method that the compiler uses to represent pointers to class members.

Use **/vmb** if you always define a class before you declare a pointer to a member of the class.

Use **/vmg** to declare a pointer to a member of a class before defining the class. This need can arise if you define members in two different classes that reference each other. For such mutually referencing classes, one class must be referenced before it is defined.

## Syntax

```
/vmb
/vmg
```

## Remarks

You can also use [pointers_to_members](../../preprocessor/pointers-to-members.md) or [Inheritance Keywords](../../cpp/inheritance-keywords.md) in your code to specify a pointer representation.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
