---
title: "alloca"
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
ms.assetid: 2b209335-e3a0-4934-93f0-3b5925d22918
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
# alloca
[_alloca](../VS_visualcpp/_alloca.md) is required to be 16-byte aligned and additionally required to use a frame pointer.  
  
 The stack that is allocated needs to include space below it for parameters of subsequently called functions, as discussed in [Stack Allocation](../VS_visualcpp/Stack-Allocation.md).  
  
## See Also  
 [Stack Usage](../VS_visualcpp/Stack-Usage.md)