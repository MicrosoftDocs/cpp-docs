---
title: "Compiler Error C3114 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3114"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3114"]
ms.assetid: b5d2df4f-87d0-4292-9981-25c6a6013c05
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3114
'argument': not a valid named attribute argument  
  
 In order for an attribute class data member to be a valid named argument, it must not be marked `static`, `const`, or `literal`. If a property, the property must not be `static` and must have get and set accessors.  
  
 For more information, see [property](../../windows/property-cpp-component-extensions.md) and [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3114.  
  
```  
// C3114.cpp  
// compile with: /clr /c  
public ref class A : System::Attribute {  
public:  
   static property int StaticProp {  
      int get();  
   }  
  
   property int Prop2 {  
      int get();  
      void set(int i);  
   }  
};  
  
[A(StaticProp=123)]   // C3114  
public ref class R {};  
  
[A(Prop2=123)]   // OK  
public ref class S {};  
```