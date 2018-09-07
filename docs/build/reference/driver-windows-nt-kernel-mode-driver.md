---
title: "-DRIVER (Windows NT Kernel Mode Driver) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.driver", "/driver"]
dev_langs: ["C++"]
helpviewer_keywords: ["kernel mode driver", "-DRIVER linker option", "DRIVER linker option", "/DRIVER linker option"]
ms.assetid: aeee8e28-5d97-40f5-ba16-9f370fe8a1b8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /DRIVER (Windows NT Kernel Mode Driver)

>/DRIVER[:UPONLY |:WDM]

## Remarks

Use the **/DRIVER** linker option to build a Windows NT kernel mode driver.

**/DRIVER:UPONLY** causes the linker to add the **IMAGE_FILE_UP_SYSTEM_ONLY** bit to the characteristics in the output header to specify that it is a uniprocessor (UP) driver. The operating system will refuse to load a UP driver on a multiprocessor (MP) system.

**/DRIVER:WDM** causes the linker to set the **IMAGE_DLLCHARACTERISTICS_WDM_DRIVER** bit in the optional header's DllCharacteristics field.

If **/DRIVER** is not specified, these bits are not set by the linker.

If **/DRIVER** is specified:

- **/FIXED:NO** is in effect. For more information, see [/FIXED (Fixed Base Address)](../../build/reference/fixed-fixed-base-address.md).

- The extension of the output file is set to .sys. Use **/OUT** to change the default filename and extension. For more information, see [/OUT (Output File Name)](../../build/reference/out-output-file-name.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **System** property page.

1. Modify the **Driver** property.

### To set this linker option programmatically

- See [VCLinkerTool.driver Property](https://docs.microsoft.com/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.driver?view=visualstudiosdk-2017#Microsoft_VisualStudio_VCProjectEngine_VCLinkerTool_driver).

## See Also

[Setting Linker Options](../../build/reference/setting-linker-options.md)   
[Linker Options](../../build/reference/linker-options.md)
