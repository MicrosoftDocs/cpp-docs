---
title: "Compiler Warning (level 4) C4057 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4057"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4057"]
ms.assetid: e75d0645-84c9-4bef-a812-942ed9879aa3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4057
'operator' : 'identifier1' indirection to slightly different base types from 'identifier2'  
  
 Two pointer expressions refer to different base types. The expressions are used without conversion.  
  
### To fix by checking the following possible causes  
  
1.  Mixing signed and unsigned types.  
  
2.  Mixing **short** and **long** types.