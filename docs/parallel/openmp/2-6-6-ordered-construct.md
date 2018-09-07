---
title: "2.6.6 ordered Construct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 5b3c1ba5-cfb8-4b05-865b-f446ae1c9f7c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.6.6 ordered Construct
The structured block following an **ordered** directive is executed in the order in which iterations would be executed in a sequential loop. The syntax of the **ordered** directive is as follows:  
  
```  
#pragma omp ordered new-linestructured-block  
```  
  
 An **ordered** directive must be within the dynamic extent of a **for** or **parallel for** construct. The **for** or **parallel for** directive to which the **ordered** construct binds must have an **ordered** clause specified as described in [Section 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) on page 11. In the execution of a **for** or **parallel for** construct with an **ordered** clause, **ordered** constructs are executed strictly in the order in which they would be executed in a sequential execution of the loop.  
  
 Restrictions to the **ordered** directive are as follows:  
  
-   An iteration of a loop with a **for** construct must not execute the same ordered directive more than once, and it must not execute more than one **ordered** directive.