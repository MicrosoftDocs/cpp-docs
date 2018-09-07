---
title: "Project Build Error PRJ0026 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0026"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0026"]
ms.assetid: c52bc9b5-8b22-4015-b477-8645ae56c489
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0026

> Response file '*file*' contains Unicode contents that could not be translated to user's ANSI code page.
>
> *UNICODE contents of file*

The project system found Unicode contents in a response file that cannot be translated properly to the user's current ANSI code page.

The resolution for this error is to update the contents of the response file to use ANSI or to install the code page on your computer and set it as the system default.