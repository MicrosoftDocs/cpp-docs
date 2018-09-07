---
title: "Compiler Error C2504 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2504"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2504"]
ms.assetid: c9e002a6-a4ee-4ba7-970e-edf4adb83692
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2504
'class' : base class undefined  
  
 The base class is declared but never defined.  Possible causes:  
  
1.  Missing include file.  
  
2.  External base class not declared with [extern](../../cpp/using-extern-to-specify-linkage.md).  
  
 The following sample generates C2504:  
  
```  
// C2504.cpp  
// compile with: /c  
class A;  
class B : public A {};   // C2504  
```  
  
 // OK  
  
```  
class C{};  
class D : public C {};  
```