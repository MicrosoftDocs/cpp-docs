---
title: "2.7.2.1 private | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 079b4b84-f2b3-4050-a0ac-289493c36b3d
caps.latest.revision: 6
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
# 2.7.2.1 private
The `private` clause declares the variables in variable-list to be private to each thread in a team. The syntax of the `private` clause is as follows:  
  
```  
private(variable-list)  
```  
  
 The behavior of a variable specified in a `private` clause is as follows. A new object with automatic storage duration is allocated for the construct. The size and alignment of the new object are determined by the type of the variable. This allocation occurs once for each thread in the team, and a default constructor is invoked for a class object if necessary; otherwise the initial value is indeterminate.  The original object referenced by the variable has an indeterminate value upon entry to the construct, must not be modified within the dynamic extent of the construct, and has an indeterminate value upon exit from the construct.  
  
 In the lexical extent of the directive construct, the variable references the new private object allocated by the thread.  
  
 The restrictions to the `private` clause are as follows:  
  
-   A variable with a class type that is specified in a `private` clause must have an accessible, unambiguous default constructor.  
  
-   A variable specified in a `private` clause must not have a **const**-qualified type unless it has a class type with a `mutable` member.  
  
-   A variable specified in a `private` clause must not have an incomplete type or a reference type.  
  
-   Variables that appear in the `reduction` clause of a **parallel** directive cannot be specified in a `private` clause on a work-sharing directive that binds to the parallel construct.