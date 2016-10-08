---
title: "HandleT Class"
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
ms.assetid: 3822b32a-a426-4d94-a54d-919d4df60ee2
caps.latest.revision: 3
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
# HandleT Class
Represents a handle to an object.  
  
## Syntax  
  
```  
template <  
   typename HandleTraits  
>  
class HandleT;  
```  
  
#### Parameters  
 `HandleTraits`  
 An instance of the [HandleTraits](../VS_visualcpp/HANDLETraits-Structure.md) stucture that defines common characteristics of a handle.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Traits`|A synonym for `HandleTraits`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::HandleT Constructor](../VS_visualcpp/HandleT--HandleT-Constructor.md)|Initializes a new instance of the HandleT class.|  
|[HandleT::~HandleT Destructor](../VS_visualcpp/HandleT--~HandleT-Destructor.md)|Deinitializes an instance of the HandleT class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::Attach Method](../VS_visualcpp/HandleT--Attach-Method.md)|Associates the specified handle with the current HandleT object.|  
|[HandleT::Close Method](../VS_visualcpp/HandleT--Close-Method.md)|Closes the current HandleT object.|  
|[HandleT::Detach Method](../VS_visualcpp/HandleT--Detach-Method.md)|Disassociates the current HandleT object from its underlying handle.|  
|[HandleT::Get Method](../VS_visualcpp/HandleT--Get-Method.md)|Gets the value of the underlying handle.|  
|[HandleT::IsValid Method](../VS_visualcpp/HandleT--IsValid-Method.md)|Indicates whether the current HandleT object represents a handle.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::InternalClose Method](../VS_visualcpp/HandleT--InternalClose-Method.md)|Closes the current HandleT object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::operator= Operator](../VS_visualcpp/HandleT--operator=-Operator.md)|Moves the value of the specified HandleT object to the current HandleT object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::handle_ Data Member](../VS_visualcpp/HandleT--handle_-Data-Member.md)|Contains the handle that is represented by the HandleT object.|  
  
## Inheritance Hierarchy  
 `HandleT`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers-Namespace.md)