---
title: "Compiler Warning (level 3) C4637 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4637"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4637"]
ms.assetid: 5fd347c1-2de9-408f-9136-1bf1ff273622
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4637
XML document comment target: \<include> tag discarded.  reason  
  
 The syntax of an [\<include>](../../ide/include-visual-cpp.md) tag was not correct.  
  
 The following sample generates C4637:  
  
```  
// C4637.cpp  
// compile with: /clr /doc /LD /W3  
using namespace System;  
  
/// Text for class MyClass.  
public ref class MyClass {   
public:  
   /// <include file="c:\davedata\jtest\xml_include.doc"/>  
   // Try the following line instead:  
   // /// <include file='xml_include.doc' path='MyDocs/MyMembers/*' />  
   void MyMethod() {  
   }  
};   // C4637  
```