---
title: "Compiler Warning (level 1) C4997 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4997"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4997"]
ms.assetid: d39678fd-0c1a-4104-8a45-9e3f20de0407
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4997
'class': coclass does not implement a COM interface or pseudo-interface  
  
 A class marked with the [coclass](../../windows/coclass.md) attribute did not implement an interface.  
  
 The following sample generates C4997:  
  
```  
// C4997.cpp  
// compile with: /WX  
// to resolve this C4997, uncomment all code  
#include <objbase.h>  
  
[ object ]  
__interface I {  
   HRESULT func();  
};  
  
[ coclass ]  
struct C /*: I*/ {  
   /*  
   HRESULT func() {  
      return S_OK;  
   }  
   */  
};   // C4997  
```