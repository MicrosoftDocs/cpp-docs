---
title: "Compiler Error C3830 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3830"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3830"
ms.assetid: c9798f88-5001-4067-9fb1-09957ddc6fa8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3830
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3830](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3830).  
  
  
type1': cannot inherit from 'type2', value types can only inherit from interface classes  
  
 A value type cannot inherit a base class.  For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
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
  
 **Managed Extensions for C++**  
  
 A `__value` type cannot inherit a base class.  
  
 The following sample generates C3830:  
  
```  
// C3830b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
__value struct v : public System::Object {};   // C3830  
__value struct w {};   // OK  
```

