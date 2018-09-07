---
title: "Compiler Error C3118 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3118"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3118"]
ms.assetid: 40fbe681-8868-4cb2-a2b2-4db4449319a7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3118
'interface' : interfaces do not support virtual inheritance  
  
 You tried to virtually inherit from an interface. For example,  
  
```  
// C3118.cpp  
__interface I1 {  
};  
  
__interface I2 : virtual I1 {   // C3118  
};  
```  
  
 generates this error.