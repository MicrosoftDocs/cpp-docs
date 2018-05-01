---
title: "Compiler Warning (level 4) C4611 | Microsoft Docs"
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
  - "C4611"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4611"
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4611
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4611](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4611).  
  
  
interaction between 'function' and C++ object destruction is non-portable  
  
 On some platforms, functions that include **catch** may not support C++ object semantics of destruction when out of scope.  
  
 To avoid unexpected behavior, avoid using **catch** in functions that have constructors and destructors.  
  
 This warning is only issued once; see [pragma warning](../../preprocessor/warning.md).

