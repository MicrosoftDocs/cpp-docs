---
title: "Compiler Error C2867 | Microsoft Docs"
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
  - "C2867"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2867"
ms.assetid: 63be26b2-d9ab-4f3d-a8b7-981ce3e4d6b9
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2867
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2867](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2867).  
  
  
identifier' : is not a namespace  
  
 A `using` directive is applied to something other than a namespace.  
  
 The following sample generates C2867:  
  
```  
// C2867.cpp  
// compile with: /c  
namespace N {  
   class X {};  
}  
using namespace N::X;   // C2867  
```

