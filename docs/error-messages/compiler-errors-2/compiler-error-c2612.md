---
title: "Compiler Error C2612 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2612"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2612"]
ms.assetid: 6faacfd6-4455-41a2-808e-0f6799f84d6d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2612
trailing 'char' illegal in base/member initializer list  
  
 A character appears after the last base or member in an initializer list.  
  
 The following sample generates C2612:  
  
```  
// C2612.cpp  
class A {  
public:  
   int i;  
   A( int ia ) : i( ia ) + {};   // C2612  
};  
```