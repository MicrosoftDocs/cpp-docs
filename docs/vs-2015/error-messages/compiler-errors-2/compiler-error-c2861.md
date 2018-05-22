---
title: "Compiler Error C2861 | Microsoft Docs"
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
  - "C2861"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2861"
ms.assetid: 012bb44d-6c9b-4def-b54e-b19f1f8ddd1b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2861
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2861](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2861).  
  
  
function name' : an interface member function cannot be defined  
  
 The compiler encountered the interface keyword or deduced a struct as an interface but then found a member function definition.  An interface cannot contain a definition for a member function.  
  
## Example  
 The following sample generates C2861:  
  
```  
// C2861.cpp  
// compile with: /c  
#include <objbase.h>   // required for IUnknown definition  
[ object, uuid("00000000-0000-0000-0000-000000000001") ]  
__interface IMyInterface : IUnknown {  
   HRESULT mf(int a);  
};  
  
HRESULT IMyInterface::mf(int a) {}   // C2861  
  
```

