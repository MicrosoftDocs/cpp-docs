---
title: "Compiler Error C2256 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2256"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2256"]
ms.assetid: 171fa2bc-8c72-49cd-afe5-d723b7acd3c5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2256
illegal use of friend specifier on 'function'  
  
 A destructor or constructor cannot be specified as a [friend](../../cpp/friend-cpp.md).  
  
 The following sample generates C2256:  
  
```  
// C2256.cpp  
// compile with: /c  
class C {  
public:  
   friend ~C();   // C2256  
   ~C();   // OK  
};  
```