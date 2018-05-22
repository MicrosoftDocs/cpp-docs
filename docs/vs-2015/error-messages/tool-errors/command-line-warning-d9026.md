---
title: "Command-Line Warning D9026 | Microsoft Docs"
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
  - "D9026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9026"
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Command-Line Warning D9026
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Command-Line Warning D9026](https://docs.microsoft.com/cpp/error-messages/tool-errors/command-line-warning-d9026).  
  
  
options apply to entire command line  
  
 An option was specified on a command after a filename was specified. The option was applied to the file that preceded it.  
  
 For example, in the command  
  
```  
CL verdi.c /G5 puccini.c  
```  
  
 the file VERDI.c will be compiled using the /G5 option, not the /G4 default.  
  
 This behavior is different from that of some previous versions, which applied only the options specified before the filename, resulting in VERDI.c being compiled using /G4 and PUCCINI.c being compiled using /G5.

