---
title: "Compiler Error C3833 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3833"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3833"]
ms.assetid: 8152be53-e01e-48cd-9eef-9de38723664c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3833
'type' : invalid target type for pointer_type  
  
 An [interior_ptr](../../windows/interior-ptr-cpp-cli.md) or [pin_ptr](../../windows/pin-ptr-cpp-cli.md) was declared incorrectly.  
  
 The following sample generates C3833:  
  
```  
// C3833.cpp  
// compile with: /clr  
  
ref class MyClass {  
public:  
   int data;  
   MyClass() : data(35) {}  
};  
  
int main() {  
   interior_ptr<MyClass> p;   // C3833  
  
   // OK  
   MyClass ^ h_MyClass = gcnew MyClass;  
   interior_ptr<int> i = &(h_MyClass->data);  
   System::Console::WriteLine(*i);  
}  
```  
  
 The following sample generates C3833:  
  
```  
// C3833b.cpp  
// compile with: /clr /c  
ref class G {  
public:  
   int i;  
};  
  
int main() {  
   G ^ pG = gcnew G;  
   pin_ptr<G> ppG = &pG;   // C3833 can't pin a whole object  
  
   // OK  
   pin_ptr<int> ppG2 = &pG->i;  
   *ppG2 = 54;  
   int * pi = ppG2;  
   System::Console::WriteLine(*pi);  
   System::Console::WriteLine(*ppG2);  
  
   *pi = 55;  
   System::Console::WriteLine(*pi);  
   System::Console::WriteLine(*ppG2);  
  
   *ppG2 = 56;  
   System::Console::WriteLine(*pi);  
   System::Console::WriteLine(*ppG2);  
}  
```