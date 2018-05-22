---
title: "Executing a Program in Preprocessing | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "program execution [C++]"
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Executing a Program in Preprocessing
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Executing a Program in Preprocessing](https://docs.microsoft.com/cpp/build/executing-a-program-in-preprocessing).  
  
  
To use a command's exit code during preprocessing, specify the command, with any arguments, within brackets ([ ]). Any macros are expanded before the command is executed. NMAKE replaces the command specification with the command's exit code, which can be used in an expression to control preprocessing.  
  
## See Also  
 [Expressions in Makefile Preprocessing](../build/expressions-in-makefile-preprocessing.md)

