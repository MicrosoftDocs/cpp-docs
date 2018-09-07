---
title: "Compiler Error C3915 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3915"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3915"]
ms.assetid: 2b0a5e5f-3aec-4a4b-9157-233031817084
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3915
'type' has no default indexed property (class indexer)  
  
 A type does not have a default, indexed property.  
  
 For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3915.  
  
```  
// C3915.cpp  
// compile with: /clr  
ref class X {  
public:  
// uncomment property to resolve this C3915  
//   property int default[]  
//   {  
//      int get(int i)  
//      {  
//         return 863;  
//      }  
//   }  
};  
  
int main() {  
   X^ x = new X;  
   System::Console::WriteLine(x[1]);   // C3915  
}  
```  
  
## Example  
 C3915 can also occur if you attempt to consume a default indexer in the same compiland where it was defined with <xref:System.Reflection.DefaultMemberAttribute>.  
  
 The following sample generates C3915.  
  
```  
// C3915_b.cpp  
// compile with: /clr  
using namespace System;  
  
[Reflection::DefaultMember("XXX")]  
ref struct A {  
   property Double XXX[Double] {  
      Double get(Double data) {  
         return data*data;  
      }  
   }  
};  
  
ref struct B {  
   property Double default[Double] {  
      Double get(Double data) {  
         return data*data;  
      }  
   }  
};  
  
int main() {  
   A ^ mya = gcnew A();  
   Console::WriteLine("{0}", mya[3]);   // C3915  
  
   B ^ myb = gcnew B();  
   Console::WriteLine("{0}", myb[3]);   // OK  
}  
```