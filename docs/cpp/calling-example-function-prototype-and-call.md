---
title: "Calling Example: Function Prototype and Call | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["calling conventions, examples [C++]", "examples [C++], calling conventions"]
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Calling Example: Function Prototype and Call
## Microsoft Specific  
 The following example shows the results of making a function call using various calling conventions.  
  
 This example is based on the following function skeleton. Replace `calltype` with the appropriate calling convention.  
  
```  
void    calltype MyFunc( char c, short s, int i, double f );  
.  
.  
.  
void    MyFunc( char c, short s, int i, double f )  
    {  
    .  
    .  
    .  
    }  
.  
.  
.  
MyFunc ('x', 12, 8192, 2.7183);  
```  
  
 For more information, see [Results of Calling Example](../cpp/results-of-calling-example.md).  
  
**END Microsoft Specific**  
  
## See Also  
 [Calling Conventions](../cpp/calling-conventions.md)