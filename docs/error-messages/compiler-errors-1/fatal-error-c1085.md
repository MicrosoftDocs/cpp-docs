---
title: "Fatal Error C1085 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1085"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1085"]
ms.assetid: f2766365-d09b-4299-8a98-12e5aca98568
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1085
Cannot write filetype file: 'file': message  
  
### To fix by checking the following possible causes  
  
1.  Drive is read-only.  
  
2.  Drive is full.  
  
3.  Sharing violation.  
  
4.  If the message says "bad file number", the file may have been closing in the foreground while compiling in the background.