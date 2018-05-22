---
title: "NMAKE Fatal Error U1035 | Microsoft Docs"
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
  - "U1035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1035"
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Fatal Error U1035
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Fatal Error U1035](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-fatal-error-u1035).  
  
  
syntax error : expected ':' or '=' separator  
  
 Either a colon (**:**) or an equal sign (**=**) was expected.  
  
### To fix by checking the following possible causes  
  
1.  A colon did not follow a target.  
  
2.  A colon and no space (such as a:) followed a single-letter target. NMAKE interpreted it as a drive specification.  
  
3.  A colon did not follow an inference rule.  
  
4.  A macro definition was not followed by an equal sign.  
  
5.  A character followed a backslash (**\\**) that was used to continue a command to a new line.  
  
6.  A string appeared that did not follow any NMAKE syntax rule.  
  
7.  The makefile was formatted by a word processor.

