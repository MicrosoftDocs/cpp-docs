---
title: "&lt;ccomplex&gt;"
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
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
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
# &lt;ccomplex&gt;
Includes the STL header [<complex\>](../VS_visualcpp/-complex-.md), which effectively includes the Standard C library header <complex.h> and adds the associated names to the `std` namespace.  
  
## Syntax  
  
```cpp  
#include <ccomplex>  
  
```  
  
## Remarks  
 Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.  
  
 The name `clog`, which is declared in <complex.h>, is not defined in the `std` namespace because of potential conflicts with the `clog` that is declared in [<iostream\>](../VS_visualcpp/-iostream-.md).  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [STL Overview](../VS_visualcpp/C---Standard-Library-Overview.md)