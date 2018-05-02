---
title: "Compiler Error C3902 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3902"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3902"]
ms.assetid: feb3bb29-f836-4d77-ba71-3876f7f4f216
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3902
'accessor': type of last parameter must be 'type'  
  
 The type of the last parameter of at least one set method must match the type of the property. For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
 The following sample generates C3902:  
  
```  
// C3902.cpp  
// compile with: /clr /c  
using namespace System;  
ref class X {  
   property String ^Name {  
      void set(int);   // C3902  
      // try the following line instead  
      // void set(String^){}  
   }  
  
   property double values[int,int] {  
      void set(int, int, float);   // C3902  
      // try the following line instead  
      // void set(int, int, double){}  
   }  
};  
```