---
title: "Project Build Warning PRJ0029 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0029"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0029"]
ms.assetid: f02c09c6-09f3-4d44-8cd4-9a25336be1ea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Warning PRJ0029

The 'Outputs' property for the project-level custom build step is not set. The custom build step will be skipped.

A custom build step was not executed because no output was specified.

To resolve this error, do one the following:

- Exclude the custom build step from the build.

- Add an output.

- Delete the contents of the custom build step's command.