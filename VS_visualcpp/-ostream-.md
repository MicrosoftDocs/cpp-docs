---
title: "&lt;ostream&gt;"
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
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
caps.latest.revision: 18
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
# &lt;ostream&gt;
Defines the template class [basic_ostream](../VS_visualcpp/basic_ostream-Class.md), which mediates insertions for the iostreams. The header also defines several related manipulators. (This header is typically included for you by another of the iostreams headers. You rarely need to include it directly.)  
  
## Syntax  
  
```  
#include <ostream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[ostream](../VS_visualcpp/-ostream--typedefs.md#ostream)|Creates a type from `basic_ostream` that is specialized on `char` and `char_traits` specialized on `char`.|  
|[wostream](../VS_visualcpp/-ostream--typedefs.md#wostream)|Creates a type from `basic_ostream` that is specialized on `wchar_t` and `char_traits` specialized on `wchar_t`.|  
  
### Manipulators  
  
|||  
|-|-|  
|[endl](../VS_visualcpp/-ostream--functions.md#endl)|Terminates a line and flushes the buffer.|  
|[ends](../VS_visualcpp/-ostream--functions.md#ends)|Terminates a string.|  
|[flush](../VS_visualcpp/-ostream--functions.md#flush)|Flushes the buffer.|  
|[swap](../VS_visualcpp/-ostream--functions.md#swap)|Exchanges the values of the left `basic_ostream` object parameter for those of the right `basic_ostream` object parameter.|  
  
### Operators  
  
|||  
|-|-|  
|[operator<<](../VS_visualcpp/-ostream--operators.md#operator_lt__lt_)|Writes various types to the stream.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_ostream](../VS_visualcpp/basic_ostream-Class.md)|The template class describes an object that controls insertion of elements and encoded objects into a stream buffer.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)