---
title: "and | Microsoft Docs"
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
  - "And"
  - "std.and"
  - "std::and"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "and macro"
ms.assetid: 2644ab57-8e1b-48f0-9021-cafe3e26bdc4
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# and
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [and](https://docs.microsoft.com/cpp/c-runtime-library/reference/and).  
  
An alternative to the && operator.  
  
## Syntax  
  
```  
  
#define and &&  
  
```  
  
## Remarks  
 The macro yields the operator &&.  
  
## Example  
  
```  
// iso646_and.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   bool a = true, b = false, result;  
  
   boolalpha(cout);  
  
   result= a && b;  
   cout << result << endl;  
  
   result= a and b;  
   cout << result << endl;  
}  
```  
  
```Output  
false  
false  
```  
  
## Requirements  
 **Header:** \<iso646.h>





