---
title: "General Properties (Linux C++ Makefile Project)| Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3dec6853-43f6-412b-9806-9bfad333a204
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords:
  - VC.Project.VCConfiguration.OutputDirectory
  - VC.Project.VCConfiguration.IntermediateDirectory
  - VC.Project.VCConfiguration.ConfigurationType
  - VC.Project.VCConfiguration.BuildLogFile
---

# General Properties (Linux C++ Makefile Project)

Property | Description | Choices
--- | ---| ---
Output Directory | Specifies a relative path to the output file directory; can include environment variables.
Intermediate Directory | Specifies a relative path to the intermediate file directory; can include environment variables.
Build Log File | Specifies the build log file to write to when build logging is enabled.
Configuration Type | Specifies the type of output this configuration generates. | **Dynamic Library (.so)** - Dynamic Library (.so)<br>**Static library (.a)** - Static Library (.a)<br>**Application (.out)** - Application (.out)<br>**Makefile** - Makefile<br>
Remote Build Machine | The target machine or device to use for remote build, deploy and debug.
Remote Build Root Directory | Specifies a path to a directory on the remote machine or device.
Remote Build Project Directory | Specifies a path to a directory on the remote machine or device for the project.
