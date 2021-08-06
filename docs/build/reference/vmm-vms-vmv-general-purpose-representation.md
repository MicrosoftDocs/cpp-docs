---
description: "Learn more about: /vmm, /vms, /vmv (General Purpose Representation)"
title: "/vmm, /vms, /vmv (General Purpose Representation)"
ms.date: 04/12/2021
f1_keywords: ["/vms", "/vmm", "/vmv"]
helpviewer_keywords: ["Virtual Inheritance compiler option", "general purpose representation compiler options", "vms compiler option [C++]", "vmm compiler option [C++]", "/vmm compiler option [C++]", "-vmm compiler option [C++]", "-vms compiler option [C++]", "/vms compiler option [C++]", "vmv compiler option [C++]", "/vmv compiler option [C++]", "Single Inheritance compiler option", "-vmv compiler option [C++]"]
---
# `/vmm`, `/vms`, `/vmv` (General Purpose Representation)

Used when [`/vmg`](vmb-vmg-representation-method.md) is selected as the [representation method](vmb-vmg-representation-method.md). These options indicate the inheritance model of the not-yet-encountered class definition.

## Syntax

> **`/vmm`**\
> **`/vms`**\
> **`/vmv`**

### Options

**`/vmm`**\
Specifies the most general representation of a pointer to a member of a class as one that uses multiple inheritance.

The corresponding [inheritance keyword](../../cpp/inheritance-keywords.md) and argument to [`#pragma pointers_to_members`](../../preprocessor/pointers-to-members.md) is **`multiple_inheritance`**.

This representation is larger than the one required for single inheritance.

If you use **`/vmm`** and declare a pointer to member of a class that has a virtual inheritance model, the compiler generates an error.

**`/vms`**\
Specifies the most general representation of a pointer to a member of a class as one that uses either no inheritance or single inheritance.The corresponding [inheritance keyword](../../cpp/inheritance-keywords.md) and argument to [`#pragma pointers_to_members`](../../preprocessor/pointers-to-members.md) is **`single_inheritance`**.

This option generates the smallest possible representation of a pointer to a member of a class.

If you use **`/vms`** and declare a pointer to member of a class that has a multiple or virtual inheritance model, the compiler generates an error.

**`/vmv`**\
Specifies the most general representation of a pointer to a member of a class as one that uses virtual inheritance. This pointer representation never causes an error and is the default.

The corresponding [inheritance keyword](../../cpp/inheritance-keywords.md) and argument to [`#pragma pointers_to_members`](../../preprocessor/pointers-to-members.md) is **`virtual_inheritance`**.

This option requires a larger pointer and more code to interpret the pointer than the other options.

## Remarks

In Visual Studio 2019 and earlier versions, Microsoft uses different representations (of different sizes) for pointer-to-member types. Pointers to members of classes that have no inheritance or single inheritance have the smallest representation. Pointers to members of classes that have multiple inheritance are larger. Pointers to members of classes that have virtual inheritance are the largest. When no representation model is specified to the compiler, it defaults to using the largest, most general representation.

When you specify one of these inheritance-model options, that model gets used for all pointers to class members, no matter their inheritance type or whether you declare the pointer before or after the class. If you always use single-inheritance classes, you can reduce code size by compiling with **`/vms`**. However, if you want to use the most general case (at the expense of the largest data representation), compile with **`/vmv`**.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/vmb`, `/vmg` (Representation method)](vmb-vmg-representation-method.md)<br/>
[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
