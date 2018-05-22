---
title: "or_eq | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "std::or_eq"
  - "or_eq"
  - "std.or_eq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "or_eq function"
ms.assetid: 1eb92464-ed58-40d8-a30e-f0a6aa2f4318
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# or_eq
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [or_eq](https://docs.microsoft.com/cpp/c-runtime-library/reference/or-eq).  
  
An alternative to the &#124;= operator.  
  
## Syntax  
  
```  
  
#define or_eq |=  
  
```  
  
## Remarks  
 The macro yields the operator &#124;=.  
  
## Example  
  
```  
// iso646_oreq.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 3, b = 2, result;  
  
   result= a |= b;  
   cout << result << endl;  
  
   result= a or_eq b;  
   cout << result << endl;  
}  
```  
  
```Output  
3  
3  
```  
  
## Requirements  
 **Header:** \<iso646.h>





