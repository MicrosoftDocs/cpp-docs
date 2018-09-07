---
title: "Compiler Warning (level 1) C4117 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4117"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4117"]
ms.assetid: c45aa281-4cc1-4dfd-bd32-bd7a60ddd577
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4117
macro name 'name' is reserved; 'Command' ignored  
  
### To fix by checking the following possible causes  
  
1.  Trying to define or undefine a predefined macro.  
  
2.  Trying to define or undefine the preprocessor operator **defined**.  
  
 The following sample generates C4117:  
  
```  
// C4117.cpp  
// compile with: /W1  
#define __FILE__ test         // C4117. __FILE__ is a predefined macro  
#define ValidMacroName test   // ok  
  
int main() {  
}  
```