---
title: "Remote Build Events (Linux C++ Makefile Projects) | Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e95a88ab-509c-44e4-a23e-b070da8b17a6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords:
  - VC.Project.IVCEventTool.CommandLine
  - VC.Project.IVCEventTool.Description
  - VC.Project.IVCEventTool.ExcludedFromBuild
  - VC.Project.VCConfiguration.BuildLogFile
---

# Remote Build Events (Linux C++ Makefile Projects)

Property | Description
--- | ---
Command Line | Specifies a command line for the pre-build event tool to run.
Description | Specifies a description for the pre-build event tool to display.
Use In Build | Specifies whether this build event is excluded from the build for the current configuration.
Additional files to copy | Specifies additional files to copy to the remote system. Optionally the list can be provided as a local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system.
Command Line | Specifies a command line for the post-build event tool to run.
Description | Specifies a description for the post-build event tool to display.
Use In Build | Specifies whether this build event is excluded from the build for the current configuration.
Additional files to copy | Specifies additional files to copy to the remote system. Optionally the list can be provided as a local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system.
Command Line | Specifies a command line for the pre-build event tool to run on the remote system.
Description | Specifies a description for the pre-build event tool to display.
Use In Build | Specifies whether this build event is excluded from the build for the current configuration.
Additional files to copy | Specifies additional files to copy from the remote system. Optionally the list can be provided as a remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine.
Command Line | Specifies a command line for the post-build event tool to run on the remote system.
Description | Specifies a description for the post-build event tool to display.
Use In Build | Specifies whether this build event is excluded from the build for the current configuration.
Additional files to copy | Specifies additional files to copy from the remote system. Optionally the list can be provided as a remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine.
