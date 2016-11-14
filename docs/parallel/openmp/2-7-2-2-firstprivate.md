---
title: "2.7.2.2 firstprivate | Microsoft Docs"
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
ms.assetid: ece6ff12-2be1-4e4f-866c-d39345fd87b5
caps.latest.revision: 8
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
# 2.7.2.2 firstprivate
The **firstprivate** clause provides a superset of the functionality provided by the **private** clause. The syntax of the **firstprivate** clause is as follows:  
  
```  
firstprivate(variable-list)  
```  
  
 Variables specified in *variable-list* have **private** clause semantics, as described in [Section 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) on page 25. The initialization or construction happens as if it were done once per thread, prior to the thread's execution of the construct. For a **firstprivate** clause on a parallel construct, the initial value of the new private object is the value of the original object that exists immediately prior to the parallel construct for the thread that encounters it. For a **firstprivate** clause on a work-sharing construct, the initial value of the new private object for each thread that executes the work-sharing construct is the value of the original object that exists prior to the point in time that the same thread encounters the work-sharing construct. In addition, for C++ objects, the new private object for each thread is copy constructed from the original object.  
  
 The restrictions to the **firstprivate** clause are as follows:  
  
-   A variable specified in a **firstprivate** clause must not have an incomplete type or a reference type.  
  
-   A variable with a class type that is specified as **firstprivate** must have an accessible, unambiguous copy constructor.  
  
-   Variables that are private within a parallel region or that appear in the **reduction** clause of a **parallel** directive cannot be specified in a **firstprivate** clause on a work-sharing directive that binds to the parallel construct.