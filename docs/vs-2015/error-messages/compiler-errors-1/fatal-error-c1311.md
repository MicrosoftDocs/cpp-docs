---
title: "Fatal Error C1311 | Microsoft Docs"
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
  - "C1311"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1311"
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1311
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1311](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1311).  
  
  
COFF format cannot statically initialize 'var' with number byte(s) of an address  
  
 An address whose value is not known at compile time cannot be statically assigned to a variable whose type has storage of less than four bytes.  
  
 This error can occur on code that is otherwise valid C++.  
  
 The following example shows one condition that might cause C1311.  
  
```  
char c = (char)"Hello, world";   // C1311  
char *d = (char*)"Hello, world";   // OK  
```

