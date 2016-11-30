---
title: "virtual (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# virtual (C++)
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
 See [Virtual Functions](../cpp/virtual-functions.md) for more information.  
  
 Also see the following keywords: [class](../cpp/class-cpp.md), [private](../cpp/private-cpp.md), [public](../cpp/public-cpp.md), and [protected](../cpp/protected-cpp.md).  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)