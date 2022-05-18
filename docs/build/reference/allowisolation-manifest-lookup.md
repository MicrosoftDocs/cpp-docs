---
description: "Learn more about: /ALLOWISOLATION (Manifest lookup)"
title: "/ALLOWISOLATION (Manifest lookup)"
ms.date: 05/11/2022
f1_keywords: ["/ALLOWISOLATION", "VC.Project.VCLinkerTool.AllowIsolation"]
helpviewer_keywords: ["-ALLOWISOLATION linker option", "/ALLOWISOLATION linker option"]
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
---
# `/ALLOWISOLATION` (Manifest lookup)

Specifies behavior for manifest lookup.

## Syntax

> **`/ALLOWISOLATION`**\[**`:NO`**]

## Remarks

The **`/ALLOWISOLATION:NO`** linker option indicates DLLs are loaded as if there was no manifest and causes the linker to set the `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit in the optional header's `DllCharacteristics` field.

**`/ALLOWISOLATION`** causes the operating system to do manifest lookups and loads.

**`/ALLOWISOLATION`** is the default.

When isolation is disabled for an executable, the Windows loader won't attempt to find an application manifest for the newly created process. The new process won't have a default activation context, even if there's a manifest inside the executable or placed in the same directory as the executable with name *`<executable-name>.exe.manifest`*.

For more information, see [Manifest files reference](/windows/win32/SbsCs/manifest-files-reference).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Manifest File** property page.

1. Modify the **Allow Isolation** property.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
