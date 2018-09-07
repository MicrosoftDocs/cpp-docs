---
title: "Compiler Error C2019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2019"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2019"]
ms.assetid: 4f37b1e1-9eca-418f-a4c3-141e8512d7b6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2019
expected preprocessor directive, found 'character'  
  
 The character followed a `#` sign but it is not the first letter of a preprocessor directive.  
  
 The following sample generates C2019:  
  
```  
// C2019.cpp  
#!define TRUE 1   // C2019  
```  
  
 Possible resolution:  
  
```  
// C2019b.cpp  
// compile with: /c  
#define TRUE 1  
```