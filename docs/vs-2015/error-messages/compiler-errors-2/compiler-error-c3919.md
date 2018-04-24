---
title: "Compiler Error C3919 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3919"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3919"
ms.assetid: 5f8eddda-d751-478b-930d-e18f7191ddfb
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3919
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3919](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3919).  
  
  
event_method': function must have type 'type'  
  
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

