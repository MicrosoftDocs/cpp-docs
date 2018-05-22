---
title: "Linker Tools Warning LNK4237 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4237"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4237"
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4237
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4237](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4237).  
  
  
SUBSYSTEM:NATIVE specified when importing from 'dll'; Use /SUBSYSTEM:CONSOLE or /SUBSYSTEM:WINDOWS.  
  
 [/SUBSYSTEM:NATIVE](../../build/reference/subsystem-specify-subsystem.md) was specified when building a windows (Win32) application that directly uses one or more of the following:  
  
-   kernel32.dll  
  
-   gdi32.dll  
  
-   user32.dll  
  
-   one of the msvcrt* dlls.  
  
 Resolve this warning by not specifying **/SUBSYSTEM:NATIVE**.

