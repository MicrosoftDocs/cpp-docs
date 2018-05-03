---
title: "Compiler Error C3900 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3900"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3900"]
ms.assetid: a94cc561-8fa8-4344-9e01-e81ff462fae5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3900
'member': not allowed in current scope  
  
 Property blocks can contain function declarations and inline function definitions only. No members other than functions are allowed in property blocks. No typedefs, operators, or friend functions are allowed. For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
 Event definitions can only contain access methods and functions.  
  
 The following sample generates C3900:  
  
```  
// C3900.cpp  
// compile with: /clr  
ref class X {  
   property int P {  
      void set(int);   // OK  
      int i;   // C3900 variable declaration  
   };  
};  
```  
  
 The following sample generates C3900:  
  
```  
// C3900b.cpp  
// compile with: /clr  
using namespace System;  
delegate void H();  
ref class X {  
   event H^ E {  
      int m;   // C3900  
  
      // OK  
      void Test() {}  
  
      void add( H^ h ) {}  
      void remove( H^ h ) {}  
      void raise( ) {}  
   }  
};  
```