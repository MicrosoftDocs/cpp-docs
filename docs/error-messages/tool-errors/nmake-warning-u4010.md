---
title: "NMAKE Warning U4010 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U4010"]
dev_langs: ["C++"]
helpviewer_keywords: ["U4010"]
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Warning U4010

'target' : build failed; /K specified, continuing ...

A command in the commands block for the given target returned a nonzero exit code. The /K option told NMAKE to continue processing unrelated parts of the build and to issue an exit code 1 when the NMAKE session is finished.

If the given target is, itself, a dependent for another target, NMAKE issues warning [U4011](../../error-messages/tool-errors/nmake-warning-u4011.md) after this warning.