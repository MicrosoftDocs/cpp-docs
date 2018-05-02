---
title: "Fatal Error C1014 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1014"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1014"]
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1014
too many include files : depth = level  
  
 The nesting of `#include` directives is too deep. Nested directives can include open files. The source file containing the directive counts as one file.