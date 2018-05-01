---
title: "Fatal Error C1055 | Microsoft Docs"
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
  - "C1055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1055"
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1055
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1055](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1055).  
  
  
compiler limit : out of keys  
  
 The source file contains too many symbols. The compiler ran out of hash keys for the symbol table.  
  
### To fix by using the following possible solutions  
  
1.  Split the source file into smaller files.  
  
2.  Eliminate unnecessary header files.  
  
3.  Reuse temporary and global variables instead of creating new ones.

