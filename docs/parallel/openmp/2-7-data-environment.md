---
title: "2.7 Data Environment | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.7 Data Environment
This section presents a directive and several clauses for controlling the data environment during the execution of parallel regions, as follows:  
  
-   A **threadprivate** directive (see the following section) is provided to make file- scope, namespace-scope, or static block-scope variables local to a thread.  
  
-   Clauses that may be specified on the directives to control the sharing attributes of variables for the duration of the parallel or work-sharing constructs are described in [Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.