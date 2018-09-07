---
title: "Project Build Error PRJ0002 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0002"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0002"]
ms.assetid: 1c820b1f-9a24-4681-80ed-4fcbfd7caa00
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0002

> error result returned from '*command line*'.

A command, *command line*, which was formed from user input in the **Property Pages** dialog box, returned an error code but no information will appear in the **Output** window.

The resolution to this error depends on which tool generated the error. For MIDL, you will get an idea of what went wrong if /o (Redirect Output) is defined.

A batch file, such as a custom build step or build event, that is not informative about failure conditions could also be the reason for this error.