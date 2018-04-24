---
title: "not_eq | Microsoft Docs"
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
  - "not_eq"
  - "std::not_eq"
  - "std.not_eq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "not_eq function"
ms.assetid: d87ad299-8b50-4393-a57f-06f70e1f23fb
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# not_eq
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [not_eq](https://docs.microsoft.com/cpp/c-runtime-library/reference/not-eq).  
  
An alternative to the != operator.  
  
## Syntax  
  
```  
  
#define not_eq !=  
  
```  
  
## Remarks  
 The macro yields the operator !=.  
  
## Example  
  
```  
// iso646_not_eq.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 0, b = 1;  
  
   if (a != b)  
      cout << "a is not equal to b" << endl;  
  
   if (a not_eq b)  
      cout << "a is not equal to b" << endl;  
}  
```  
  
```Output  
a is not equal to b  
a is not equal to b  
```  
  
## Requirements  
 **Header:** \<iso646.h>





