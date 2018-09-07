---
title: "Compiler Warning (level 1) C4381 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4381"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4381"]
ms.assetid: f67a6db3-b334-4b2e-8182-b30c7a3c7c32
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4381
'function1': interface method will not be implemented by non-public method 'function2'  
  
 A class must implement all function in an interface. A class can satisfy this condition if one of its base classes implements the function. However, the function must be implemented as a public function.