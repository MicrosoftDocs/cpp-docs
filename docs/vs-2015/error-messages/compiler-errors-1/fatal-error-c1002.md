---
title: "Fatal Error C1002 | Microsoft Docs"
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
  - "C1002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1002"
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1002
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1002](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1002).  
  
  
compiler is out of heap space in pass 2  
  
 The compiler ran out of dynamic memory space during its second pass, probably due to a program with too many symbols or complex expressions.  
  
### To fix by using the following possible solutions  
  
1.  Divide the source file into several smaller files.  
  
2.  Break expressions into smaller subexpressions.  
  
3.  Remove other programs or drivers that consume memory.

