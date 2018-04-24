---
title: "Compiler Error C2567 | Microsoft Docs"
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
  - "C2567"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2567"
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2567
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2567](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2567).  
  
  
unable to open metadata in 'file', file may have been deleted or moved  
  
 A metadata file that was referenced in source (with `#using`) was not found in the same directory by the compiler back end process as it was by the compiler front end process. See [#using Directive](../../preprocessor/hash-using-directive-cpp.md) for more information.  
  
 C2567 could be caused if you compile with **/c** on one machine and then attempt a link-time code generation on another machine. For more information, see [/LTCG (Link-time Code Generation)](../../build/reference/ltcg-link-time-code-generation.md)).  
  
 It might also indicate that your computer had no  more memory.  
  
 To correct this error, make sure that the metadata file is in the same directory location for all phases of the build process.

