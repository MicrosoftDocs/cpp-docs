---
title: "Compiler Warning (level 1) C4819 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4819"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4819"]
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4819

The file contains a character that cannot be represented in the current code page (number). Save the file in Unicode format to prevent data loss.

C4819 occurs when an ANSI source file is compiled on a system with a codepage that cannot represent all characters in the file.

To resolve C4819, save the file in Unicode format. In Visual Studio, choose **File**, **Advanced Save Options**. In the **Advanced Save Options** dialog box, select an encoding that can represent all the characters in the file—for example, UTF-8—and then choose **OK**.