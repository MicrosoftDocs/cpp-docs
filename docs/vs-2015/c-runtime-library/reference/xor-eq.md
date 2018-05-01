---
title: "xor_eq | Microsoft Docs"
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
  - "std.xor_eq"
  - "xor_eq"
  - "std::xor_eq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "xor_eq function"
ms.assetid: eca4b6b4-b77a-4d44-a09a-5a7e69fdb56c
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# xor_eq
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [xor_eq](https://docs.microsoft.com/cpp/c-runtime-library/reference/xor-eq).  
  
An alternative to the ^= operator.  
  
## Syntax  
  
```  
  
#define xor_eq ^=  
  
```  
  
## Remarks  
 The macro yields the operator ^=.  
  
## Example  
  
```  
// iso646_xor_eq.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 3, b = 2, result;  
  
   result= a ^= b;  
   cout << result << endl;  
  
   a = 3;  
   b = 2;  
  
   result= a xor_eq b;  
   cout << result << endl;  
}  
```  
  
```Output  
1  
1  
```  
  
## Requirements  
 **Header:** \<iso646.h>





