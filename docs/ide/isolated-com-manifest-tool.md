---
title: "Manifest Tool Isolated COM Properties (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["VC.Project.VCManifestTool.RegistrarScriptFile", "VC.Project.VCManifestTool.ComponentFileName", "VC.Project.VCManifestTool.TypeLibraryFile", "VC.Project.VCManifestTool.ReplacementsFile"]
dev_langs: ["C++"]
ms.assetid: 457582b8-cfde-49c0-92e3-3a6b9e8c08eb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Isolated COM, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box

Use this dialog box to specify **Isolated COM** options for [Mt.exe](https://msdn.microsoft.com/library/aa375649).

To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Common Properties**, and then select **Isolated COM**.

## Task List

- [How to: Build Isolated Applications to Consume COM Components](../build/how-to-build-isolated-applications-to-consume-com-components.md)

## UIElement List

- **Type Library File**

   Uses the /tlb option to specify the name of the type library file (.tlb file) that the manifest tool will use to generate the manifest file.

- **Registrar Script File**

   Uses the /rgs option to specify the name of the registrar script file (.rgs file) that the manifest tool will use to generate the manifest file.

- **Component File Name**

   Uses the /dll option to specify the name of the resource that the manifest tool will generate. You must enter a value for this property when values for either **Type Library File** or **Registrar Script File** are specified.

- **Replacements File**

   Uses the /replacements option to specify the full path to the file that contains values for replaceable strings in the .rgs file.

## See Also

[Isolated Applications](/windows/desktop/SbsCs/isolated-applications)<br>
[ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)<br>
[Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)<br>
[Working with Project Properties](../ide/working-with-project-properties.md)