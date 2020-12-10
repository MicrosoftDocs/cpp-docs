---
description: "Learn more about: /ALIGN (Section Alignment)"
title: "/ALIGN (Section Alignment)"
ms.date: "12/29/2017"
f1_keywords: ["VC.Project.VCLinkerTool.Alignment", "/align"]
helpviewer_keywords: ["sections, specifying alignment", "ALIGN linker option", "/ALIGN linker option", "-ALIGN linker option", "section alignment", "sections"]
---
# /ALIGN (Section Alignment)

## Syntax

> **/ALIGN**[**:**_number_]

### Arguments

*number*<br/>
The alignment value in bytes.

## Remarks

The **/ALIGN** option specifies the alignment of each section within the linear address space of the program. The *number* argument is in bytes and must be a power of two. The default is 4K (4096). The linker issues a warning if the alignment produces an invalid image.

Unless you are writing an application such as a device driver, you should not need to modify the alignment.

It is possible to modify the alignment of a particular section with the align parameter to the [/SECTION](section-specify-section-attributes.md) option.

The alignment value that you specify cannot be smaller than the largest section alignment.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Choose the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option in the **Additional Options** box. Choose **OK** or **Apply** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
