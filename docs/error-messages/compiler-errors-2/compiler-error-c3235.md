---
title: "Compiler Error C3235 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3235"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3235"]
ms.assetid: 0554d6c7-e1dc-4c99-8934-cbcf491c8203
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3235
'specialization' : explicit or partial specialization of a generic class is not allowed  
  
 Generic classes cannot be used for explicit or partial specializations.  
  
## Example  
 The following sample generates C3235.  
  
```  
// C3235.cpp  
// compile with: /clr  
generic<class T>  
public ref class C {};  
  
generic<>  
public ref class C<int> {};   // C3235 Remove this specialization to resolve this error.  
```