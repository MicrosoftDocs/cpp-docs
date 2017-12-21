---
title: "Compiler Error C2909 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2909"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2909"]
ms.assetid: 1c9df8ae-925d-4002-a5f8-a71413c45f9e
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2909
'identifier': explicit instantiation of function template requires return type  
  
 An explicit instantiation of a function template requires explicit specification of its return type. Implicit return type specification does not work.  
  
 The following sample generates C2909:  
  
```  
// C2909.cpp  
// compile with: /c  
template<class T> int f(T);  
template f<int>(int);         // C2909  
template int f<int>(int);   // OK  
```