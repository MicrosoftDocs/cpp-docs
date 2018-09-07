---
title: "Compiler Error C2989 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2989"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2989"]
ms.assetid: 936303d8-eb3b-4746-82ec-2f18020a6f64
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2989
'class' : class type has already been declared as a non-class type  
  
 The class generic or template redefines a non-template or non-generic class. Check header files for conflicts.  
  
 If you are using class template partial specializations, see Knowledge Base article Q240866.  
  
 The following sample generates C2989:  
  
```  
// C2989.cpp  
// compile with: /c  
class C{};  
  
template <class T>  
class C{};  // C2989  
class C2{};  
```  
  
 C2989 can also occur when using generics:  
  
```  
// C2989b.cpp  
// compile with: /clr /c  
ref class GC1;  
  
generic <typename T> ref class GC1;   // C2989  
template <typename T> ref class GC2;  
  
generic <typename T> ref class GC2;   // C2989  
generic <typename T> ref class GCb;  
template <typename T> ref class GC2;  
generic <typename T> ref class GCc;  
```