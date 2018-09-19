---
title: "General Property Page (File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["VC.Project.VCFileConfiguration.ExcludedFromBuild", "VC.Project.VCFileConfiguration.Tool"]
dev_langs: ["C++"]
ms.assetid: 26e3711e-9e7d-4e8d-bc4c-2474538efdad
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# General Property Page (File)

When a file is selected in **Solution Explorer**, the **General** property page under the **Configuration Properties** node contains the following properties:

- **Exclude From Build**

   Specifies whether the file should be in the build for the current configuration.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCFileConfiguration.ExcludedFromBuild%2A>.

- **Tool**

   The tool that will be used to build this file. See [Specifying Custom Build Tools](../ide/specifying-custom-build-tools.md) for more information.

   To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCFileConfiguration.Tool%2A>.

For information on how to access the **General** property page under the **Configuration Properties** node, see [Working with Project Properties](../ide/working-with-project-properties.md).

For non-Windows projects, see [Linux C++ Property Page Reference](../linux/prop-pages-linux.md)<!-- or [C++ Cross Platform Property Page Reference](../linux/prop-pages-linux.md)-->.

## See also

[Property Pages](../ide/property-pages-visual-cpp.md)