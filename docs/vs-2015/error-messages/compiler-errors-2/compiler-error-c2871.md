---
title: "Compiler Error C2871 | Microsoft Docs"
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
  - "C2871"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2871"
ms.assetid: 44aeb84d-61f0-45e0-8dad-22a3cd46b7f8
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2871
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2871](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2871).  
  
  
name' : a namespace with this name does not exist  
  
 This error will occur when you pass an identifier that is not a namespace to a [using](http://msdn.microsoft.com/library/b42b8e61-5e7e-439c-bb71-370094b44ae8) directive.  
  
 The following sample generates C2871:  
  
```  
// C2871.cpp  
// compile with: /c  
using namespace d;   // C2871 d is not a namespace  
using namespace System;   // OK  
```

