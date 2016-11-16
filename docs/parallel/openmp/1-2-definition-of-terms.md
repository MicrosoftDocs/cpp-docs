---
title: "1.2 Definition of Terms | Microsoft Docs"
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
ms.assetid: fcaa8eb8-bbbf-4a24-ad0e-e299c442db79
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
# 1.2 Definition of Terms
The following terms are used in this document:  
  
 barrier  
 A synchronization point that must be reached by all threads in a team.  Each thread waits until all threads in the team arrive at this point. There are explicit barriers identified by directives and implicit barriers created by the implementation.  
  
 construct  
 A construct is a statement. It consists of a directive and the subsequent structured block. Note that some directives are not part of a construct. (See *openmp-directive* in [Appendix C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)).  
  
 directive  
 A C or C++ **#pragma** followed by the **omp** identifier, other text, and a new line. The directive specifies program behavior.  
  
 dynamic extent  
 All statements in the *lexical extent*, plus any statement inside a function that is executed as a result of the execution of statements within the lexical extent. A dynamic extent is also referred to as a *region*.  
  
 lexical extent  
 Statements lexically contained within a *structured block*.  
  
 master thread  
 The thread that creates a team when a *parallel region* is entered.  
  
 parallel region  
 Statements that bind to an OpenMP parallel construct and may be executed by multiple threads.  
  
 private  
 A private variable names a block of storage that is unique to the thread making the reference. Note that there are several ways to specify that a variable is private: a definition within a parallel region, a **threadprivate** directive, a **private**, **firstprivate**, **lastprivate**, or **reduction** clause, or use of the variable as a **for**loop control variable in a **for** loop immediately following a **for** or **parallel for** directive.  
  
 region  
 A dynamic extent.  
  
 serial region  
 Statements executed only by the *master thread* outside of the dynamic extent of any *parallel region*.  
  
 serialize  
 To execute a parallel construct with a team of threads consisting of only a single thread (which is the master thread for that parallel construct), with serial order of execution for the statements within the structured block (the same order as if the block were not part of a parallel construct), and with no effect on the value returned by **omp_in_parallel()** (apart from the effects of any nested parallel constructs).  
  
 shared  
 A shared variable names a single block of storage. All threads in a team that access this variable will access this single block of storage.  
  
 structured block  
 A structured block is a statement (single or compound) that has a single entry and a single exit. No statement is a structured block if there is a jump into or out of that statement (including a call to **longjmp**(3C) or the use of **throw**, but a call to **exit** is permitted). A compound statement is a structured block if its execution always begins at the opening **{** and always ends at the closing **}**. An expression statement, selection statement, iteration statement, or **try** block is a structured block if the corresponding compound statement obtained by enclosing it in **{** and **}**would be a structured block. A jump statement, labeled statement, or declaration statement is not a structured block.  
  
 team  
 One or more threads cooperating in the execution of a construct.  
  
 thread  
 An execution entity having a serial flow of control, a set of private variables, and access to shared variables.  
  
 variable  
 An identifier, optionally qualified by namespace names, that names an object.