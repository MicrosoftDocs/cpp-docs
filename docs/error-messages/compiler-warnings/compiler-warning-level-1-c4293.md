---
title: "Compiler Warning (level 1) C4293 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4293"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4293"]
ms.assetid: babecd96-eb51-41a5-9835-462c7a46dbad
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4293
'operator' : shift count negative or too big, undefined behavior  
  
 If a shift count is negative or too large, the behavior of the resulting image is undefined.  
  
## Example  
 The following sample generates C4293:  
  
```  
// C4293.cpp  
// compile with: /c /W1  
unsigned __int64 combine (unsigned lo, unsigned hi) {  
  
   return (hi << 32) | lo;   // C4293  
  
   // try the following line instead  
   // return ( (unsigned __int64)hi << 32) | lo;  
}  
```