---
title: "Calling Example: Function Prototype and Call | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  
## END Microsoft Specific  
  
## See Also  
 [Calling Conventions](../cpp/calling-conventions.md)