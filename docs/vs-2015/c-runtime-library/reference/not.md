---
title: "not | Microsoft Docs"
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
  - "std::not"
  - "std.not"
  - "Not"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "not function"
ms.assetid: d2ddbd5c-33c0-4aff-8961-feac155b4ba1
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# not
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [not](https://docs.microsoft.com/cpp/c-runtime-library/reference/not).  
  
An alternative to the ! operator.  
  
## Syntax  
  
```  
  
#define not !  
  
```  
  
## Remarks  
 The macro yields the operator !.  
  
## Example  
  
```  
// iso646_not.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 0;  
  
   if (!a)  
      cout << "a is zero" << endl;  
  
   if (not(a))  
      cout << "a is zero" << endl;  
}  
```  
  
```Output  
a is zero  
a is zero  
```  
  
## Requirements  
 **Header:** \<iso646.h>





