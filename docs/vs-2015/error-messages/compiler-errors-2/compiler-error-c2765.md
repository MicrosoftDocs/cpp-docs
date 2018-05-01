---
title: "Compiler Error C2765 | Microsoft Docs"
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
  - "C2765"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2765"
ms.assetid: 47ad86f3-a7e0-47ad-85ff-0f5534458cb9
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2765
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2765](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2765).  
  
  
function' : an explicit specialization of a function template cannot have any default arguments  
  
 Default arguments are not allowed on an explicit specialization of a function template. For more information, see [Explicit Specialization of Function Templates](../../cpp/explicit-specialization-of-function-templates.md).  
  
 The following sample generates C2765:  
  
```  
// C2765.cpp  
template<class T> void f(T t) {};  
  
template<> void f<char>(char c = 'a') {}   // C2765  
// try the following line instead  
// template<> void f<char>(char c) {}  
```

