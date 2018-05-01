---
title: "NMAKE Fatal Error U1056 | Microsoft Docs"
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
  - "U1056"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1056"
ms.assetid: da855728-b69e-413c-83ed-df912126215e
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Fatal Error U1056
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Fatal Error U1056](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-fatal-error-u1056).  
  
  
cannot find command processor  
  
 The command processor was not in the path specified in the **COMSPEC** or **PATH** environment variables.  
  
 NMAKE uses COMMAND.COM or CMD.EXE as a command processor when executing commands. It looks for the command processor first in the path set in **COMSPEC**. If **COMSPEC** does not exist, NMAKE searches the directories specified in **PATH**.

