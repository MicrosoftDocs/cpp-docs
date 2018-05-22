---
title: "Compiler Warning (level 1) C4190 | Microsoft Docs"
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
  - "C4190"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4190"
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4190
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4190](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4190).  
  
  
identifier1' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C  
  
 A function or pointer to function has a UDT (user-defined type, which is a class, structure, enum, union, or [__value](../../misc/value.md) type) as return type and `extern` "C" linkage. This is legal if:  
  
-   All calls to this function occur from C++.  
  
-   The definition of the function is in C++.  
  
## Example  
  
```  
// C4190.cpp  
// compile with: /W1 /LD  
struct X  
{  
   int i;  
   X ();  
   virtual ~X ();  
};  
  
extern "C" X func ();   // C4190  
```

