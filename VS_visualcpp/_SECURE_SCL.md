---
title: "_SECURE_SCL"
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
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
caps.latest.revision: 9
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
# _SECURE_SCL
Defines whether [Checked Iterators](../VS_visualcpp/Checked-Iterators.md) are enabled. If defined as 1, unsafe iterator use causes a runtime error and the program is terminated. If defined as 0, checked iterators are disabled. In debug mode, the default value for **_SECURE_SCL** is 1, meaning checked iterators are enabled. In release mode, the default value for `_SECURE_SCL` is 0.  
  
> [!IMPORTANT]
>  Use `_ITERATOR_DEBUG_LEVEL` to control `_SECURE_SCL`. For more information, see [_ITERATOR_DEBUG_LEVEL](../VS_visualcpp/_ITERATOR_DEBUG_LEVEL.md).  
  
## Remarks  
 To enable checked iterators, set **_SECURE_SCL** to 1:  
  
```  
#define _SECURE_SCL 1  
```  
  
 To disable checked iterators, set **_SECURE_SCL** to 0:  
  
```  
#define _SECURE_SCL 0  
```  
  
 For information on how to disable warnings about checked iterators, see [_SCL_SECURE_NO_WARNINGS](../VS_visualcpp/_SCL_SECURE_NO_WARNINGS.md).  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../VS_visualcpp/_ITERATOR_DEBUG_LEVEL.md)   
 [Checked Iterators](../VS_visualcpp/Checked-Iterators.md)   
 [Debug Iterator Support](../VS_visualcpp/Debug-Iterator-Support.md)   
 [Safe Libraries: C++ Standard Library](../VS_visualcpp/Safe-Libraries--C---Standard-Library.md)