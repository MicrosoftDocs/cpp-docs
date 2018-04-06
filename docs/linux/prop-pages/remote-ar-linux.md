---
title: "Remote Archive Properties (C++ Linux) | Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["vs-ide-general"]
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5ee1e44c-8337-4c3a-b2f3-35e4be954f9f
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords: [VC.Project.Ar.CreateIndex, VC.Project.Ar.CreateThinArchive, VC.Project.Ar.NoWarnOnCreate, VC.Project.Ar.TruncateTimestamp, VC.Project.Ar.SuppressStartupBanner, VC.Project.Ar.Verbose, vc.project.AdditionalOptionsPage, VC.Project.Ar.OutputFile, VC.Project.VCConfiguration.BuildLogFile]
ms.workload: ["cplusplus", "linux"]
---

# Remote Archive Properties (C++ Linux)

Property | Description
--- | ---
Create an archive index | Create an archive index (cf. ranlib).  This can speed up linking and reduce dependency within its own library.
Create Thin Archive | Create a thin archive.  A thin archive contains relativepaths to the objects instead of embedding the objects.  Switching between Thin and Normal requires deleting the existing library.
No Warning on Create | Do not warn if when the library is created.
Truncate Timestamp | Use zero for timestamps and uids/gids.
Suppress Startup Banner | Dont show version number.
Verbose | Verbose
Additional Options | Additional Options.
Output File | The /OUT option overrides the default name and location of the program that the lib creates.
Archiver | Specifies the program to invoke during linking of static objects, or the path to the archiver on the remote system.
Archiver Timeout | Remote archiver timeout, in milliseconds.
Copy Output | Specifies whether to copy the build output file from the remote system to the local machine.
