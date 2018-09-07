---
title: "Compiler Error C3414 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3414"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3414"]
ms.assetid: 715f5432-b509-4f8f-84f5-e1463bac490f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3414
'member' : imported member function can't be defined  
  
 A member was defined in code that is also defined in a referenced assembly.  
  
 The following sample generates C3414:  
  
```  
// C3414a2.cpp  
// compile with: /clr /LD  
public ref class MyClass {  
public:  
   void Test(){}  
};  
```  
  
 and then:  
  
```  
// C3414b2.cpp  
// compile with: /clr  
#using <C3414a2.dll>  
  
void MyClass::Test() {    // C3414  
}  
  
System::Object::Object() {    // C3414  
}  
```  
