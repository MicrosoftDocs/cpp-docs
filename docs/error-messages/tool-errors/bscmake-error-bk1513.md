---
description: "Learn more about: BSCMAKE Error BK1513"
title: "BSCMAKE Error BK1513"
ms.date: "11/04/2016"
f1_keywords: ["BK1513"]
helpviewer_keywords: ["BK1513"]
ms.assetid: 9ba87c09-8d82-4c80-b0cf-a8de63dcf9da
---
# BSCMAKE Error BK1513

nonincremental update requires all .SBR files

BSCMAKE cannot build a new browse information (.bsc) file because one or more .sbr files are truncated. To find the names of the truncated .sbr files, read the [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) warnings that accompany this error.

BSCMAKE can update a .bsc file with a truncated .sbr file but cannot build a new one. BSCMAKE may build a new .bsc file for the following reasons:

- Missing .bsc file.

- Wrong filename specified for .bsc file.

- Corrupted .bsc file.

To resolve this issue, delete the truncated .sbr files and rebuild, or clean the solution and rebuild. (In the IDE, choose **Build**, **Clean Solution**, and then choose **Build**, **Rebuild Solution**.)
