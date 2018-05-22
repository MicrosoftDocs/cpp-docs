---
title: "Floating Point Coprocessor and Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "floating-point numbers, coprocessor"
  - "floating-point coprocessor"
  - "floating-point numbers"
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Floating Point Coprocessor and Calling Conventions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Floating Point Coprocessor and Calling Conventions](https://docs.microsoft.com/cpp/cpp/floating-point-coprocessor-and-calling-conventions).  
  
If you are writing assembly routines for the floating point coprocessor, you must preserve the floating point control word and clean the coprocessor stack unless you are returning a **float** or **double** value (which your function should return in ST(0)).  
  
## See Also  
 [Calling Conventions](../cpp/calling-conventions.md)





