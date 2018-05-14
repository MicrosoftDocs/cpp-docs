---
title: "Compiler Warning (level 1) C4329 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4329"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4329"]
ms.assetid: 4316f51a-2c56-4b3f-831e-65d24b83b65c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4329
__declspec(align()) is ignored on enum  
  
 Use of the [align](../../cpp/align-cpp.md) keyword of the [__declspec](../../cpp/declspec.md) modifier is not allowed on an `enum`. The following sample generates C4329:  
  
```  
// C4329.cpp  
// compile with: /W1 /LD  
enum __declspec(align(256)) TestEnum {   // C4329  
   TESTVAL1,  
   TESTVAL2,  
   TESTVAL3  
};  
__declspec(align(256)) enum TestEnum1;  
```