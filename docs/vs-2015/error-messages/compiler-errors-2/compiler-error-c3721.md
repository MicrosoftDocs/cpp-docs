---
title: "Compiler Error C3721 | Microsoft Docs"
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
  - "C3721"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3721"
ms.assetid: c696ca38-3e00-4875-abbe-7bce0f46930e
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3721
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3721](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3721).  
  
  
signature': incompatible signature for event  
  
 An event was declared incorrectly. For more information, see [__event](../../cpp/event.md).  
  
 C3721 is only reachable using **/clr:oldSyntax**.  
  
## Example  
 The following sample generates C3721.  
  
```  
// C3721.cpp  
// compile with: /clr:oldSyntax /c  
using namespace System;  
  
public __delegate void MyDel();  
  
public __gc class X {  
   __event void add_E1();      // C3721  
   // try the following line instead  
   // __event void add_E1(MyDel * p);  
  
   __event void remove_E1();   // C3721  
   // __event void remove_E1(MyDel * p);  
   // try the following line instead  
  
   __event void raise_E1();  
};  
```

