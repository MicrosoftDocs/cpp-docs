---
title: "Compiler Error C3216 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3216"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3216"]
ms.assetid: bbab1efe-8779-4489-8bb0-b11e45f5cbe5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3216
constraint must be a generic parameter, not 'type'  
  
 A constraint was ill formed.  
  
 The following sample generates C3216:  
  
```  
// C3216.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
where F : A   // C3216  
// Try the following line instead:  
// where T : A    // C3216  
ref class C {};  
```  
  
 The following example demonstrates a possible resolution:  
  
```  
// C3216b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
where T : A  
ref class C {};  
```