---
title: "2.4 Work-sharing Constructs | Microsoft Docs"
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
ms.assetid: 25bb4ded-8466-4daa-a863-766b5a99b995
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.4 Work-sharing Constructs
[!INCLUDE[blank_token](../../includes/blank-token.md)]

A work-sharing construct distributes the execution of the associated statement among the members of the team that encounter it. The work-sharing directives do not launch new threads, and there is no implied barrier on entry to a work-sharing construct.  
  
 The sequence of work-sharing constructs and **barrier** directives encountered must be the same for every thread in a team.  
  
 OpenMP defines the following work-sharing constructs, and these are described in the sections that follow:  
  
-   **for** directive  
  
-   **sections** directive  
  
-   **single** directive