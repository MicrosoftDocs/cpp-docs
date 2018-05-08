---
title: "Compiler Error C2045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2045"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2045"]
ms.assetid: 2fca668e-9b20-4933-987a-18c0fd0187df
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2045
'identifier' : label redefined  
  
 The label appears before multiple statements in the same function.  
  
 The following sample generates C2045:  
  
```  
// C2045.cpp  
int main() {  
   label: {  
   }  
   goto label;  
   label: {}   // C2045  
}  
```