---
description: "Learn more about: BSCMAKE Error BK1517"
title: "BSCMAKE Error BK1517"
ms.date: "11/04/2016"
f1_keywords: ["BK1517"]
helpviewer_keywords: ["BK1517"]
ms.assetid: 24391f42-0a3e-40a9-9991-c8b9a6a7b1c7
---
# BSCMAKE Error BK1517

source file for sbrfile compiled with both /Yc and /Yu

The .sbr file refers to itself. It was probably recompiled with /Yu after compiling with /Yc. Reset the compiler option for the source file to /Yc, then select **Rebuild** to generate new .sbr files. Do not recompile the source file with /Yu.
