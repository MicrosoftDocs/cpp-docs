---
title: "Compiler Error C2490 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2490"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2490"]
ms.assetid: 9de6bddd-b2e2-4ce6-b33b-201a8c2c8c54
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2490
'keyword' not allowed in function with 'naked' attribute  
  
 A function defined as [naked](../../cpp/naked-cpp.md) cannot use structured exception handling.  
  
 The following sample generates C2490:  
  
```  
// C2490.cpp  
// processor: x86  
__declspec( naked ) int func() {  
   __try{}   // C2490, structured exception handling  
}  
```