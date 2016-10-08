---
title: "xor"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: 0fe9554b-d87b-4487-92ed-366c6dc21df2
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# xor
An alternative to the ^ operator.  
  
## Syntax  
  
```  
  
#define xor ^  
  
```  
  
## Remarks  
 The macro yields the operator ^.  
  
## Example  
  
```  
// iso646_xor.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iso646.h>  
  
int main( )  
{  
   using namespace std;  
   int a = 3, b = 2, result;  
  
   result= a ^ b;  
   cout << result << endl;  
  
   result= a xor_eq b;  
   cout << result << endl;  
}  
```  
  
 **1**  
**1**   
## Requirements  
 **Header:** <iso646.h>