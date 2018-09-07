---
title: "Compiler Error C3233 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3233"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3233"]
ms.assetid: a9210830-1136-4f02-ba41-030c85f93547
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3233
'type' : generic type parameter already constrained  
  
 It is not valid to constrain a generic parameter in more than one `where` clause.  
  
 The following sample generates C3233:  
  
```  
// C3233.cpp  
// compile with: /clr /LD  
  
interface struct C {};  
interface struct D {};  
  
generic <class T>  
where T : C  
where T : D  
ref class E {};   // C3233  
```