---
title: "/LTCGOUT (Name LTCG incremental object file)"
description: "The MSVC linker option /LTCGOUT names the incremental link-time code generation object file."
ms.date: 08/31/2022
f1_keywords: ["VC.Project.VCLinkerTool.LinkTimeCodeGenerationObjectFile", "/ltcgout", "ltcgout"]
helpviewer_keywords: ["Name link-time code generation file in C++ linker", "/LTCGOUT linker option", "-LTCGOUT linker option", "LTCGOUT linker option"]
---
# `/LTCGOUT` (Name LTCG incremental object file)

The **`/LTCGOUT`** linker option tells the linker where to put the intermediate *`.iobj`* object file for incremental link-time code generation (**`/LTCG:INCREMENTAL`**).

## Syntax

> **`/LTCGOUT:`**\[*`pathname`*]

### Arguments

*`pathname`*\
The optional destination directory and filename for the generated *`.iobj`* file. If the **`/LTCGOUT`** option isn't specified when **`/LTCG:INCREMENTAL`** is used, the filename is created by appending *`.iobj`* to the target base filename. If the **`/LTCGOUT`** option is specified with an empty *`pathname`* when **`/LTCG:INCREMENTAL`** isn't used, no *`.iobj`* file is generated.

## Remarks

The **`/LTCGOUT`** linker option tells the linker the path and filename to use for the intermediate *`.iobj`* object file when you specify [`/LTCG:INCREMENTAL`](./ltcg-link-time-code-generation.md). If you remove the **`/LTCG:INCREMENTAL`** option from your project, you should also remove any **`/LTCGOUT`** option.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. Modify the **Link Time Code Generation Object File** property. The option isn't set if this property is empty.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
