---
title: "RoInitializeWrapper::~RoInitializeWrapper Destructor"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: afef4c1f-ffde-4cd2-8654-8de4182eb5f4
caps.latest.revision: 2
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# RoInitializeWrapper::~RoInitializeWrapper Destructor
Uninitializes the Windows Runtime.  
  
## Syntax  
  
```cpp  
~RoInitializeWrapper()  
```  
  
## Remarks  
 The RoInitializeWrapper class invokes Windows::Foundation::Uninitialize().  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../VS_visualcpp/HandleT-Class.md)