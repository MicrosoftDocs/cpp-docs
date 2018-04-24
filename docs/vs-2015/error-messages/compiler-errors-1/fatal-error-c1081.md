---
title: "Fatal Error C1081 | Microsoft Docs"
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
  - "C1081"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1081"
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1081
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1081](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1081).  
  
  
symbol': file name too long  
  
 The length of a file pathname exceeds `_MAX_PATH` (defined by STDLIB.h as 260 characters). Shorten the name of the file.  
  
 If you call CL.exe with a short filename, the compiler may need to generate a full pathname. For example, `cl -c myfile.cpp` may cause the compiler to generate:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```

