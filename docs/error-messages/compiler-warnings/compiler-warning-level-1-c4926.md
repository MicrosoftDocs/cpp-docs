---
title: "Compiler Warning (level 1) C4926 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4926"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4926"]
ms.assetid: 5717fce0-146f-4ef2-bde0-e9a01c0922d1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4926
'identifier': symbol is already defined: attributes ignored  
  
 A forward declaration was found but an attributed construct with the same name already exists. The attributes for the forward declaration are ignored.  
  
 The following sample generates C4926:  
  
```  
// C4926.cpp  
// compile with: /W1  
[module(name="MyLib")];  
  
[coclass]  
struct a {  
};  
  
[coclass]  
struct a;   // C4926  
  
int main() {  
}  
```