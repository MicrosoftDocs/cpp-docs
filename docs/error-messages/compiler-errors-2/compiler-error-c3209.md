---
title: "Compiler Error C3209 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3209"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3209"]
ms.assetid: 1de44e39-69d1-4894-8f89-ff92136e8e5d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3209
'class' : generic class must be a managed or WinRTclass  
  
 A generic class must be a managed class or a Windows Runtime class.  
  
 The following sample generates C3209 and shows how to fix it:  
  
```  
// C3209.cpp  
// compile with: /clr  
generic <class T>  
class C {};   // C3209  
  
// OK - ref class can be generic  
generic <class T>  
ref class D {};  
```