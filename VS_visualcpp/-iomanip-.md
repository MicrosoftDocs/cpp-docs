---
title: "&lt;iomanip&gt;"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
caps.latest.revision: 19
manager: ghogen
translation.priority.mt: 
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
# &lt;iomanip&gt;
Include the `iostreams` standard header `<iomanip>` to define several manipulators that each take a single argument.  
  
## Syntax  
  
```  
#include <iomanip>  
  
```  
  
## Remarks  
 Each of these manipulators returns an unspecified type, called **T1** through **T10**, that overloads both `basic_istream`<**Elem**, **Tr**>`::`[operator>>](../VS_visualcpp/-istream--operators.md#operator_gt__gt_) and `basic_ostream`<**Elem**, **Tr**>`::`[operator<<](../VS_visualcpp/-ostream--operators.md#operator_lt__lt_).  
  
### Manipulators  
  
|||  
|-|-|  
|[get_money](../VS_visualcpp/-iomanip--functions.md#iomanip_get_money)|Obtains a monetary amount, optionally in international format.|  
|[get_time](../VS_visualcpp/-iomanip--functions.md#iomanip_get_time)|Obtains a time in a time structure by using a specified format.|  
|[put_money](../VS_visualcpp/-iomanip--functions.md#iomanip_put_money)|Provides a monetary amount, optionally in international format.|  
|[put_time](../VS_visualcpp/-iomanip--functions.md#iomanip_put_time)|Provides a time in a time structure and a format string to use.|  
|[quoted](../VS_visualcpp/-iomanip--functions.md#quoted)|Enables convenient round-tripping of strings with insertion and extraction operators.|  
|[resetiosflags](../VS_visualcpp/-iomanip--functions.md#resetiosflags)|Clears the specified flags.|  
|[setbase](../VS_visualcpp/-iomanip--functions.md#setbase)|Set base for integers.|  
|[setfill](../VS_visualcpp/-iomanip--functions.md#setfill)|Sets the character that will be used to fill spaces in a right-justified display.|  
|[setiosflags](../VS_visualcpp/-iomanip--functions.md#setiosflags)|Sets the specified flags.|  
|[setprecision](../VS_visualcpp/-iomanip--functions.md#setprecision)|Sets the precision for floating-point values.|  
|[setw](../VS_visualcpp/-iomanip--functions.md#setw)|Specifies the width of the display field.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)