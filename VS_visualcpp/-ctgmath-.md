---
title: "&lt;ctgmath&gt;"
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
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
caps.latest.revision: 13
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
# &lt;ctgmath&gt;
In effect, includes the Standard C++ library headers <ccomplex\> and <cmath\>, which provide type-generic math macros equivalent to <tgmath.h>.  
  
## Syntax  
  
```  
#include <ctgmath>  
  
```  
  
## Remarks  
 The functionality of the Standard C library header <tgmath.h> is provided by overloads in <ccomplex\> and <cmath\>.  
  
 Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.  
  
## See Also  
 [<ccomplex\>](../VS_visualcpp/-ccomplex-.md)   
 [<cmath\>](../VS_visualcpp/-cmath-.md)   
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [STL Overview](../VS_visualcpp/C---Standard-Library-Overview.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)