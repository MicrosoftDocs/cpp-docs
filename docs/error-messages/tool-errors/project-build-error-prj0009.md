---
description: "Learn more about: Project Build Error PRJ0009"
title: "Project Build Error PRJ0009"
ms.date: "11/04/2016"
f1_keywords: ["PRJ0009"]
helpviewer_keywords: ["PRJ0009"]
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
---
# Project Build Error PRJ0009

Build log could not be opened for writing.

**Make sure that the file is not open by another process and is not write-protected.**

After setting the **Build Logging** property to **Yes** and performing a build or rebuild, Visual C++ was unable to open the build log in exclusive mode.

Inspect the **Build Logging** setting by opening the **Options** dialog box (on the **Tools** menu, click **Options** command) and then selecting **VC++ Build** in the **Projects** folder. The build file is called BuildLog.htm and is written to the intermediate directory $(IntDir).

Possible reasons for this error:

- You are running two processes of Visual C++ and trying to build the same configuration of the same project in both simultaneously.

- The build log file is opened in a process that locks the file.

- The user does not have permission to create a file.

- The current user does not have write access to the file BuildLog.htm.
