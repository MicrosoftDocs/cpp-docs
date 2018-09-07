---
title: "Compiler Error C3283 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3283"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3283"]
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3283
'type' : an interface cannot have an instance constructor  
  
 A CLR [interface](../../windows/interface-class-cpp-component-extensions.md) cannot have an instance constructor.  A static constructor is allowed.  
  
 The following sample generates C3283:  
  
```  
// C3283.cpp  
// compile with: /clr  
interface class I {  
   I();   // C3283  
};  
```  
  
 Possible resolution:  
  
```  
// C3283b.cpp  
// compile with: /clr /c  
interface class I {  
   static I(){}  
};  
```