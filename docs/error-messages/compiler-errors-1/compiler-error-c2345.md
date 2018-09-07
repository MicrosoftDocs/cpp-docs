---
title: "Compiler Error C2345 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2345"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2345"]
ms.assetid: e1cc88b0-0223-4d07-975b-fa99956a82bd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2345
align(value) : illegal alignment value  
  
 You passed a value to the [align](../../cpp/align-cpp.md) keyword that is outside the allowable range.  
  
 The following code generates C2345  
  
```  
// C2345.cpp  
// compile with: /c  
__declspec(align(0)) int a;   // C2345  
__declspec(align(1)) int a;   // OK  
```