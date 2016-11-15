---
title: "2.5.1 parallel for Construct | Microsoft Docs"
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
ms.assetid: a233e7ed-2462-4f7a-9a5d-556ab9f363d8
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
# 2.5.1 parallel for Construct
The **parallel for** directive is a shortcut for a **parallel** region that contains only a single **for** directive. The syntax of the **parallel for** directive is as follows:  
  
```  
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop  
```  
  
 This directive allows all the clauses of the **parallel** directive and the **for** directive, except the `nowait` clause, with identical meanings and restrictions. The semantics are identical to explicitly specifying a **parallel** directive immediately followed by a **for** directive.  
  
## Cross References:  
  
-   **parallel** directive, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.  
  
-   **for** directive, see [Section 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) on page 11.  
  
-   Data attribute clauses, see [2.7.2 Data-Sharing Attribute Clauses](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.