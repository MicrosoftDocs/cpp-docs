---
title: "Project Build Error PRJ0035 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0035"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0035"]
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0035

> XML file '*file*' contains Unicode contents that could not be translated to user's ANSI code page.
>
> *UNICODE contents of file*

*file* is the XML file created as the command line to the Web Deployment tool.

The project system found Unicode characters in some property on the Web Deployment property page that can't properly be translated to ANSI.

The resolution for this error is to update the contents of the property to use ANSI or to install the code page on your computer and set it as the system default.