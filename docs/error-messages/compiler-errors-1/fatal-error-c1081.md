---
title: "Fatal Error C1081 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1081"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1081"]
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1081
'symbol': file name too long  
  
 The length of a file pathname exceeds `_MAX_PATH` (defined by STDLIB.h as 260 characters). Shorten the name of the file.  
  
 If you call CL.exe with a short filename, the compiler may need to generate a full pathname. For example, `cl -c myfile.cpp` may cause the compiler to generate:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```