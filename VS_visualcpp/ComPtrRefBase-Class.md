---
title: "ComPtrRefBase Class"
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
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
caps.latest.revision: 5
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
# ComPtrRefBase Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T  
>  
class ComPtrRefBase;  
```  
  
#### Parameters  
 `T`  
 A [ComPtr<T\>](../VS_visualcpp/ComPtr-Class.md) type or a type derived from it, not merely the interface represented by the ComPtr.  
  
## Remarks  
 Represents the base class for the [ComPtrRef](../VS_visualcpp/ComPtrRef-Class.md) class.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`InterfaceType`|A synonym for the type of template parameter `T`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRefBase::operator IInspectable** Operator](../VS_visualcpp/ComPtrRefBase--operator-IInspectable---Operator.md)|Casts the current [ptr_](../VS_visualcpp/ComPtrRefBase--ptr_-Data-Member.md) data member to a pointer-to-a-pointer-to the IInspectable interface.|  
|[ComPtrRefBase::operator IUnknown** Operator](../VS_visualcpp/ComPtrRefBase--operator-IUnknown---Operator.md)|Casts the current [ptr_](../VS_visualcpp/ComPtrRefBase--ptr_-Data-Member.md) data member to a pointer-to-a-pointer-to the IUnknown interface.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRefBase::ptr_ Data Member](../VS_visualcpp/ComPtrRefBase--ptr_-Data-Member.md)|Pointer to the type specified by the current template parameter.|  
  
## Inheritance Hierarchy  
 `ComPtrRefBase`  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)