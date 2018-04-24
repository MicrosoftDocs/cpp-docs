---
title: "Compiler Warning (level 1) C4042 | Microsoft Docs"
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
  - "C4042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4042"
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4042
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4042](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4042).  
  
  
identifier' : has bad storage class  
  
 The specified storage class cannot be used with this identifier in this context. The compiler uses the default storage class instead:  
  
-   `extern`, if *identifier* is a function.  
  
-   **auto**, if *identifier* is a formal parameter or local variable.  
  
-   No storage class, if *identifier* is a global variable.  
  
 This warning can be caused by specifying a storage class other than **register** in a parameter declaration.  
  
 The following sample generates C4042  
  
```  
// C4042.cpp  
// compile with: /W1 /LD  
int func2( __declspec( thread ) int tls_i )    // C4042  
// try the following line instead  
// int func2( int tls_i )  
{  
   return tls_i;  
}  
```

