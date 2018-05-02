---
title: "Linker Tools Error LNK1120 | Microsoft Docs"
ms.custom: ""
ms.date: "05/17/2017"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK1120"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1120"]
ms.assetid: 56aa7d36-921f-4daf-b44d-cca0d4fb1b51
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1120
*number* unresolved externals  
  
Error LNK1120 reports the count (*number*) of unresolved external symbol errors for this link operation. Most unresolved external symbol errors are reported individually by [Linker Tools Error LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md) and  [Linker Tools Error LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md), which precede this error message, once for each unresolved external symbol error.  
  
To fix this error, correct all of the other unresolved external errors or other linker errors that precede it in the build output. This error is not reported when no unresolved external errors remain.  
