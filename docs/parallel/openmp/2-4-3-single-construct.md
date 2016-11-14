---
title: "2.4.3 single Construct | Microsoft Docs"
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
ms.assetid: 15c180cd-e462-4b41-bf8c-cb8b1afb1a9b
caps.latest.revision: 7
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
# 2.4.3 single Construct
The **single** directive identifies a construct that specifies that the associated structured block is executed by only one thread in the team (not necessarily the master thread). The syntax of the **single** directive is as follows:  
  
```  
#pragma omp single [clause[[,] clause] ...] new-linestructured-block  
```  
  
 The clause is one of the following:  
  
 **private(** *variable-list* **)**  
  
 **firstprivate(** *variable-list* **)**  
  
 **copyprivate(** *variable-list* **)**  
  
 **nowait**  
  
 There is an implicit barrier after the **single** construct unless a **nowait** clause is specified.  
  
 Restrictions to the **single** directive are as follows:  
  
-   Only a single **nowait** clause can appear on a **single** directive.  
  
-   The **copyprivate** clause must not be used with the **nowait** clause.  
  
## Cross References:  
  
-   **private**, **firstprivate**, and **copyprivate** clauses, see [Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.