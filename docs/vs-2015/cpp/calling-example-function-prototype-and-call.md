---
title: "Calling Example: Function Prototype and Call | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calling conventions, examples [C++]"
  - "examples [C++], calling conventions"
ms.assetid: e4275d1f-df2e-4bfc-a162-eb43ec69554a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Calling Example: Function Prototype and Call
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Calling Example: Function Prototype and Call](https://docs.microsoft.com/cpp/cpp/calling-example-function-prototype-and-call).  
  
Microsoft Specific  
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
  
## END Microsoft Specific  
  
## See Also  
 [Calling Conventions](../cpp/calling-conventions.md)





