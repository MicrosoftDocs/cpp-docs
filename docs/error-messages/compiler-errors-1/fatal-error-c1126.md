---
title: "Fatal Error C1126 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1126"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1126"]
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1126
'identifier' : automatic allocation exceeds size  
  
 Space allocated for local variables of a function (plus a limited amount of space used by the compiler, such as an extra 20 bytes for swappable functions) exceeds the limit.  
  
 To correct this error, use `malloc` or `new` to allocate large amounts of data.