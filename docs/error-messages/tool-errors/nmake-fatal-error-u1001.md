---
title: "NMAKE Fatal Error U1001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U1001"]
dev_langs: ["C++"]
helpviewer_keywords: ["U1001"]
ms.assetid: 5d7da559-6cbd-44d6-848c-aaf54cae0d1a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Fatal Error U1001
syntax error : illegal character 'character' in macro  
  
 The given character appears in a macro but is not a letter, number, or underscore.  
  
 This error can be caused by a missing colon in a macro expansion:  
  
```  
syntax error : illegal character '=' in macro  
```