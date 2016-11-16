---
title: "bitor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
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
apitype: "DLLExport"
f1_keywords: 
  - "bitor"
  - "std.bitor"
  - "std::bitor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitor function"
ms.assetid: 3c0a3711-9c74-41f2-b400-2f7797da30d1
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
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
# bitor
An alternative to the &#124; operator.  
  
## Syntax  
  
```  
  
#define bitor |  
  
```  
  
## Remarks  
 The macro yields the operator &#124;.  
  
## Example  
  
```  
// iso646_bitor.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 1, b = 2, result;  
  
   result = a | b;  
   cout << result << endl;  
  
   result= a bitor b;  
   cout << result << endl;  
}  
```  
  
```Output  
3  
3  
```  
  
## Requirements  
 **Header:** \<iso646.h>