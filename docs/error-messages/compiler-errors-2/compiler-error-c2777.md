---
title: "Compiler Error C2777 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2777"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2777"]
ms.assetid: 5fe158c0-2a65-488a-aca2-61d4a8b32d43
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2777
only one 'put' method can be specified per property  
  
 A [property](../../cpp/property-cpp.md) declspec modifier had more than one `put` property.  
  
 The following sample generates C2777:  
  
```  
// C2777.cpp  
struct A {  
   __declspec(property(put=PutProp,put=PutPropToo))   // C2777  
   // try the following line instead  
   // __declspec(property(put=PutProp))  
      int prop;  
   int PutProp(void);  
   int PutPropToo(void);  
};  
```