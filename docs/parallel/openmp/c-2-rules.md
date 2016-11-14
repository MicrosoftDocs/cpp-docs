---
title: "C.2 Rules | Microsoft Docs"
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
ms.assetid: 4d52fef7-3eb7-4480-a335-8ed48681092b
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
# C.2 Rules
The notation is described in section 6.1 of the C standard. This grammar appendix shows the extensions to the base language grammar for the OpenMP C and C++ directives.  
  
 **/\* in C++ (ISO/IEC 14882:1998) \*/**  
  
 *statement-seq*:  
  
 *statement*  
  
 *openmp-directive*  
  
 *statement-seq statement*  
  
 *statement-seq openmp-directive*  
  
 **/\* in C90 (ISO/IEC 9899:1990) \*/**  
  
 *statement-list*:  
  
 *statement*  
  
 *openmp-directive*  
  
 *statement-list statement*  
  
 *statement-list openmp-directive*  
  
 **/\* in C99 (ISO/IEC 9899:1999) \*/**  
  
 *block-item*:  
  
 *declaration*  
  
 *statement*  
  
 *openmp-directive*  
  
 *statement*:  
  
 **/\* standard statements \*/**  
  
 *openmp-construct*  
  
 *openmp-construct*:  
  
 *parallel-construct*  
  
 *for-construct*  
  
 *sections-construct*  
  
 *single-construct*  
  
 *parallel-for-construct*  
  
 *parallel-sections-construct*  
  
 *master-construc*  
  
 *critical-construct*  
  
 *atomic-construct*  
  
 *ordered-construct*  
  
 *openmp-directive*:  
  
 *barrier-directive*  
  
 *flush-directive*  
  
 *structured-block*:  
  
 *statement*  
  
 *parallel-construct*:  
  
 *parallel-directive structured-block*  
  
 *parallel-directive*:  
  
 **# pragma omp parallel**  *parallel-clause*optseq *new-line*  
  
 *parallel-clause*:  
  
 *unique-parallel-clause*  
  
 *data-clause*  
  
 *unique-parallel-clause*:  
  
 **if (** *expression* **)**  
  
 **num_threads (** *expression* **)**  
  
 *for-construct*:  
  
 *for-directive iteration-statement*  
  
 *for-directive*:  
  
 **# pragma omp for** *for-clause*optseq *new-line*  
  
 *for-clause*:  
  
 *unique-for-clause*  
  
 *data-clause*  
  
 **nowait**  
  
 *unique-for-clause*:  
  
 **ordered**  
  
 **schedule (** *schedule-kind* **)**  
  
 **schedule (** *schedule-kind* **,** *expression* **)**  
  
 *schedule-kind*:  
  
 **static**  
  
 **dynamic**  
  
 **guided**  
  
 **runtime**  
  
 *sections-construct*:  
  
 *sections-directive section-scope*  
  
 *sections-directive*:  
  
 **# pragma omp sections** *sections-clause*optseq *new-line*  
  
 *sections-clause*:  
  
 *data-clause*  
  
 **nowait**  
  
 *section-scope*:  
  
 *{ section-sequence }*  
  
 *section-sequence*:  
  
 *section-directive*opt *structured-block*  
  
 *section-sequence section-directive structured-block*  
  
 *section-directive*:  
  
 **# pragma omp section** *new-line*  
  
 *single-construct*:  
  
 *single-directive structured-block*  
  
 *single-directive*:  
  
 **# pragma omp single** *single-clause*optseq *new-line*  
  
 *single-clause*:  
  
 *data-clause*  
  
 **nowait**  
  
 *parallel-for-construct*:  
  
 *parallel-for-directive iteration-statement*  
  
 *parallel-for-directive*:  
  
 **# pragma omp parallel for** *parallel-for-clause*optseq *new-line*  
  
 *parallel-for-clause*:  
  
 *unique-parallel-clause*  
  
 *unique-for-clause*  
  
 *data-clause*  
  
 *parallel-sections-construct*:  
  
 *parallel-sections-directive section-scope*  
  
 *parallel-sections-directive*:  
  
 **# pragma omp parallel sections** *parallel-sections-clause*optseq *new-line*  
  
 *parallel-sections-clause*:  
  
 *unique-parallel-clause*  
  
 *data-clause*  
  
 *master-construct*:  
  
 *master-directive structured-block*  
  
 *master-directive*:  
  
 **# pragma omp master** *new-line*  
  
 *critical-construct*:  
  
 *critical-directive structured-block*  
  
 *critical-directive*:  
  
 **# pragma omp critical** *region-phrase*opt *new-line*  
  
 *region-phrase*:  
  
 *( identifier )*  
  
 *barrier-directive*:  
  
 **# pragma omp barrier** *new-line*  
  
 *atomic-construct*:  
  
 *atomic-directive expression-statement*  
  
 *atomic-directive*:  
  
 **# pragma omp atomic** *new-line*  
  
 *flush-directive*:  
  
 **# pragma omp flush** *flush-vars*opt *new-line*  
  
 *flush-vars*:  
  
 *( variable-list )*  
  
 *ordered-construct*:  
  
 *ordered-directive structured-block*  
  
 *ordered-directive*:  
  
 **# pragma omp ordered** *new-line*  
  
 *declaration*:  
  
 **/\* standard declarations \*/**  
  
 *threadprivate-directive*  
  
 *threadprivate-directive*:  
  
 **# pragma omp threadprivate (** *variable-list*  **)** *new-line*  
  
 *data-clause*:  
  
 **private (** *variable-list* **)**  
  
 **copyprivate (**  *variable-list*  **)**  
  
 **firstprivate (**  *variable-list*  **)**  
  
 **lastprivate (** *variable-list*  **)**  
  
 **shared (** *variable-list* **)**  
  
 **default ( shared )**  
  
 **default ( none )**  
  
 **reduction (**  *reduction-operator*  **:**  *variable-list*  **)**  
  
 **copyin (**  *variable-list*  **)**  
  
 *reduction-operator*:  
  
 *One of*: **+ \* - & ^ &#124; && &#124;&#124;**  
  
 **/\* in C \*/**  
  
 *variable-list*:  
  
 *identifier*  
  
 *variable-list* **,** *identifier*  
  
 **/\* in C++ \*/**  
  
 *variable-list*:  
  
 *id-expression*  
  
 *variable-list* **,** *id-expression*