---
title: "Custom Build Step Properties (Linux C++) | Microsoft Docs"
ms.custom: ""
ms.date: "10/17/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["vs-ide-general"]
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 77a9c1fb-7c41-4a9b-9418-18ac17ce4e74
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords: [VC.Project.IVCEventTool.CommandLine, VC.Project.IVCEventTool.Description, VC.Project.IVCEventTool.ExcludedFromBuild, VC.Project.VCConfiguration.BuildLogFile]
ms.workload: ["cplusplus", "linux"]
---

# Custom Build Step Properties (Linux C++)


Property | Description
--- | ---
Command Line | The command to be executed by the custom build step.
Description | A message that's displayed when the custom build step runs.
Outputs | The output file that the custom build step generates. This setting is required so that incremental builds work correctly.
Additional Dependencies | A semicolon-delimited list of any additional input files to use for the custom build step.
Execute After and Execute Before | These options define when the custom build step is run in the build process, relative to the listed targets. The most commonly listed targets are BuildGenerateSources, BuildCompile, and BuildLink, because they represent the major steps in the build process. Other often-listed targets are Midl, CLCompile, and Link.
Treat Output As Content | This option is only meaningful for Windows Store or Windows Phone apps, which include all content files in the .appx package.