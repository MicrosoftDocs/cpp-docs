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
&nbsp;&nbsp;&nbsp;&nbsp;*term*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*term-seq* *term*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*term-seq*   `,` *term*

## C.2 Rules

The notation is described in section 6.1 of the C standard. This grammar appendix shows the extensions to the base language grammar for the OpenMP C and C++ directives.

**/\* in C++ (ISO/IEC 14882:1998) \*/**

*statement-seq*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*openmp-directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement-seq statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement-seq openmp-directive*

**/\* in C90 (ISO/IEC 9899:1990) \*/**

*statement-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*openmp-directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement-list statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement-list openmp-directive*

**/\* in C99 (ISO/IEC 9899:1999) \*/**

*block-item*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*openmp-directive*

**/\* standard statements \*/**

*statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*openmp-construct*

*openmp-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallel-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*for-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sections-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*single-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallel-for-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallel-sections-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*master-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*critical-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*atomic-construct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*ordered-construct*

*openmp-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*barrier-directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*flush-directive*

*structured-block*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement*

*parallel-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallel-directive structured-block*

*parallel-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp parallel` *parallel-clause*<sub>optseq</sub> *new-line*

*parallel-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unique-parallel-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clause*

*unique-parallel-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `if (` *expression*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `num_threads (` *expression*   `)`

*for-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*for-directive iteration-statement*

*for-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp for` *for-clause*<sub>optseq</sub> *new-line*

*for-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unique-for-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `nowait`

*unique-for-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `ordered`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `schedule (` *schedule-kind*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `schedule (` *schedule-kind*   `,` *expression*   `)`

*schedule-kind*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `static`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `dynamic`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `guided`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `runtime`

*sections-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sections-directive section-scope*

*sections-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp sections` *sections-clause*<sub>optseq</sub> *new-line*

*sections-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `nowait`

*section-scope*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*{ section-sequence }*

*section-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*section-directive*<sub>opt</sub> *structured-block*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*section-sequence section-directive structured-block*

*section-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp section` *new-line*

*single-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*single-directive structured-block*

*single-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp single` *single-clause*<sub>optseq</sub> *new-line*

*single-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `nowait`

*parallel-for-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallel-for-directive iteration-statement*

*parallel-for-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp parallel for` *parallel-for-clause*<sub>optseq</sub> *new-line*

*parallel-for-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unique-parallel-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unique-for-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clause*

*parallel-sections-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallel-sections-directive section-scope*

*parallel-sections-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp parallel sections` *parallel-sections-clause*<sub>optseq</sub> *new-line*

*parallel-sections-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unique-parallel-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clause*

*master-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*master-directive structured-block*

*master-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp master` *new-line*

*critical-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*critical-directive structured-block*

*critical-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp critical` *region-phrase*<sub>opt</sub> *new-line*

*region-phrase*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*(identifier)*

*barrier-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp barrier` *new-line*

*atomic-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*atomic-directive expression-statement*

*atomic-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp atomic` *new-line*

*flush-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp flush` *flush-vars*<sub>opt</sub> *new-line*

*flush-vars*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*(variable-list)*

*ordered-construct*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*ordered-directive structured-block*

*ordered-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp ordered` *new-line*

**/\* standard declarations \*/**

*declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*threadprivate-directive*

*threadprivate-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp threadprivate (` *variable-list*    `)` *new-line*

*data-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `private (` *variable-list*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `copyprivate (`  *variable-list*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `firstprivate (`  *variable-list*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `lastprivate (` *variable-list*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `shared (` *variable-list*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `default ( shared )`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `default ( none )`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `reduction (`  *reduction-operator*    `:`  *variable-list*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `copyin (`  *variable-list*    `)`

*reduction-operator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;One of:   `+ \* - & ^ | && ||`

**/\* in C \*/**

*variable-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*variable-list*   `,` *identifier*

**/\* in C++ \*/**

*variable-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*variable-list*   `,` *id-expression*
