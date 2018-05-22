---
title: "Compiler Error C2913 | Microsoft Docs"
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
  - "C2913"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2913"
ms.assetid: c6cf6090-02e8-49a5-913f-5bc6f864b769
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2913
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2913](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2913).  
  
  
explicit specialization; 'declaration' is not a specialization of a class template  
  
 You cannot specialize a non-template class.  
  
 The following sample generates C2913:  
  
```  
// C2913.cpp  
// compile with: /c  
class X{};  
template <class T> class Y{};  
  
template<> class X<int> {};   // C2913  
template<> class Y<int> {};  
```

