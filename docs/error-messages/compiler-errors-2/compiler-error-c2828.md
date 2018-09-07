---
title: "Compiler Error C2828 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2828"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2828"]
ms.assetid: d8df6ed4-5954-46c2-b59b-52881d4e923d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2828
'operator operator' cannot be globally overridden with binary form  
  
 The operator cannot have a binary form outside of an object.  
  
### To fix by using the following possible solutions  
  
1.  Make the overloaded operator local to an object.  
  
2.  Choose an appropriate unary operator to overload.