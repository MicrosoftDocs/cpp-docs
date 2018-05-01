---
title: "Compiler Error C2863 | Microsoft Docs"
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
  - "C2863"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2863"
ms.assetid: 32561d67-a795-486b-b3b6-4b90a1acb176
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2863
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2863](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2863).  
  
  
interface' : an interface cannot have friends  
  
 Declaring friends on an interface is not allowed.  
  
 The following sample generates C2863:  
  
```  
// C2863.cpp  
// compile with: /c  
#include <unknwn.h>  
  
class CMyClass {  
   void *f();  
};   
  
__interface IMyInterface {  
   void g();  
  
   friend int h();   // 2863  
   friend interface IMyInterface1;  // C2863  
   friend void *CMyClass::f();  // C2863  
};  
```

