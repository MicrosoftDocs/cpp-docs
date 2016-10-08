---
title: "RoInitializeWrapper Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
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
# RoInitializeWrapper Class
Initializes the Windows Runtime.  
  
## Syntax  
  
```  
class RoInitializeWrapper  
```  
  
## Remarks  
 RoInitializeWrapper is a convenience that initializes the Windows Runtime and returns an HRESULT that indicates whether the operation was successful.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[RoInitializeWrapper::RoInitializeWrapper Constructor](../VS_visualcpp/RoInitializeWrapper--RoInitializeWrapper-Constructor.md)|Initializes a new instance of the RoInitializeWrapper class.|  
|[RoInitializeWrapper::~RoInitializeWrapper Destructor](../VS_visualcpp/RoInitializeWrapper--~RoInitializeWrapper-Destructor.md)|Destroys the current instance of the RoInitializeWrapper class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[RoInitializeWrapper::HRESULT() Operator](../VS_visualcpp/RoInitializeWrapper--HRESULT---Operator.md)|Retrieves the HRESULT produced by the RoInitializeWrapper constructor.|  
  
## Inheritance Hierarchy  
 `RoInitializeWrapper`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers-Namespace.md)