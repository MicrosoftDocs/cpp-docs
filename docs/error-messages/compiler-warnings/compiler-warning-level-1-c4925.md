---
title: "Compiler Warning (level 1) C4925 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4925"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4925"]
ms.assetid: a4b206c0-016a-4f28-873a-bb8bb41bad50
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4925
'method': dispinterface method cannot be called from script  
  
 Scripting languages cannot create a VT_BYREF 'in' parameter, it can only create VT_BYREF 'out' parameters.  
  
 Another way to resolve this warning is not make the parameter (in the definition and implementation) a pointer type.  
  
 The following sample generates C4925:  
  
```  
// C4925.cpp  
// compile with: /LD /W1  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
[ module(name="Test")];  
  
[ dispinterface, uuid("00000000-0000-0000-0000-000000000001") ]  
__interface IDisp {  
   [id(9)] void f([in] int*);  
};  
  
[ coclass, uuid("00000000-0000-0000-0000-000000000002")  ]  
struct CDisp : IDisp {   // C4925  
   void f(int*) {}  
};  
```