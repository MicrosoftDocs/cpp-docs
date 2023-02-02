---
description: "Learn more about: C. OpenMP C and C++ grammar"
title: "C. OpenMP C and C++ grammar"
ms.date: "01/16/2019"
ms.assetid: 97a878ce-1533-47f7-a134-66fcbff48524
---
# C. OpenMP C and C++ grammar

[C.1 Notation](#c1-notation)<br/>
[C.2 Rules](#c2-rules)

## C.1 Notation

The grammar rules consist of the name for a non-terminal, followed by a colon, followed by replacement alternatives on separate lines.

The syntactic expression term<sub>opt</sub> indicates that the term is optional within the replacement.

The syntactic expression *term*<sub>optseq</sub> is equivalent to *term-seq*<sub>opt</sub> with the following additional rules:

*term-seq*:  
&emsp;*term*\
&emsp;*term-seq* *term*\
&emsp;*term-seq*   `,` *term*

## C.2 Rules

The notation is described in section 6.1 of the C standard. This grammar appendix shows the extensions to the base language grammar for the OpenMP C and C++ directives.

**/\* in C++ (ISO/IEC 14882:1998) \*/**

*statement-seq*:\
&emsp;*statement*\
&emsp;*openmp-directive*\
&emsp;*statement-seq statement*\
&emsp;*statement-seq openmp-directive*

**/\* in C90 (ISO/IEC 9899:1990) \*/**

*statement-list*:\
&emsp;*statement*\
&emsp;*openmp-directive*\
&emsp;*statement-list statement*\
&emsp;*statement-list openmp-directive*

**/\* in C99 (ISO/IEC 9899:1999) \*/**

*block-item*:\
&emsp;*declaration*\
&emsp;*statement*\
&emsp;*openmp-directive*

**/\* standard statements \*/**

*statement*:\
&emsp;*openmp-construct*

*openmp-construct*:\
&emsp;*parallel-construct*\
&emsp;*for-construct*\
&emsp;*sections-construct*\
&emsp;*single-construct*\
&emsp;*parallel-for-construct*\
&emsp;*parallel-sections-construct*\
&emsp;*master-construct*\
&emsp;*critical-construct*\
&emsp;*atomic-construct*\
&emsp;*ordered-construct*

*openmp-directive*:\
&emsp;*barrier-directive*\
&emsp;*flush-directive*

*structured-block*:\
&emsp;*statement*

*parallel-construct*:\
&emsp;*parallel-directive structured-block*

*parallel-directive*:\
&emsp;  `# pragma omp parallel` *parallel-clause*<sub>optseq</sub> *new-line*

*parallel-clause*:\
&emsp;*unique-parallel-clause*\
&emsp;*data-clause*

*unique-parallel-clause*:\
&emsp;  `if (` *expression*   `)`\
&emsp;  `num_threads (` *expression*   `)`

*for-construct*:\
&emsp;*for-directive iteration-statement*

*for-directive*:\
&emsp;  `# pragma omp for` *for-clause*<sub>optseq</sub> *new-line*

*for-clause*:\
&emsp;*unique-for-clause*\
&emsp;*data-clause*\
&emsp;  `nowait`

*unique-for-clause*:\
&emsp;  `ordered`\
&emsp;  `schedule (` *schedule-kind*   `)`\
&emsp;  `schedule (` *schedule-kind*   `,` *expression*   `)`

*schedule-kind*:\
&emsp;  `static`\
&emsp;  `dynamic`\
&emsp;  `guided`\
&emsp;  `runtime`

*sections-construct*:\
&emsp;*sections-directive section-scope*

*sections-directive*:\
&emsp;  `# pragma omp sections` *sections-clause*<sub>optseq</sub> *new-line*

*sections-clause*:\
&emsp;*data-clause*\
&emsp;  `nowait`

*section-scope*:\
&emsp;*{ section-sequence }*

*section-sequence*:\
&emsp;*section-directive*<sub>opt</sub> *structured-block*\
&emsp;*section-sequence section-directive structured-block*

*section-directive*:\
&emsp;  `# pragma omp section` *new-line*

*single-construct*:\
&emsp;*single-directive structured-block*

*single-directive*:\
&emsp;  `# pragma omp single` *single-clause*<sub>optseq</sub> *new-line*

*single-clause*:\
&emsp;*data-clause*\
&emsp;  `nowait`

*parallel-for-construct*:\
&emsp;*parallel-for-directive iteration-statement*

*parallel-for-directive*:\
&emsp;  `# pragma omp parallel for` *parallel-for-clause*<sub>optseq</sub> *new-line*

*parallel-for-clause*:\
&emsp;*unique-parallel-clause*\
&emsp;*unique-for-clause*\
&emsp;*data-clause*

*parallel-sections-construct*:\
&emsp;*parallel-sections-directive section-scope*

*parallel-sections-directive*:\
&emsp;  `# pragma omp parallel sections` *parallel-sections-clause*<sub>optseq</sub> *new-line*

*parallel-sections-clause*:\
&emsp;*unique-parallel-clause*\
&emsp;*data-clause*

*master-construct*:\
&emsp;*master-directive structured-block*

*master-directive*:\
&emsp;  `# pragma omp master` *new-line*

*critical-construct*:\
&emsp;*critical-directive structured-block*

*critical-directive*:\
&emsp;  `# pragma omp critical` *region-phrase*<sub>opt</sub> *new-line*

*region-phrase*:\
&emsp;*(identifier)*

*barrier-directive*:\
&emsp;  `# pragma omp barrier` *new-line*

*atomic-construct*:\
&emsp;*atomic-directive expression-statement*

*atomic-directive*:\
&emsp;  `# pragma omp atomic` *new-line*

*flush-directive*:\
&emsp;  `# pragma omp flush` *flush-vars*<sub>opt</sub> *new-line*

*flush-vars*:\
&emsp;*(variable-list)*

*ordered-construct*:\
&emsp;*ordered-directive structured-block*

*ordered-directive*:\
&emsp;  `# pragma omp ordered` *new-line*

**/\* standard declarations \*/**

*declaration*:\
&emsp;*threadprivate-directive*

*threadprivate-directive*:\
&emsp;  `# pragma omp threadprivate (` *variable-list*    `)` *new-line*

*data-clause*:\
&emsp;  `private (` *variable-list*   `)`\
&emsp;  `copyprivate (`  *variable-list*    `)`\
&emsp;  `firstprivate (`  *variable-list*    `)`\
&emsp;  `lastprivate (` *variable-list*    `)`\
&emsp;  `shared (` *variable-list*   `)`\
&emsp;  `default ( shared )`\
&emsp;  `default ( none )`\
&emsp;  `reduction (`  *reduction-operator*    `:`  *variable-list*    `)`\
&emsp;  `copyin (`  *variable-list*    `)`

*reduction-operator*:\
&emsp;One of:   `+ \* - & ^ | && ||`

**/\* in C \*/**

*variable-list*:\
&emsp;*identifier*\
&emsp;*variable-list*   `,` *identifier*

**/\* in C++ \*/**

*variable-list*:\
&emsp;*id-expression*\
&emsp;*variable-list*   `,` *id-expression*
