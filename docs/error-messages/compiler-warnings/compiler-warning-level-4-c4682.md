---
title: "Compiler Warning (level 4) C4682 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4682"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4682"]
ms.assetid: 858ea157-1244-4a61-85df-97b3de43d418
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4682
'parameter' : no directional parameter attribute specified, defaulting to [in]  
  
 A method on a parameter in an attributed interface does not have one of the directional attributes: [in](../../windows/in-cpp.md) or [out](../../windows/out-cpp.md). The parameter defaults to in.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4682:  
  
```  
// C4682.cpp  
// compile with: /W4  
#pragma warning(default : 4682)  
#include <windows.h>  
[module(name="MyModule")];  
  
[ library_block, object, uuid("c54ad59d-d516-41dd-9acd-afda17565c2b") ]  
__interface IMyIface : IUnknown  
{  
   HRESULT f1(int i, int *pi); // C4682  
   // try the following line  
   // HRESULT f1([in] int i, [in] int *pi);  
};  
  
int main()  
{  
}  
```