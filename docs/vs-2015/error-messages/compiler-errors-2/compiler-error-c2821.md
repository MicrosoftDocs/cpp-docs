---
title: "Compiler Error C2821 | Microsoft Docs"
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
  - "C2821"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2821"
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2821
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2821](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2821).  
  
  
first formal parameter to 'operator new' must be 'unsigned int'  
  
 The first formal parameter of the [operator new](http://msdn.microsoft.com/library/2476d0f9-59df-485c-981e-ba9f7ee83507) must be an unsigned `int`.  
  
 The following sample generates C2821:  
  
```  
// C2821.cpp  
// compile with: /c  
void * operator new( /* unsigned int,*/ void * );   // C2821  
void * operator new( unsigned int, void * );  
```

