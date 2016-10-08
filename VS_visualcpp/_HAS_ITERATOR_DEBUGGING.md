---
title: "_HAS_ITERATOR_DEBUGGING"
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
ms.assetid: 90077dbb-8a76-4963-83a6-29f4854007a8
caps.latest.revision: 6
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
# _HAS_ITERATOR_DEBUGGING
Defines whether the iterator debugging feature is enabled in a debug build. By default, iterator debugging is enabled. For more information, see [Debug Iterator Support](../VS_visualcpp/Debug-Iterator-Support.md).  
  
> [!IMPORTANT]
>  Use `_ITERATOR_DEBUG_LEVEL` to control `_HAS_ITERATOR_DEBUGGING`. For more information, see [_ITERATOR_DEBUG_LEVEL](../VS_visualcpp/_ITERATOR_DEBUG_LEVEL.md).  
  
## Remarks  
 To enable iterator debugging in debug builds, set **_HAS_ITERATOR_DEBUGGING** to 1:  
  
```  
#define _HAS_ITERATOR_DEBUGGING 1  
```  
  
 **_HAS_ITERATOR_DEBUGGING** cannot be set to 1 in retail builds.  
  
 To disable iterator debugging in debug builds, set **_HAS_ITERATOR_DEBUGGING** to 0:  
  
```  
#define _HAS_ITERATOR_DEBUGGING 0  
```  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../VS_visualcpp/_ITERATOR_DEBUG_LEVEL.md)   
 [Debug Iterator Support](../VS_visualcpp/Debug-Iterator-Support.md)   
 [Checked Iterators](../VS_visualcpp/Checked-Iterators.md)   
 [Safe Libraries: C++ Standard Library](../VS_visualcpp/Safe-Libraries--C---Standard-Library.md)