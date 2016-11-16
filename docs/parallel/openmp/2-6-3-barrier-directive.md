---
title: "2.6.3 barrier Directive | Microsoft Docs"
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
ms.assetid: 4485a3d7-533f-4fec-8128-a131bec7fa16
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
# 2.6.3 barrier Directive
The **barrier** directive synchronizes all the threads in a team. When encountered, each thread in the team waits until all of the others have reached this point. The syntax of the **barrier** directive is as follows:  
  
```  
#pragma omp barrier new-line  
```  
  
 After all threads in the team have encountered the barrier, each thread in the team begins executing the statements after the barrier directive in parallel. Note that because the **barrier** directive does not have a C language statement as part of its syntax, there are some restrictions on its placement within a program. See [Appendix C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) for the formal grammar. The example below illustrates these restrictions.  
  
```  
/* ERROR - The barrier directive cannot be the immediate  
*          substatement of an if statement  
*/  
if (x!=0)  
   #pragma omp barrier  
...  
  
/* OK - The barrier directive is enclosed in a  
*      compound statement.  
*/  
if (x!=0) {  
   #pragma omp barrier  
}  
```