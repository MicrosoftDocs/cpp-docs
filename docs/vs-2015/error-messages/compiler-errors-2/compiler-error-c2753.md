---
title: "Compiler Error C2753 | Microsoft Docs"
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
  - "C2753"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2753"
ms.assetid: 92bfeeac-524a-4a8e-9a4f-fb8269055826
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2753
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2753](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2753).  
  
  
class' : template class has already been defined  
  
 If the template argument list matches the parameter list, the compiler treats it as the same template. Defining the same template twice is not allowed.  
  
 The following sample generates C2753:  
  
```  
// C2753.cpp  
template<class T>  
struct A {};  
  
template<class T>  
struct A<T> {};   // C2753  
// try the following line instead  
// struct A<int> {};  
  
template<class T, class U, class V, class W, class X>  
struct B {};  
```

