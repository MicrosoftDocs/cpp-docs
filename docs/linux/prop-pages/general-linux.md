---
title: "General Properties (Linux C++ Project)| Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["vs-ide-general"]
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 56c800a9-3df9-4196-87b2-81adb00e4767
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords: [VC.Project.VCConfiguration.OutputDirectory, VC.Project.VCConfiguration.IntermediateDirectory, VC.Project.VCConfiguration.TargetName, VC.Project.VCConfiguration.TargetExt, VC.Project.VCConfiguration.DeleteExtensionsOnClean, VC.Project.VCConfiguration.PlatformToolset, VC.Project.VCConfiguration.BuildLogFile, VC.Project.VCConfiguration.ConfigurationType, VC.Project.VCConfiguration.UseOfSTL]
ms.workload: ["cplusplus", "linux"]
---

# General Properties (Linux C++)

Property | Description | Choices
--- | ---| ---
Output Directory | Specifies a relative path to the output file directory; can include environment variables.
Intermediate Directory | Specifies a relative path to the intermediate file directory; can include environment variables.
Target Name | Specifies a file name that this project will generate.
Target Extension | Specifies a file extension that this project will generate. (Example: .a)
Extensions to Delete on Clean | Semi-colon delimited wildcard specification for which files in the intermediate directory to delete on clean or rebuild.
Build Log File | Specifies the build log file to write to when build logging is enabled.
Platform Toolset | Specifies the toolset used for building the current configuration; If not set, the default toolset is used
Remote Build Machine | The target machine or device to use for remote build, deploy and debug.
Remote Build Root Directory | Specifies a path to a directory on the remote machine or device.
Remote Build Project Directory | Specifies a path to a directory on the remote machine or device for the project.
Configuration Type | Specifies the type of output this configuration generates. | **Dynamic Library (.so)** - Dynamic Library (.so)<br>**Static library (.a)** - Static Library (.a)<br>**Application (.out)** - Application (.out)<br>**Makefile** - Makefile<br>
Use of STL | Specifies which C++ Standard Library to use for this configuration. | **Shared GNU Standard C++ Library**<br>**Static GNU Standard C++ Library (-static)**<br>
