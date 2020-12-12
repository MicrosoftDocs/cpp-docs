---
description: "Learn more about: /CLRIMAGETYPE (Specify Type of CLR Image)"
title: "/CLRIMAGETYPE (Specify Type of CLR Image)"
ms.date: "05/16/2019"
f1_keywords: ["/CLRIMAGETYPE", "VC.Project.VCLinkerTool.CLRImageType"]
helpviewer_keywords: ["/CLRIMAGETYPE linker option", "-CLRIMAGETYPE linker option"]
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
---
# /CLRIMAGETYPE (Specify Type of CLR Image)

Set the CLR image type in the linked image.

## Syntax

> **/CLRIMAGETYPE:**{**IJW**|**PURE**|**SAFE**|**SAFE32BITPREFERRED**}

## Remarks

The linker accepts native objects and also MSIL objects that are compiled by using [/clr](clr-common-language-runtime-compilation.md). The **/clr:pure** and **/clr:safe** compiler options were deprecated in Visual Studio 2015 and are unsupported in Visual Studio 2017 and later. When mixed objects in the same build are passed, the verifiability of the resulting output file is, by default, equal to the lowest level of verifiability of the input modules. For example, if you pass a native image and a mixed mode image (compiled by using **/clr**), the resulting image will be a mixed mode image.

You can use **/CLRIMAGETYPE** to specify a lower level of verifiability, if that is what you need.

For information about how to determine the CLR image type of a file, see [/CLRHEADER](clrheader.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Advanced** property page.

1. Modify the **CLR Image Type** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.

## See also

- [MSVC linker reference](linking.md)
- [MSVC Linker Options](linker-options.md)
