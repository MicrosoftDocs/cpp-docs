---
title: "Compiler Error C3113 | Microsoft Docs"
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
  - "C3113"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3113"
ms.assetid: 3afdc668-b29e-474e-9ea3-aa027d42db7c
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3113
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3113](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3113).  
  
  
an 'structure' cannot be a template/generic  
  
 You attempted to make a class template or class generic out of an interface or an enum.  
  
 The following sample generates C3113:  
  
```  
// C3113.cpp  
// compile with: /c  
template <class T>   
enum E {};   // C3113  
// try the following line instead  
// class MyClass{};  
```

