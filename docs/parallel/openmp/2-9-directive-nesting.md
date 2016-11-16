---
title: "2.9 Directive Nesting | Microsoft Docs"
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
ms.assetid: 6565a43c-fd2d-4366-8322-8d75e1b06600
caps.latest.revision: 4
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
# 2.9 Directive Nesting
Dynamic nesting of directives must adhere to the following rules:  
  
-   A **parallel** directive dynamically inside another **parallel** logically establishes a new team, which is composed of only the current thread, unless nested parallelism is enabled.  
  
-   **for**, **sections**, and **single** directives that bind to the same **parallel** are not allowed to be nested inside each other.  
  
-   **critical** directives with the same name are not allowed to be nested inside each other. Note this restriction is not sufficient to prevent deadlock.  
  
-   **for**, **sections**, and **single** directives are not permitted in the dynamic extent of **critical**, **ordered**, and **master** regions if the directives bind to the same **parallel** as the regions.  
  
-   **barrier** directives are not permitted in the dynamic extent of **for**, **ordered**, **sections**, **single**, **master**, and **critical** regions if the directives bind to the same **parallel** as the regions.  
  
-   **master** directives are not permitted in the dynamic extent of **for**, **sections**, and **single** directives if the **master** directives bind to the same **parallel** as the work-sharing directives.  
  
-   **ordered** directives are not allowed in the dynamic extent of **critical** regions if the directives bind to the same **parallel** as the regions.  
  
-   Any directive that is permitted when executed dynamically inside a parallel region is also permitted when executed outside a parallel region. When executed dynamically outside a user-specified parallel region, the directive is executed by a team composed of only the master thread.