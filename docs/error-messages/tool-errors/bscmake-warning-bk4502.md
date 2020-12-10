---
description: "Learn more about: BSCMAKE Warning BK4502"
title: "BSCMAKE Warning BK4502"
ms.date: "11/04/2016"
f1_keywords: ["BK4502"]
helpviewer_keywords: ["BK4502"]
ms.assetid: ee412ec8-df03-4cdb-91ee-5d609ded8691
---
# BSCMAKE Warning BK4502

truncated .SBR file 'filename' not in filename

A zero-length .sbr file that was not originally part of the .bsc file was specified during an update.

### To fix by checking the following possible causes

1. Wrong filename specified.

1. File deleted. (Error [BK1513](../../error-messages/tool-errors/bscmake-error-bk1513.md) results.)

1. File corrupted, requiring BSCMAKE to do a full build.
