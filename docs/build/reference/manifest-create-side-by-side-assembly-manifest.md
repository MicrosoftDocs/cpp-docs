---
description: "Learn more about: /MANIFEST (Create side-by-side assembly manifest)"
title: "/MANIFEST (Create side-by-side assembly manifest)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.GenerateManifest", "VC.Project.VCLinkerTool.ManifestEmbed"]
helpviewer_keywords: ["-MANIFEST linker option", "/MANIFEST linker option", "MANIFEST linker option"]
ms.assetid: 98c52e1e-712c-4f49-b149-4d0a3501b600
---
# `/MANIFEST` (Create side-by-side assembly manifest)

Specifies whether the linker should create a side-by-side manifest file.

## Syntax

> **`/MANIFEST`**\[**`:`**{**`EMBED`**\[**`,ID=`***`resource_id`*]\|**`NO`**}]

## Remarks

The **`/MANIFEST`** linker option tells the linker to create a side-by-side manifest file. For more information about manifest files, see [Manifest files reference](/windows/win32/SbsCs/manifest-files-reference).

The default is **`/MANIFEST`**.

The **`/MANIFEST:EMBED`** option specifies that the linker should embed the manifest file in the image as a resource of type `RT_MANIFEST`. The optional `ID` parameter sets the resource ID to use for the manifest. Use a *`resource_id`* value of 1 for an executable file. Use a value of 2 for a DLL to enable it to specify private dependencies. If the `ID` parameter isn't specified, the default value is 2 if the **`/DLL`** option is set; otherwise, the default value is 1.

Beginning with Visual Studio 2008, manifest files for executables contain a section that specifies User Account Control (UAC) information. If you specify **`/MANIFEST`** but don't specify either [`/MANIFESTUAC`](manifestuac-embeds-uac-information-in-manifest.md) or [`/DLL`](dll-build-a-dll.md), a default UAC fragment that has the UAC level set to *`asInvoker`* is inserted into the manifest. For more information about UAC levels, see [`/MANIFESTUAC` (Embeds UAC information in manifest)](manifestuac-embeds-uac-information-in-manifest.md).

To change the default behavior for UAC, set one of these options:

- Specify the **`/MANIFESTUAC`** option and set the UAC level to the desired value.

- Or, specify the **`/MANIFESTUAC:NO`** option if you don't want to generate a UAC fragment in the manifest.

If you don't specify **`/MANIFEST`** but do specify [`/MANIFESTDEPENDENCY`](manifestdependency-specify-manifest-dependencies.md) attributes, a manifest file is created. A manifest file isn't created if you specify **`/MANIFEST:NO`**.

If you specify **`/MANIFEST`**, the name of the manifest file is the same as the full name of your output file, but with *`.manifest`* appended to the file name. For example, if your output file name is *`MyFile.exe`*, the manifest file name is *`MyFile.exe.manifest`*.  If you specify **`/MANIFESTFILE:`***`name`*, the name of the manifest is what you specify in *`name`*.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Manifest File** property page.

1. Modify the **Generate Manifest** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateManifest%2A>.

## See also

[Manifest files reference](/windows/win32/SbsCs/manifest-files-reference)\
[`/MANIFESTDEPENDENCY` (Specify manifest dependencies)](./manifestdependency-specify-manifest-dependencies.md)\
[`/MANIFESTFILE` (Name manifest file)](./manifestfile-name-manifest-file.md)\
[`/MANIFESTUAC` (Embeds UAC information in manifest)](./manifestuac-embeds-uac-information-in-manifest.md)\
[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
