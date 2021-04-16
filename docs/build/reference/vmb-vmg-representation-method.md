---
description: "Learn more about: /vmb, /vmg (Representation method)"
title: "/vmb, /vmg (Representation Method)"
ms.date: 04/12/2021
f1_keywords: ["/vmb", "/vmg"]
helpviewer_keywords: ["vmb compiler option [C++]", "-vmg compiler option [C++]", "vmg compiler option [C++]", "-vmb compiler option [C++]", "/vmb compiler option [C++]", "representation method compiler options [C++]", "/vmg compiler option [C++]"]
---
# `/vmb`, `/vmg` (Representation method)

Select the method that the compiler uses to represent pointers to class members.

## Syntax

> **`/vmb`**\
> **`/vmg`**

### Options

**`/vmb`** is the compiler's default behavior. Its behavior is the same as `#pragma pointers_to_members(best_case)`. It doesn't require or ensure complete types. For complete types, it uses the best representation among single, multiple, or virtual inheritance based the inheritance of the class type. For incomplete types, it uses the largest, most general representation.

**`/vmg`** lets you specify compiler behavior in combination with [`/vmm`, `/vms`, `/vmv` (General purpose representation)](./vmm-vms-vmv-general-purpose-representation.md) to declare a pointer to a member of a class before defining the class. This need can arise if you define members in two different classes that reference each other. For such mutually referencing classes, one class must be referenced before it's defined.

## Remarks

You can also use [`#pragma pointers_to_members`](../../preprocessor/pointers-to-members.md) or [Inheritance keywords](../../cpp/inheritance-keywords.md) in your code to specify a pointer representation.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
