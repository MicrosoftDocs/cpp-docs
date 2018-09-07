---
title: "Compiler Warning (level 1) C4015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4015"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4015"]
ms.assetid: 7242ab90-c869-482f-8152-46728575837e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4015
'identifier' : type of bit field must be integral  
  
 The bit field is not declared as an integer type. The compiler assumes the base type of the bit field to be unsigned. Bit fields must be declared as unsigned integer types.