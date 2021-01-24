---
description: "Learn more about: Project Build Error PRJ0050"
title: "Project Build Error PRJ0050"
ms.date: "11/04/2016"
f1_keywords: ["PRJ0050"]
helpviewer_keywords: ["PRJ0050"]
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
---
# Project Build Error PRJ0050

Failed to register output. Please ensure you have the appropriate permissions to modify the registry.

The Visual C++ build system was not able to register the output of the build (dll or .exe). You need to be logged on as an administrator to modify the registry.

If you are building a .dll, you can try to register the .dll manually using regsvr32.exe, this should display information about why the build failed.

If you are not building a .dll, look at the build log for the command that causes an error.
