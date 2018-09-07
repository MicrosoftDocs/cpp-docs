---
title: "Compiler Error C2864 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2864"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2864"]
ms.assetid: d0ca2ad9-90a6-4aef-8511-98a3b414c102
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2864
'variable' : a static data member with an in-class initializer must have non-volatile const integral type  
  
 To initialize a `static` data member that is defined as `volatile`, non-`const`, or not an integral type, use a member-definition statement. They cannot be initialized in a declaration.  
  
 This sample generates C2864:  
  
```  
// C2864.cpp  
// compile with: /c  
class B  {  
private:  
   int a = 3;   // OK   
   static int b = 3;   // C2864  
   volatile static int c = 3;   // C2864  
   volatile static const int d = 3;   // C2864  
   const static long long e = 3;   // OK  
   static const double f = 3.33;   // C2864  
};  
```  
  
 This sample shows how to fix C2864:  
  
```  
// C2864b.cpp  
// compile with: /c  
class C  {  
private:  
   int a = 3;  
   static int b; // = 3; C2864  
   volatile static int c; // = 3; C2864  
   volatile static const int d; // = 3; C2864  
   static const long long e = 3;  
   static const double f; // = 3.33; C2864  
};  
  
// Initialize static volatile, non-const, or non-integral  
// data members when defined, not when declared:  
int C::b = 3;  
volatile int C::c = 3;  
volatile const int C::d = 3;  
const double C::f = 3.33;  
```