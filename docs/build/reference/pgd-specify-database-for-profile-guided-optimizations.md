---
title: "/PGD (Specify Database for Profile-Guided Optimizations) | Microsoft Docs"
ms.custom: ""
ms.date: "03/14/2018"
ms.technology: ["cpp-tools"]
ms.topic: "article"
f1_keywords: ["VC.Project.VCLinkerTool.ProfileGuidedDatabase"]
dev_langs: ["C++"]
helpviewer_keywords: ["-PGD linker option", "/PGD linker option"]
ms.assetid: 9f312498-493b-461f-886f-92652257e443
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /PGD (Specify Database for Profile-Guided Optimizations)

**The /PGD option is deprecated.** Starting in Visual Studio 2015, prefer the [/GENPROFILE or /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) linker options instead. This option is used to specify the name of the .pgd file used by the profile-guided optimization process.

## Syntax

> **/PGD:**_filename_

## Argument

*filename*<br/>
Specifies the name of the .pgd file that is used to hold information about the running program.

## Remarks

When using the deprecated [/LTCG:PGINSTRUMENT](../../build/reference/ltcg-link-time-code-generation.md) option, use **/PGD** to specify a nondefault name or location for the .pgd file. If you do not specify **/PGD**, the .pgd file base name is the same as the output file (.exe or .dll) base name and is created in the same directory from which the link was invoked.

When using the deprecated **/LTCG:PGOPTIMIZE** option, use the **/PGD** option to specify the name of the .pgd file to use to create the optimized image. The *filename* argument should match the *filename* specified to **/LTCG:PGINSTRUMENT**.

For more information, see [Profile Guided Optimization](../../build/reference/profile-guided-optimizations.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. Modify the **Profile Guided Database** property. Choose **OK** to save your changes.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProfileGuidedDatabase%2A>.

## See also

[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)<br/>
