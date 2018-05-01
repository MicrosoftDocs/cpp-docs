---
title: "virtual (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "virtual_cpp"
  - "virtual"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "virtual base classes, declaring"
  - "base classes, virtual"
  - "virtual functions, declaring"
  - "virtual keyword [C++]"
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# virtual (C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [virtual (C++)](https://docs.microsoft.com/cpp/cpp/virtual-cpp).  
  
The `virtual` keyword declares a virtual function or a virtual base class.  
  
## Syntax  
  
```  
virtual [type-specifiers] member-function-declarator  
virtual [access-specifier] base-class-name  
```  
  
#### Parameters  
 `type-specifiers`  
 Specifies the return type of the virtual member function.  
  
 `member-function-declarator`  
 Declares a member function.  
  
 `access-specifier`  
 Defines the level of access to the base class, `public`, `protected` or `private`. Can appear before or after the `virtual` keyword.  
  
 `base-class-name`  
 Identifies a previously declared class type.  
  
## Remarks  
 See [Virtual Functions](../cpp/virtual-functions.md) and [Virtual Base Classes](../misc/virtual-base-classes.md) for more information.  
  
 Also see the following keywords: [class](../cpp/class-cpp.md), [private](../cpp/private-cpp.md), [public](../cpp/public-cpp.md), and [protected](../cpp/protected-cpp.md).  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)





