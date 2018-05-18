---
title: "Compiler Error C3919 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3919"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3919"]
ms.assetid: 5f8eddda-d751-478b-930d-e18f7191ddfb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3919
'event_method': function must have type 'type'  
  
 An event accessor method was not declared correctly.  
  
 For more information about events, see [event](../../windows/event-cpp-component-extensions.md).  
  
 The following sample generates C3919:  
  
```  
// C3919.cpp  
// compile with: /clr /c  
using namespace System;  
delegate void D(String^);  
ref class R {  
   event D^ e {  
      int add(int);   // C3919  
      int remove(int);   // C3919  
  
      void add(D^);   // OK  
      void remove(D^);   // OK  
   }  
};  
```