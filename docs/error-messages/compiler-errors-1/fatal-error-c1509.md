---
title: "Fatal Error C1509 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C1509"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1509"]
ms.assetid: 40dd100d-c6ba-451c-bd26-2c99ec1c36d6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1509
compiler limit : too many exception handler states in function 'function'. simplify function  
  
 The code exceeds an internal limit on exception handler states (32,768 states).  
  
 The most common cause is that the function contains a complex expression of user-defined class variables and arithmetic operators.  
  
### To fix by using the following possible solutions  
  
1.  Simplify expressions by assigning common subexpressions to temporary variables.  
  
2.  Split the function into smaller functions.