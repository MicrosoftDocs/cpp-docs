---
title: "Compiler Error C3386 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3386"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3386"]
ms.assetid: 93fa8c33-0f10-402b-8eec-b0a217a1f8dc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3386
'type' : __declspec(dllexport)/\__declspec(dllimport) cannot be applied to a managed or WinRTtype  
  
 The `dllimport` and [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` modifiers are not valid on a managed or Windows Runtime type.  
  
 The following sample generates C3386 and shows how to fix it:  
  
```  
// C3386.cpp  
// compile with: /clr /c  
ref class __declspec(dllimport) X1 {   // C3386  
// try the following line instead  
// ref class X1 {  
};  
```