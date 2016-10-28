---
title: "Order of CL Options"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cl.exe compiler, setting options"
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Order of CL Options
Options can appear anywhere on the CL command line, except for the /link option, which must occur last. The compiler begins with options specified in the [CL environment variable](../buildref/cl-environment-variables.md) and then reads the command line from left to right — processing command files in the order it encounters them. Each option applies to all files on the command line. If CL encounters conflicting options, it uses the rightmost option.  
  
## See Also  
 [Compiler Command-Line Syntax](../buildref/compiler-command-line-syntax.md)