---
title: "2.4.2 sections Construct | Microsoft Docs"
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
ms.assetid: e9e6e3ea-7fc9-4925-8f68-92b8a5bb1e76
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
# 2.4.2 sections Construct
The **sections** directive identifies a noniterative work-sharing construct that specifies a set of constructs that are to be divided among threads in a team. Each section is executed once by a thread in the team. The syntax of the **sections** directive is as follows:  
  
```  
#pragma omp sections [clause[[,] clause] ...] new-line  
   {  
   [#pragma omp section new-line]  
      structured-block  
   [#pragma omp section new-linestructured-block ]  
...  
}  
```  
  
 The clause is one of the following:  
  
 **private(** *variable-list* **)**  
  
 **firstprivate(** *variable-list* **)**  
  
 **lastprivate(** *variable-list* **)**  
  
 **reduction(** *operator* **:**  *variable-list* **)**  
  
 **nowait**  
  
 Each section is preceded by a **section** directive, although the **section** directive is optional for the first section. The **section** directives must appear within the lexical extent of the **sections** directive. There is an implicit barrier at the end of a **sections** construct, unless a **nowait** is specified.  
  
 Restrictions to the **sections** directive are as follows:  
  
-   A **section** directive must not appear outside the lexical extent of the **sections** directive.  
  
-   Only a single **nowait** clause can appear on a **sections** directive.  
  
## Cross References:  
  
-   **private**, **firstprivate**, **lastprivate**, and **reduction** clauses, see [Section 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) on page 25.