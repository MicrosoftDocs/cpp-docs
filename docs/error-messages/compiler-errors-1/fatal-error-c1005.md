---
title: "Fatal Error C1005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1005"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1005"]
ms.assetid: 150daf8e-a38a-4669-9c1a-a05b5a1f65ef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1005
string too big for buffer  
  
 A string in a compiler intermediate file overflowed a buffer.  
  
 You could get this error when the parameter that you pass to either the [/Fd](../../build/reference/fd-program-database-file-name.md) or [/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md) compiler options is greater than 256 bytes.