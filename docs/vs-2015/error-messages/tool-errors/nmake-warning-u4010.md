---
title: "NMAKE Warning U4010 | Microsoft Docs"
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
  - "U4010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U4010"
ms.assetid: 99d8eb9a-ae31-40d1-b8c5-8c66732127d3
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Warning U4010
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Warning U4010](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-warning-u4010).  
  
  
target' : build failed; /K specified, continuing ...  
  
 A command in the commands block for the given target returned a nonzero exit code. The /K option told NMAKE to continue processing unrelated parts of the build and to issue an exit code 1 when the NMAKE session is finished.  
  
 If the given target is, itself, a dependent for another target, NMAKE issues warning [U4011](../../error-messages/tool-errors/nmake-warning-u4011.md) after this warning.

