---
title: "com::ptr"
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
ms.topic: reference
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
caps.latest.revision: 7
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
# com::ptr
A wrapper for a COM object that can be used as a member of a CLR class. The wrapper also automates lifetime management of the COM object, releasing owned references on the object when its destructor is called. Analogous to [CComPtr Class](../VS_visualcpp/CComPtr-Class.md).  
  
## Syntax  
  
```  
#include <msclr\com\ptr.h>  
```  
  
## Remarks  
 [com::ptr Class](../VS_visualcpp/com--ptr-Class.md) is defined in the <msclr\com\ptr.h> file.  
  
## See Also  
 [C++ Support Library](../VS_visualcpp/C---Support-Library.md)