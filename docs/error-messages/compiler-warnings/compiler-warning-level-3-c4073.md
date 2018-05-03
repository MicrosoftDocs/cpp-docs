---
title: "Compiler Warning (level 3) C4073 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4073"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4073"]
ms.assetid: 50081a6e-6acd-45ff-8484-9b1ea926cc5c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4073
initializers put in library initialization area  
  
 Only third-party library developers should use the library initialization area, which is specified by [#pragma init_seg](../../preprocessor/init-seg.md). The following sample generates C4073:  
  
```  
// C4073.cpp  
// compile with: /W3  
#pragma init_seg(lib)   // C4073  
  
// try this line to resolve the warning  
// #pragma init_seg(user)  
  
int main() {  
}  
```