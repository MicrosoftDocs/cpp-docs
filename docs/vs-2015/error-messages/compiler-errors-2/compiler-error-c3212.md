---
title: "Compiler Error C3212 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3212"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3212"
ms.assetid: 9e271bb6-a51f-4b96-b26b-9f4ca28fca0a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3212
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3212](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3212).  
  
  
specialization' : an explicit specialization of a template member must be a member of an explicit specialization  
  
 An explicit specialization was ill formed.  
  
 The following sample generates C3212:  
  
```  
// C3212.cpp  
// compile with: /LD  
template <class T>  
struct S {  
   template <class T1>  
   struct S1;  
};  
  
template <class T>   // C3212  
template <>  
struct S<T>::S1<int> {};  
  
/*  
// try the following instead  
template <>  
template <>  
struct S<int>::S1<int> {};  
*/  
  
/*  
// or, the following  
template <>  
struct S<int> {  
   template <class T1>  
   struct S1;  
};  
  
template <>  
struct S<int>::S1<int> {  
};  
*/  
```

