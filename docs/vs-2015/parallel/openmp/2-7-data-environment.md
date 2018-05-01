---
title: "2.7 Data Environment | Microsoft Docs"
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
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7 Data Environment
[!INCLUDE[blank_token](../../includes/blank-token.md)]

This section presents a directive and several clauses for controlling the data environment during the execution of parallel regions, as follows:  
  
-   A **threadprivate** directive (see the following section) is provided to make file- scope, namespace-scope, or static block-scope variables local to a thread.  
  
-   Clauses that may be specified on the directives to control the sharing attributes of variables for the duration of the parallel or work-sharing constructs are described in [Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.