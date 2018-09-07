---
title: "Linker Tools Warning LNK4237 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["LNK4237"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK4237"]
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Linker Tools Warning LNK4237
/SUBSYSTEM:NATIVE specified when importing from 'dll'; Use /SUBSYSTEM:CONSOLE or /SUBSYSTEM:WINDOWS.  
  
 [/SUBSYSTEM:NATIVE](../../build/reference/subsystem-specify-subsystem.md) was specified when building a windows (Win32) application that directly uses one or more of the following:  
  
-   kernel32.dll  
  
-   gdi32.dll  
  
-   user32.dll  
  
-   one of the msvcrt\* dlls.  
  
 Resolve this warning by not specifying **/SUBSYSTEM:NATIVE**.