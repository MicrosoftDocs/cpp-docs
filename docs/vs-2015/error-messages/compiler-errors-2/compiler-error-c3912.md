---
title: "Compiler Error C3912 | Microsoft Docs"
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
  - "C3912"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3912"
ms.assetid: 674e050c-11fb-4db1-8bdf-a3e95b41161d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3912
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3912](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3912).  
  
  
event': type of event must be a delegate type  
  
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

