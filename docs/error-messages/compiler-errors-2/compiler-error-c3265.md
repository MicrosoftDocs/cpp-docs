---
title: "Compiler Error C3265 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3265"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3265"]
ms.assetid: 10ab3e17-4a9f-4120-bab5-21473869b70f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3265
cannot declare a managed 'managed construct' in an unmanaged 'unmanaged construct'  
  
You cannot include a managed object in an unmanaged context.  
  
The following sample reproduces C3265:  
  
```  
// C3265_2.cpp  
// compile with: /clr /LD  
#include <vcclr.h>  
  
ref class A { };  
  
class B  
// try the following line instead  
// ref class B   
{  
   A ^a;   // C3265  
   // or embed the managed handle using gcroot  
   // try the following line instead  
   // gcroot<A^> a;  
};  
```  
