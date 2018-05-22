---
title: "Compiler Error C2588 | Microsoft Docs"
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
  - "C2588"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2588"
ms.assetid: 19a0cabd-ca13-44a5-9be3-ee676abf9bc4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2588
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2588](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2588).  
  
  
identifier' : illegal global destructor  
  
 The destructor is defined for something other than a class, structure, or union. This is not allowed.  
  
 This error can be caused by a missing class, structure, or union name on the left side of the scope resolution (`::`) operator.  
  
 The following sample generates C2588:  
  
```  
// C2588.cpp  
~F();   // C2588  
```

