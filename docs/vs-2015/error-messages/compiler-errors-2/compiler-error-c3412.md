---
title: "Compiler Error C3412 | Microsoft Docs"
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
  - "C3412"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3412"
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3412
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3412](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3412).  
  
  
template' : cannot specialize template in current scope  
  
 A template cannot be specialized at class scope, only in global or namespace scope.  
  
## Example  
 The following sample generates C3412.  
  
```  
// C3412.cpp  
template <class T>  
struct S {  
   template <>  
   struct S<int> {};   // C3412 in a class  
};  
```  
  
## Example  
 The following sample shows a possible resolution.  
  
```  
// C3412b.cpp  
// compile with: /c  
template <class T>  
struct S {};  
  
template <>  
struct S<int> {};  
```

