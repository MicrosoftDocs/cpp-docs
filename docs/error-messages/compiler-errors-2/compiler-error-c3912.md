---
title: "Compiler Error C3912 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3912"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3912"]
ms.assetid: 674e050c-11fb-4db1-8bdf-a3e95b41161d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3912
'event': type of event must be a delegate type  
  
 An event was declared but was not of the proper type.  
  
 For more information, see [event](../../windows/event-cpp-component-extensions.md).  
  
 The following sample generates C3912:  
  
```  
// C3912.cpp  
// compile with: /clr  
delegate void H();  
ref class X {  
   event int Ev;   // C3912  
   event H^ Ev2;   // OK  
};  
```