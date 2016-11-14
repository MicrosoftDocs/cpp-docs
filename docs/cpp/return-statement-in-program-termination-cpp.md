---
title: "return Statement in Program Termination (C++) | Microsoft Docs"
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
  - "data types [C++], function return types"
  - "function return types, return statement"
  - "return keyword [C++], syntax"
ms.assetid: 66d002ab-5625-4b68-8446-71e1b8fcdbd8
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
# return Statement in Program Termination (C++)
Issuing a `return` statement from **main** is functionally equivalent to calling the **exit** function. Consider the following example:  
  
```  
// return_statement.cpp  
#include <stdlib.h>  
int main()  
{  
    exit( 3 );  
    return 3;  
}  
```  
  
 The **exit** and `return` statements in the preceding example are functionally identical. However, C++ requires that functions that have return types other than `void` return a value. The `return` statement allows you to return a value from **main**.  
  
## See Also  
 [Program Termination](../cpp/program-termination.md)