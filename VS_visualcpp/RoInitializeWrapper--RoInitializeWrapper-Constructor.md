---
title: "RoInitializeWrapper::RoInitializeWrapper Constructor"
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
ms.assetid: c6f7fb07-14af-4574-9135-cea164607f30
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
# RoInitializeWrapper::RoInitializeWrapper Constructor
Initializes a new instance of the RoInitializeWrapper class.  
  
## Syntax  
  
```cpp  
RoInitializeWrapper(   RO_INIT_TYPE flags)  
```  
  
#### Parameters  
 `flags`  
 One of the RO_INIT_TYPE enumerations, which specifies the support provided by the Windows Runtime.  
  
## Remarks  
 The RoInitializeWrapper class invokes Windows::Foundation::Initialize(*flags*).  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../VS_visualcpp/HandleT-Class.md)