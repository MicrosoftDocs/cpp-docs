---
title: "&lt;iomanip&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "iomanip/std::<iomanip>"
  - "std::<iomanip>"
  - "<iomanip>"
  - "std.<iomanip>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iomanip header"
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
caps.latest.revision: 20
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# &lt;iomanip&gt;
Include the `iostreams` standard header `<iomanip>` to define several manipulators that each take a single argument.  
  
## Syntax  
  
```  
#include <iomanip>  
  
```  
  
## Remarks  
 Each of these manipulators returns an unspecified type, called **T1** through **T10**, that overloads both `basic_istream`\<**Elem**, **Tr**>`::`[operator>>](../stdcpplib/-istream--operators.md#operator_gt__gt_) and `basic_ostream`\<**Elem**, **Tr**>`::`[operator<<](../stdcpplib/-ostream--operators.md#operator_lt__lt_).  
  
### Manipulators  
  
|||  
|-|-|  
|[get_money](../stdcpplib/-iomanip--functions.md#iomanip_get_money)|Obtains a monetary amount, optionally in international format.|  
|[get_time](../stdcpplib/-iomanip--functions.md#iomanip_get_time)|Obtains a time in a time structure by using a specified format.|  
|[put_money](../stdcpplib/-iomanip--functions.md#iomanip_put_money)|Provides a monetary amount, optionally in international format.|  
|[put_time](../stdcpplib/-iomanip--functions.md#iomanip_put_time)|Provides a time in a time structure and a format string to use.|  
|[quoted](../stdcpplib/-iomanip--functions.md#quoted)|Enables convenient round-tripping of strings with insertion and extraction operators.|  
|[resetiosflags](../stdcpplib/-iomanip--functions.md#resetiosflags)|Clears the specified flags.|  
|[setbase](../stdcpplib/-iomanip--functions.md#setbase)|Set base for integers.|  
|[setfill](../stdcpplib/-iomanip--functions.md#setfill)|Sets the character that will be used to fill spaces in a right-justified display.|  
|[setiosflags](../stdcpplib/-iomanip--functions.md#setiosflags)|Sets the specified flags.|  
|[setprecision](../stdcpplib/-iomanip--functions.md#setprecision)|Sets the precision for floating-point values.|  
|[setw](../stdcpplib/-iomanip--functions.md#setw)|Specifies the width of the display field.|  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [iostream Programming](../stdcpplib/iostream-programming.md)   
 [iostreams Conventions](../stdcpplib/iostreams-conventions.md)

