---
title: "Managed Resources Property Page"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCManagedResourceCompilerTool.ResourceFileName", "VC.Project.VCManagedResourceCompilerTool.OutputFileName", "VC.Project.VCManagedResourceCompilerTool.DefaultLocalizedResources"]
helpviewer_keywords: ["Managed Resources property page"]
ms.assetid: 80b80384-ee55-494d-9f0e-907bb98cfc19
---
# Managed Resources Property Page

Enables settings for the resource compiler.

The **Managed Resources** property page contains the following properties:

- **Resource Logical Name**

   Specifies the *logical name* of the generated intermediate .resources file. The logical name is the name used to load the resource. If no logical name is specified, the resource (.resx) file name is used as the logical name.

- **Output File Name**

   Specifies the name of the final output file that the resource (.resx) file contributes to.

- **Default Localized Resources**

   Specifies whether the given .resx file contributes to the default resources or to a satellite .dll.

For information on how to access the **Managed Resources** property page, see [Working with Project Properties](../ide/working-with-project-properties.md).

## See Also

[Using RC (The RC Command Line)](/windows/desktop/menurc/using-rc-the-rc-command-line-)<br>
[Property Pages](../ide/property-pages-visual-cpp.md)<br>
[/ASSEMBLYRESOURCE (Embed a Managed Resource)](../build/reference/assemblyresource-embed-a-managed-resource.md)