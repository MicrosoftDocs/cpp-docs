---
title: "Compiler Warning (level 1) C4086 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4086"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4086"]
ms.assetid: 9248831b-22bf-47af-8684-bfadb17e94fc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4086
expected pragma parameter to be '1', '2', '4', '8', or '16'  
  
 The pragma parameter does not have the required value (1, 2, 4, 8, or 16).  
  
## Example  
  
```  
// C4086.cpp  
// compile with: /W1 /LD  
#pragma pack( 3 ) // C4086  
```