---
title: "Project Build Error PRJ0036 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0036"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0036"]
ms.assetid: ee215cd1-2d66-474d-9a63-b9096f1c4923
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0036

The 'Additional Files' property for the Web Deployment Tool contained an invalid entry.

The Additional Files property on the Web Deployment property page contained an error, possibly due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.

To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.

This error could also mean that one of the files referenced doesn't exist.