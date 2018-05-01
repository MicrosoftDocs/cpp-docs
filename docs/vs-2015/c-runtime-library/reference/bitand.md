---
title: "bitand | Microsoft Docs"
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
  - "std::bitand"
  - "std.bitand"
  - "bitand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitand function"
ms.assetid: 279cf9b5-fac1-49de-b329-f1a31b3481fe
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bitand
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [bitand](https://docs.microsoft.com/cpp/c-runtime-library/reference/bitand).  
  
An alternative to the & operator.  
  
## Syntax  
  
```  
  
#define bitand &  
  
```  
  
## Remarks  
 The macro yields the operator  
  
## Example  
  
```  
// iso646_bitand.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 1, b = 2, result;  
  
   result = a & b;  
   cout << result << endl;  
  
   result= a bitand b;  
   cout << result << endl;  
}  
```  
  
```Output  
0  
0  
```  
  
## Requirements  
 **Header:** \<iso646.h>





