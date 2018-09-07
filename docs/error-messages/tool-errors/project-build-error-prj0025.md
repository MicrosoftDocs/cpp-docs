---
title: "Project Build Error PRJ0025 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0025"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0025"]
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0025

> Batch file '*file*' contains Unicode contents that could not be translated to user's ANSI code page.
>
> *UNICODE contents of file*

The project system found Unicode contents in a custom build rule or build event that cannot be translated properly to the user's current ANSI code page.

The resolution for this error is to update the contents of the build rule or build event to use ANSI or to install the code page on your computer and set it as the system default.

For more information on custom build steps and build events, see [Understanding Custom Build Steps and Build Events](../../ide/understanding-custom-build-steps-and-build-events.md).