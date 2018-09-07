---
title: "Compiler Error C3901 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3901"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3901"]
ms.assetid: 19af4141-39ad-4c16-a68f-3ae76f648186
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3901
'accessor_function': must have return type 'type'  
  
 At least one get method's return type must match the property type. For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
 The following sample generates C3901:  
  
```  
// C3901.cpp  
// compile with: /clr /c  
using namespace System;  
ref class X {  
   property String^ Name {  
      void get();   // C3901  
      // try the following line instead  
      // String^ get();  
   };  
};  
  
ref class Y {  
   property double values[int, int] {  
      int get(int, int);   // C3901  
      // try the following line instead  
      // double get(int, int);  
   };  
};  
```