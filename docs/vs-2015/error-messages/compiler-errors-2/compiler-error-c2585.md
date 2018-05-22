---
title: "Compiler Error C2585 | Microsoft Docs"
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
  - "C2585"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2585"
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2585
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2585](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2585).  
  
  
explicit conversion to 'type' is ambiguous  
  
 The type conversion can produce more than one result.  
  
### To fix by checking the following possible causes  
  
1.  Converting from a class or structure type based on multiple inheritance. If the type inherits the same base class more than once, the conversion function or operator must use scope resolution (`::`) to specify which of the inherited classes to use in the conversion.  
  
2.  A conversion operator and a constructor have been defined making the same conversion.

