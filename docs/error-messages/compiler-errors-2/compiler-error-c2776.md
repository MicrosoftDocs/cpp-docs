---
title: "Compiler Error C2776 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2776"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2776"]
ms.assetid: 9d80addc-62c7-40fc-a2cc-60303abb87df
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2776
only one 'get' method can be specified per property  
  
 You can only specify one `get` function in the [property](../../cpp/property-cpp.md) extended attribute. This error occurs when multiple `get` functions are specified.  
  
 The following sample generates C2776:  
  
```  
// C2776.cpp  
struct A {  
   __declspec(property(get=GetProp,get=GetPropToo))  
   // try the following line instead  
   // __declspec(property(get=GetProp))  
      int prop;   // C2776  
   int GetProp(void);  
   int GetPropToo(void);  
};  
```