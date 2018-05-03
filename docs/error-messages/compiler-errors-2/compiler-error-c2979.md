---
title: "Compiler Error C2979 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2979"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2979"]
ms.assetid: 98bd9043-ec44-451e-a482-3a8e35fc7464
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2979
explicit specializations are not supported in generics  
  
 A generic class was declared incorrectly.  See [Generics](../../windows/generics-cpp-component-extensions.md) for more information.  
  
## Example  
 The following sample generates C2979.  
  
```  
// C2979.cpp  
// compile with: /clr /c  
generic <>   
ref class Utils {};   // C2979 error  
  
generic <class T>  
ref class Utils2 {};   // OK  
```