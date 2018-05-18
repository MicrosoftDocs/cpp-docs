---
title: "Compiler Error C3413 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3413"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3413"]
ms.assetid: de6c9b05-c373-4bd8-8cb0-12c2cd2e5674
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3413
'name' : invalid explicit instantiation  
  
 The compiler detected an ill-formed explicit instantiation.  
  
 The following sample generates C3413:  
  
```  
// C3413.cpp  
template  
class MyClass {};   // C3413  
```  
  
 Possible resolution:  
  
```  
// C3413b.cpp  
// compile with: /c  
template <class T>  
class MyClass {};  
  
template <>  
class MyClass<int> {};  
```