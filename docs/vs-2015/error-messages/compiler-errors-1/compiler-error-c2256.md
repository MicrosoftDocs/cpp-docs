---
title: "Compiler Error C2256 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2256"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2256"
ms.assetid: 171fa2bc-8c72-49cd-afe5-d723b7acd3c5
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2256
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2256](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2256).  
  
  
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

