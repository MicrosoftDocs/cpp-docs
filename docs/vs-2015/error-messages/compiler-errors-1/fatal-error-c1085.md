---
title: "Fatal Error C1085 | Microsoft Docs"
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
  - "C1085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1085"
ms.assetid: f2766365-d09b-4299-8a98-12e5aca98568
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1085
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1085](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1085).  
  
  
Cannot write filetype file: 'file': message  
  
### To fix by checking the following possible causes  
  
1.  Drive is read-only.  
  
2.  Drive is full.  
  
3.  Sharing violation.  
  
4.  If the message says "bad file number", the file may have been closing in the foreground while compiling in the background.

