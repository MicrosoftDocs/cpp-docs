---
title: "Fatal Error C1308 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1308"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1308"]
ms.assetid: 46177997-069e-433a-8e20-93c846d78ffd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1308
linking assemblies is not supported  
  
 A .netmodule is allowed as input to the linker, but an assembly is not. This error can be generated when an attempt is made to link an assembly compiled with `/clr:safe`.  
  
 For more information, see [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).  
  
 The following sample generates C1308:  
  
```  
// C1308.cpp  
// compile with: /clr:safe /LD  
public ref class MyClass {  
public:  
   int i;  
};  
```  
  
 and then,  
  
```  
// C1308b.cpp  
// compile with: /clr /link C1308b.obj C1308.dll  
// C1308 expected  
#using "C1308.dll"  
int main() {  
   MyClass ^ my = gcnew MyClass();  
}  
```