---
title: "Compiler Error C3830 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3830"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3830"]
ms.assetid: c9798f88-5001-4067-9fb1-09957ddc6fa8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3830
'type1': cannot inherit from 'type2', value types can only inherit from interface classes  
  
 A value type cannot inherit a base class.  For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3830:  
  
```  
// C3830a.cpp  
// compile with: /clr /c  
public value struct MyStruct4 {  
   int i;  
};  
  
public value class MyClass : public MyStruct4 {};   // C3830  
  
// OK  
public interface struct MyInterface4 {  
   void i();  
};  
  
public value class MyClass2 : public MyInterface4 {  
public:  
   virtual void i(){}  
};  
```  
