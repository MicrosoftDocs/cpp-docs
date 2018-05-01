---
title: "Compiler Error C2828 | Microsoft Docs"
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
  - "C2828"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2828"
ms.assetid: d8df6ed4-5954-46c2-b59b-52881d4e923d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2828
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2828](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2828).  
  
  
operator operator' cannot be globally overridden with binary form  
  
 The operator cannot have a binary form outside of an object.  
  
### To fix by using the following possible solutions  
  
1.  Make the overloaded operator local to an object.  
  
2.  Choose an appropriate unary operator to overload.

