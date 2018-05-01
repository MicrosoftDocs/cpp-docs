---
title: "Compiler Error C2878 | Microsoft Docs"
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
  - "C2878"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2878"
ms.assetid: 83ee3de1-f554-49e8-a840-1f550cee7f69
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2878
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2878](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2878).  
  
  
name' : a namespace or class of this name does not exist  
  
 You made reference to a namespace or class that is not defined.  
  
 The following sample generates C2878:  
  
```  
// C2878.cpp  
// compile with: /c  
namespace A {}  
namespace B = C;   // C2878 namespace C doesn't exist  
namespace B = A;   
```

