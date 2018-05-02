---
title: "Compiler Warning (level 3) C4538 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4538"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4538"]
ms.assetid: 747e3d51-b6d0-41c1-a726-7af3253b59d7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4538
'type' : const/volatile qualifiers on this type are not supported  
  
 A qualifier keyword was applied to an array incorrectly. For more information, see [array](../../windows/arrays-cpp-component-extensions.md).  
  
 The following sample generates C4538:  
  
```  
// C4538.cpp  
// compile with: /clr /W3 /LD  
const array<int> ^f1();   // C4538  
array<const int> ^f2();   // OK  
```