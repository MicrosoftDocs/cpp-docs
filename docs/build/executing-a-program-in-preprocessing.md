---
title: "Executing a Program in Preprocessing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["program execution [C++]"]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Executing a Program in Preprocessing
To use a command's exit code during preprocessing, specify the command, with any arguments, within brackets ([ ]). Any macros are expanded before the command is executed. NMAKE replaces the command specification with the command's exit code, which can be used in an expression to control preprocessing.  
  
## See Also  
 [Expressions in Makefile Preprocessing](../build/expressions-in-makefile-preprocessing.md)