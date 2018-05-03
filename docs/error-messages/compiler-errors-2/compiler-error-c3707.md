---
title: "Compiler Error C3707 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3707"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3707"]
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3707
'function' : dispinterface method must have a dispid  
  
 If you use a `dispinterface` method, you must assign it a `dispid`. To fix this error, assign a `dispid` to the `dispinterface` method, for example, by uncommenting the `id` attribute on the method in the sample below. For more information, see the attributes [dispinterface](../../windows/dispinterface.md) and [id](../../windows/id.md).  
  
 The following sample generates C3707:  
  
```  
// C3707.cpp  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlctl.h>  
  
[module(name="xx")];  
[dispinterface]  
__interface IEvents : IDispatch  
{  
   HRESULT event1([in] int i);   // C3707  
   // try the following line instead  
   // [id(1)] HRESULT event1([in] int i);  
};  
  
int main() {  
}  
```