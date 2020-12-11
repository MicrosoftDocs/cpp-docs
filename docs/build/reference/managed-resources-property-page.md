---
description: "Learn more about: Managed Resources Property Page"
title: "Managed Resources Property Page"
ms.date: "08/28/2019"
f1_keywords: ["VC.Project.VCManagedResourceCompilerTool.ResourceFileName", "VC.Project.VCManagedResourceCompilerTool.OutputFileName", "VC.Project.VCManagedResourceCompilerTool.DefaultLocalizedResources"]
helpviewer_keywords: ["Managed Resources property page"]
ms.assetid: 80b80384-ee55-494d-9f0e-907bb98cfc19
---
# Managed Resources Property Page

The **Managed Resources** property page exposes the following properties for the managed resource compiler [resgen.exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) when using .NET resources in C++/CLI programs:

- **Resource Logical Name**

   Specifies the *logical name* of the generated intermediate .resources file. The logical name is the name used to load the resource. If no logical name is specified, the resource (.resx) file name is used as the logical name.

- **Output File Name**

   Specifies the name of the final output file that the resource (.resx) file contributes to.

- **Default Localized Resources**

   Specifies whether the given .resx file contributes to the default resources or to a satellite .dll.

For information on how to access the **Managed Resources** property page, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

## See also

[Using RC (The RC Command Line)](/windows/win32/menurc/using-rc-the-rc-command-line-)<br>
[C++ project property page reference](property-pages-visual-cpp.md)<br>
[/ASSEMBLYRESOURCE (Embed a Managed Resource)](assemblyresource-embed-a-managed-resource.md)
