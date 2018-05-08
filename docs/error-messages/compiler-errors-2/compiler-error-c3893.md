---
title: "Compiler Error C3893 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3893"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3893"]
ms.assetid: 90d52eae-6ef2-4db1-b7ad-92f9e8b140fb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3893
'var' : l-value use of initonly data member is only allowed in an instance constructor of class 'type_name'  
  
 Static [initonly](../../dotnet/initonly-cpp-cli.md) data members can only have their address taken in a static constructor.  
  
 Instance (non-static) initonly data members can only have their address taken in instance (non-static) constructors.  
  
 The following sample generates C3893:  
  
```  
// C3893.cpp  
// compile with: /clr  
ref struct Y1 {  
   Y1() : data_var(0) {  
      int% i = data_var;   // OK  
   }  
   initonly int data_var;  
};  
  
int main(){  
   Y1^ y= gcnew Y1;  
   int% i = y->data_var;   // C3893  
}  
```