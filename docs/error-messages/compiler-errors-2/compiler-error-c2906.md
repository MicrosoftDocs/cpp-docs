---
title: "Compiler Error C2906 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2906"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2906"]
ms.assetid: 30f652f1-6af6-4a2f-a69e-a1a4876cc8c6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2906
'specialization' : explicit specialization requires 'template <>'  
  
 You must use the new syntax for explicit specialization of templates.  
  
 The following sample generates C2906:  
  
```  
// C2906.cpp  
// compile with: /c  
template<class T> class X{};   // primary template  
class X<int> { }   // C2906  
template<> class X<int> { };   // new syntax  
```