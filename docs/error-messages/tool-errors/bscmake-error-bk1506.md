---
description: "Learn more about: BSCMAKE Error BK1506"
title: "BSCMAKE Error BK1506"
ms.date: "11/04/2016"
f1_keywords: ["BK1506"]
helpviewer_keywords: ["BK1506"]
ms.assetid: f51f8cea-f8fc-4323-bcf2-b7bd119792ee
---
# BSCMAKE Error BK1506

cannot open file 'filename' [: reason]

BSCMAKE cannot open the file.

### To fix by checking the following possible causes

1. File locked by another process. If `reason` says **Permission denied**, the browser may be using the file. Close the Browse window and retry the build.

1. A full disk.

1. A hardware error.

1. The specified output file has the same name as an existing subdirectory.
