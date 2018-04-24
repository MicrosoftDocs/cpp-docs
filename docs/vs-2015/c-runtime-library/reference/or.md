---
title: "or | Microsoft Docs"
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
  - "std::or"
  - "std.or"
  - "Or"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "or function"
ms.assetid: 6523b3ac-0a18-44ec-9e9a-b9bab8525ead
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# or
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [or](https://docs.microsoft.com/cpp/c-runtime-library/reference/or).  
  
An alternative to the &#124;&#124; operator.  
  
## Syntax  
  
```  
  
#define or ||  
  
```  
  
## Remarks  
 The macro yields the operator &#124;&#124;.  
  
## Example  
  
```  
// iso646_or.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   bool a = true, b = false, result;  
  
   boolalpha(cout);  
  
   result= a || b;  
   cout << result << endl;  
  
   result= a or b;  
   cout << result << endl;  
}  
```  
  
```Output  
true  
true  
```  
  
## Requirements  
 **Header:** \<iso646.h>





