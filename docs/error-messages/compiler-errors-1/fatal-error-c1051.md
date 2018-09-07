---
title: "Fatal Error C1051 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1051"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1051"]
ms.assetid: 87dcbd3b-0952-499a-bd42-64f9e8de2605
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1051
program database file, 'pdbfile', has an obsolete format, delete it and recompile  
  
 The compiler cannot update the program database file, which has an older version number. Delete the file and recompile your program with **/Zi** or **/ZI**. For more information, see [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md)