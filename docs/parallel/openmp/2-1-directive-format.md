---
title: "2.1 Directive Format | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 918b6445-d35e-4176-9565-b045be941b4d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.1 Directive Format
The syntax of an OpenMP directive is formally specified by the grammar in [Appendix C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md), and informally as follows:  
  
```  
#pragma omp directive-name  [clause[ [,] clause]...] new-line  
```  
  
 Each directive starts with  **#pragma omp**, to reduce the potential for conflict with other (non-OpenMP or vendor extensions to OpenMP) pragma directives with the same names. The remainder of the directive follows the conventions of the C and C++ standards for compiler directives. In particular, white space can be used before and after the **#**, and sometimes white space must be used to separate the words in a directive. Preprocessing tokens following the **#pragma omp** are subject to macro replacement.  
  
 Directives are case-sensitive. The order in which clauses appear in directives is not significant. Clauses on directives may be repeated as needed, subject to the restrictions listed in the description of each clause. If *variable-list* appears in a clause, it must specify only variables. Only one *directive-name* can be specified per directive.  For example, the following directive is not allowed:  
  
```  
/* ERROR - multiple directive names not allowed */  
#pragma omp parallel barrier  
```  
  
 An OpenMP directive applies to at most one succeeding statement, which must be a structured block.