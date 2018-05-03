---
title: "Compiler Warning (level 1) C4075 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4075"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4075"]
ms.assetid: 19a700b6-f210-4b9d-a2f2-76cfe39ab178
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4075
initializers put in unrecognized initialization area  
  
 A [#pragma init_seg](../../preprocessor/init-seg.md) uses an unrecognized section name. The compiler ignores the **pragma** command.  
  
 The following sample generates C4075:  
  
```  
// C4075.cpp  
// compile with: /W1  
#pragma init_seg("mysegg")   // C4075  
  
// try..  
// #pragma init_seg(user)  
  
int main() {  
}  
```