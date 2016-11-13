---
title: "Unwind Procedure | Microsoft Docs"
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
ms.assetid: 82c5d0ca-70be-4d1a-a306-bfe01c29159f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
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
# Unwind Procedure
The unwind code array is sorted into descending order. When an exception occurs, the complete context is stored by the operating system in a context record. The exception dispatch logic is then invoked, which repeatedly executes the following steps to find an exception handler.  
  
1.  Use the current RIP stored in the context record to search for a RUNTIME_FUNCTION table entry that describes the current function (or function portion, in the case of chained UNWIND_INFO entries).  
  
2.  If no function table entry is found, then it is in a leaf function, and RSP will directly address the return pointer. The return pointer at [RSP] is stored in the updated context, the simulated RSP is incremented by 8, and step 1 is repeated.  
  
3.  If a function table entry is found, RIP can lie within three regions a) in an epilog, b) in the prolog, or c) in code that may be covered by an exception handler.  
  
    -   Case a) If the RIP is within an epilog, then control is leaving the function, there can be no exception handler associated with this exception for this function, and the effects of the epilog must be continued to compute the context of the caller function. To determine if the RIP is within an epilog, the code stream from RIP on is examined. If that code stream can be matched to the trailing portion of a legitimate epilog, then it is in an epilog, and the remaining portion of the epilog is simulated, with the context record updated as each instruction is processed. After this, step 1 is repeated.  
  
    -   Case b) If the RIP lies within the prologue, then control has not entered the function, there can be no exception handler associated with this exception for this function, and the effects of the prolog must be undone to compute the context of the caller function. The RIP is within the prolog if the distance from the function start to the RIP is less than or equal to the prolog size encoded in the unwind info. The effects of the prolog are unwound by scanning forward through the unwind codes array for the first entry with an offset less than or equal to the offset of the RIP from the function start, then undoing the effect of all remaining items in the unwind code array. Step 1 is then repeated.  
  
    -   Case c) If the RIP is not within a prolog or epilog and the function has an exception handler (UNW_FLAG_EHANDLER is set), then the language specific handler is called. The handler scans its data and calls filter functions as appropriate. The language specific handler can return that the exception was handled or that the search is to be continued. It can also initiate an unwind directly.  
  
4.  If the language specific handler returns a handled status, then execution is continued using the original context record.  
  
5.  If there is no language specific handler or the handler returns a "continue search" status, then the context record must be unwound to the state of the caller. This is accomplished by processing all of the unwind code array elements, undoing the effect of each. Step 1 is then repeated.  
  
 When chained unwind info is involved, these basic steps are still followed. The only difference is that, while walking the unwind code array to unwind a prolog’s effects, once the end of the array is reached, it is then linked to the parent unwind info and the entire unwind code array found there is walked. This linking continues until arriving at an unwind info without the UNW_CHAINED_INFO flag and finish walking its unwind code array.  
  
 The smallest set of unwind data is 8 bytes. This would represent a function that only allocated 128 bytes of stack or less, and possibly saved one nonvolatile register. This is also the size of a chained unwind info structure for a zero-length prolog with no unwind codes.  
  
## See Also  
 [Exception Handling (x64)](../build/exception-handling-x64.md)