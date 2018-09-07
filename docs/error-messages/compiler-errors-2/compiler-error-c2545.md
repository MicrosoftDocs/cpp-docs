---
title: "Compiler Error C2545 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2545"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2545"]
ms.assetid: 51598eb9-0c57-4306-a0cd-3862980f3672
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2545
'operator' : unable to find overloaded operator  
  
 The operator cannot be used with the operands provided. You must supply an overloaded operator with the required operands.  
  
 This error can be caused if operands have incorrect type.  
  
 This error may be fixed if you define a conversion operator or constructor that takes a single parameter.