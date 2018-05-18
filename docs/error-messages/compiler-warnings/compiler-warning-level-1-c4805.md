---
title: "Compiler Warning (level 1) C4805 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4805"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4805"]
ms.assetid: 99c7b7e2-272e-4ab5-8580-17c42e62e2ef
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4805
'operation' : unsafe mix of type 'type' and type 'type' in operation  
  
 This warning is generated for comparison operations between [bool](../../cpp/bool-cpp.md) and [int](../../c-language/integer-types.md). The following sample generates C4805:  
  
```  
// C4805.cpp  
// compile with: /W1  
int main() {  
   int i = 1;  
   bool b = true;  
  
   if (i == b) {   // C4805, comparing bool and int variables  
   }  
}  
```