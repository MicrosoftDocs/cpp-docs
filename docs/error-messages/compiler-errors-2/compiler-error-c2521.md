---
title: "Compiler Error C2521 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2521"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2521"]
ms.assetid: 6042821b-e345-4a54-a7e9-a2c9019ea016
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2521
function does not take any arguments  
  
 You attempted to use arguments with a destructor or finalizer.  
  
 For more information, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## Example  
 The following sample generates C2521.  
  
```  
// C2521.cpp  
// compile with: /clr  
ref class R {  
protected:  
   !R() {}  
  
public:  
   void CleanUp() {  
      this->!R(4);   // C2521  
      this->!R();   // OK  
   }  
};  
  
int main() {  
   R^ r = gcnew R();  
   r->CleanUp();  
}  
```