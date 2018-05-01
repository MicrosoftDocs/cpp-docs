---
title: "Member Access | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "member-selection operators"
  - "pointers, smart"
  - "member access, overloaded operators"
  - "operator overloading, member access operators"
  - "smart pointers, definition"
  - "smart pointers"
ms.assetid: 8c7b2c43-eb92-4d42-9a8e-61aa37d71333
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Member Access
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Member Access](https://docs.microsoft.com/cpp/cpp/member-access).  
  
Class member access can be controlled by overloading the member access operator (**–>**). This operator is considered a unary operator in this usage, and the overloaded operator function must be a class member function. Therefore, the declaration for such a function is:  
  
## Syntax  
  
```  
  
class-type *operator–>()  
```  
  
## Remarks  
 where *class-type* is the name of the class to which this operator belongs. The member access operator function must be a nonstatic member function.  
  
 This operator is used (often in conjunction with the pointer-dereference operator) to implement "smart pointers" that validate pointers prior to dereference or count usage.  
  
 The **.** member access operator cannot be overloaded.  
  
## See Also  
 [Operator Overloading](../cpp/operator-overloading.md)





