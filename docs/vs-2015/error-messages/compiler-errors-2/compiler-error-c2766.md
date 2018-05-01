---
title: "Compiler Error C2766 | Microsoft Docs"
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
  - "C2766"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2766"
ms.assetid: 8032f4ca-6827-4f04-9c61-c44643c85cc4
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2766
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2766](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2766).  
  
  
explicit specialization; 'specialization' has already been defined  
  
 Duplicate explicit specializations are not allowed. For more information, see [Explicit Specialization of Function Templates](../../cpp/explicit-specialization-of-function-templates.md).  
  
 The following sample generates C2766:  
  
```  
// C2766.cpp  
// compile with: /c  
template<class T>   
struct A {};  
  
template<>   
struct A<int> {};  
  
template<>   
struct A<int> {};   // C2766  
// try the following line instead  
// struct A<char> {};  
```

