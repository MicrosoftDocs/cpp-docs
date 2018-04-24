---
title: "2.7.2.3 lastprivate | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 77f6a5c9-704f-4a88-8476-29db852ed800
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.3 lastprivate
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The `lastprivate` clause provides a superset of the functionality provided by the `private` clause. The syntax of the `lastprivate` clause is as follows:  
  
```  
lastprivate(variable-list)  
```  
  
 Variables specified in the *variable-list* have `private` clause semantics. When a `lastprivate` clause appears on the directive that identifies a work-sharing construct, the value of each `lastprivate` variable from the sequentially last iteration of the associated loop, or the lexically last section directive, is assigned to the variable's original object. Variables that are not assigned a value by the last iteration of the **for** or **parallel for**, or by the lexically last section of the **sections** or **parallel sections** directive, have indeterminate values after the construct. Unassigned subobjects also have an indeterminate value after the construct.  
  
 The restrictions to the `lastprivate` clause are as follows:  
  
-   All restrictions for `private` apply.  
  
-   A variable with a class type that is specified as `lastprivate` must have an accessible, unambiguous copy assignment operator.  
  
-   Variables that are private within a parallel region or that appear in the `reduction` clause of a **parallel** directive cannot be specified in a `lastprivate` clause on a work-sharing directive that binds to the parallel construct.