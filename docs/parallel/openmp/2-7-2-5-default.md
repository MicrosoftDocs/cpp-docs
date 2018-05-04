---
title: "2.7.2.5 default | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: c856df07-705c-4ad3-9105-a268dd33e939
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.7.2.5 default
The **default** clause allows the user to affect the data-sharing attributes of variables. The syntax of the **default** clause is as follows:  
  
```  
default(shared | none)  
```  
  
 Specifying **default(shared)** is equivalent to explicitly listing each currently visible variable in a **shared** clause, unless it is **threadprivate** or **cons**`t`-qualified. In the absence of an explicit **default** clause, the default behavior is the same as if **default(shared)** were specified.  
  
 Specifying **default(none)** requires that at least one of the following must be true for every reference to a variable in the lexical extent of the parallel construct:  
  
-   The variable is explicitly listed in a data-sharing attribute clause of a construct that contains the reference.  
  
-   The variable is declared within the parallel construct.  
  
-   The variable is **threadprivate**.  
  
-   The variable has a **const**-qualified type.  
  
-   The variable is the loop control variable for a **for** loop that immediately follows a **for** or **parallel for** directive, and the variable reference appears inside the loop.  
  
 Specifying a variable on a **firstprivate**, **lastprivate**, or **reduction** clause of an enclosed directive causes an implicit reference to the variable in the enclosing context. Such implicit references are also subject to the requirements listed above.  
  
 Only a single **default** clause may be specified on a **parallel** directive.  
  
 A variable's default data-sharing attribute can be overridden by using the **private**, **firstprivate**, **lastprivate**, **reduction**, and **shared** clauses, as demonstrated by the following example:  
  
```  
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\  
   private(x)  private(r)  lastprivate(i)  
```