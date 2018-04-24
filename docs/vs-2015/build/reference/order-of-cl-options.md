---
title: "Order of CL Options | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler, setting options"
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Order of CL Options
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Order of CL Options](https://docs.microsoft.com/cpp/build/reference/order-of-cl-options).  
  
  
Options can appear anywhere on the CL command line, except for the /link option, which must occur last. The compiler begins with options specified in the [CL environment variable](../../build/reference/cl-environment-variables.md) and then reads the command line from left to right — processing command files in the order it encounters them. Each option applies to all files on the command line. If CL encounters conflicting options, it uses the rightmost option.  
  
## See Also  
 [Compiler Command-Line Syntax](../../build/reference/compiler-command-line-syntax.md)

