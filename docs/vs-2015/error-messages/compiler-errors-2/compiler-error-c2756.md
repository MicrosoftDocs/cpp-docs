---
title: "Compiler Error C2756 | Microsoft Docs"
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
  - "C2756"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2756"
ms.assetid: 42eb988d-4043-4dee-8fd4-596949f69a55
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2756
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2756](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2756).  
  
  
template type' : default template arguments not allowed on a partial specialization  
  
 The template for a partial specialization may not contain a default argument.  
  
 The following sample generates C2756 and shows how to fix it:  
  
```  
// C2756.cpp  
template <class T>  
struct S {};  
  
template <class T=int>  
// try the following line instead  
// template <class T>  
struct S<T*> {};   // C2756  
```

