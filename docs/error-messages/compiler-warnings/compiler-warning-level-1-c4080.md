---
title: "Compiler Warning (level 1) C4080 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4080"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4080"]
ms.assetid: 964fb3f4-b9fd-450b-aa23-35cece126172
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4080
expected identifier for segment name; found 'symbol'  
  
 The name of the segment in [#pragma alloc_text](../../preprocessor/alloc-text.md) must be a string or an identifier. The compiler ignores the pragma if a valid identifier is not found.  
  
 The following sample generates C4080:  
  
```  
// C4080.cpp  
// compile with: /W1  
extern "C" void func(void);  
  
#pragma alloc_text()   // C4080  
  
// try this line to resolve the warning  
// #pragma alloc_text("mysection", func)  
  
int main() {  
}  
  
void func(void) {  
}  
```