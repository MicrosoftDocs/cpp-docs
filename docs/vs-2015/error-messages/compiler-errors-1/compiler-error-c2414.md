---
title: "Compiler Error C2414 | Microsoft Docs"
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
  - "C2414"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2414"
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2414
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2414](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2414).  
  
  
illegal number of operands  
  
### To fix by checking the following possible causes  
  
1.  The opcode does not support the number of operands used. Check an assembly-language reference manual to determine the correct number of operands.  
  
2.  A newer processor supports the instruction with a different number of operands. Adjust the [/arch (Minimum CPU Architecture)](../../build/reference/arch-minimum-cpu-architecture.md) option to use the later processor.

