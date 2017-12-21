---
title: "Compiler Warning (level 1) C4076 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C4076"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4076"]
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4076
'typemod' : can not be used with type 'typename'  
  
 A type modifier, whether it is **signed** or `unsigned`, cannot be used with a noninteger type. ***typemod*** is ignored.  
  
## Example  
 The following sample generates C4076:  
  
```  
// C4076.cpp  
// compile with: /W1 /LD  
unsigned double x;   // C4076  
```