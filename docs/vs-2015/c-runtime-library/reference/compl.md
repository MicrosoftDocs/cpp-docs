---
title: "compl | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "compl"
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
  - "std::compl"
  - "std.compl"
  - "compl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compl function"
ms.assetid: e03f6fb5-cb8b-4afa-99c0-905f4105fb34
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# compl
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [compl](https://docs.microsoft.com/cpp/c-runtime-library/reference/compl).  
  
An alternative to the ~ operator.  
  
## Syntax  
  
```  
  
#define compl ~  
  
```  
  
## Remarks  
 The macro yields the operator ~.  
  
## Example  
  
```  
// iso646_compl.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 1, result;  
  
   result = ~a;  
   cout << result << endl;  
  
   result= compl(a);  
   cout << result << endl;  
}  
```  
  
```Output  
-2  
-2  
```  
  
## Requirements  
 **Header:** \<iso646.h>





