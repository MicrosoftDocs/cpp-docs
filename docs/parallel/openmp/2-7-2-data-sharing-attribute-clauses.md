---
title: "2.7.2 Data-Sharing Attribute Clauses | Microsoft Docs"
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
ms.assetid: 47347d3c-18bd-441f-99cf-7737564c417f
caps.latest.revision: 6
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
# 2.7.2 Data-Sharing Attribute Clauses
Several directives accept clauses that allow a user to control the sharing attributes of variables for the duration of the region. Sharing attribute clauses apply only to variables in the lexical extent of the directive on which the clause appears. Not all of the following clauses are allowed on all directives. The list of clauses that are valid on a particular directive are described with the directive.  
  
 If a variable is visible when a parallel or work-sharing construct is encountered, and the variable is not specified in a sharing attribute clause or **threadprivate** directive, then the variable is shared. Static variables declared within the dynamic extent of a parallel region are shared. Heap allocated memory (for example, using **malloc()** in C or C++ or the **new** operator in C++) is shared. (The pointer to this memory, however, can be either private or shared.) Variables with automatic storage duration declared within the dynamic extent of a parallel region are private.  
  
 Most of the clauses accept a *variable-list* argument, which is a comma-separated list of variables that are visible. If a variable referenced in a data-sharing attribute clause has a type derived from a template, and there are no other references to that variable in the program, the behavior is undefined.  
  
 All variables that appear within directive clauses must be visible. Clauses may be repeated as needed, but no variable may be specified in more than one clause, except that a variable can be specified in both a **firstprivate** and a **lastprivate** clause.  
  
 The following sections describe the data-sharing attribute clauses:  
  
-   **private**, [Section 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) on page 25.  
  
-   **firstprivate**, [Section 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) on page 26.  
  
-   **lastprivate**, [Section 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) on page 27.  
  
-   **shared**, [Section 2.7.2.4](../../parallel/openmp/2-7-2-4-shared.md) on page 27.  
  
-   **default**, [Section 2.7.2.5](../../parallel/openmp/2-7-2-5-default.md) on page 28.  
  
-   **reduction**, [Section 2.7.2.6](../../parallel/openmp/2-7-2-6-reduction.md) on page 28.  
  
-   **copyin**, [Section 2.7.2.7](../../parallel/openmp/2-7-2-7-copyin.md) on page 31.  
  
-   **copyprivate**, [Section 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) on page 32.