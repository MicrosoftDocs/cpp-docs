---
title: "&lt;iomanip&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 21
author: "corob-msft"
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
 Each of these manipulators returns an unspecified type, called **T1** through **T10**, that overloads both `basic_istream`\<**Elem**, **Tr**>`::`[operator>>](../standard-library/istream-operators.md#operator_gt__gt_) and `basic_ostream`\<**Elem**, **Tr**>`::`[operator<<](../standard-library/ostream-operators.md#operator_lt__lt_).  
  
### Manipulators  
  
|||  
|-|-|  
|[get_money](../standard-library/iomanip-functions.md#iomanip_get_money)|Obtains a monetary amount, optionally in international format.|  
|[get_time](../standard-library/iomanip-functions.md#iomanip_get_time)|Obtains a time in a time structure by using a specified format.|  
|[put_money](../standard-library/iomanip-functions.md#iomanip_put_money)|Provides a monetary amount, optionally in international format.|  
|[put_time](../standard-library/iomanip-functions.md#iomanip_put_time)|Provides a time in a time structure and a format string to use.|  
|[quoted](../standard-library/iomanip-functions.md#quoted)|Enables convenient round-tripping of strings with insertion and extraction operators.|  
|[resetiosflags](../standard-library/iomanip-functions.md#resetiosflags)|Clears the specified flags.|  
|[setbase](../standard-library/iomanip-functions.md#setbase)|Set base for integers.|  
|[setfill](../standard-library/iomanip-functions.md#setfill)|Sets the character that will be used to fill spaces in a right-justified display.|  
|[setiosflags](../standard-library/iomanip-functions.md#setiosflags)|Sets the specified flags.|  
|[setprecision](../standard-library/iomanip-functions.md#setprecision)|Sets the precision for floating-point values.|  
|[setw](../standard-library/iomanip-functions.md#setw)|Specifies the width of the display field.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)



