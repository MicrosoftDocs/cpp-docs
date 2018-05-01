---
title: "NMAKE Fatal Error U1095 | Microsoft Docs"
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
  - "U1095"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1095"
ms.assetid: a392582b-06db-4568-9c13-450293a4fbda
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Fatal Error U1095
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Fatal Error U1095](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-fatal-error-u1095).  
  
  
expanded command line 'commandline' too long  
  
 After macro expansion, the given command line exceeded the limit on length of command lines for the operating system.  
  
 MS-DOS permits up to 128 characters on a command line.  
  
 If the command is for a program that can accept command-line input from a file, change the command and supply input from either a file on disk or an inline file. For example, LINK and LIB accept input from a response file.

