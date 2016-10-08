---
title: "ComPtrRef Class"
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
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
caps.latest.revision: 6
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
# ComPtrRef Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T  
>  
class ComPtrRef : public ComPtrRefBase<T>;  
```  
  
#### Parameters  
 `T`  
 A [ComPtr<T\>](../VS_visualcpp/ComPtr-Class.md) type or a type derived from it, not merely the interface represented by the ComPtr.  
  
## Remarks  
 Represents a reference to an object of type ComPtr<T\>.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef::ComPtrRef Constructor](../VS_visualcpp/ComPtrRef--ComPtrRef-Constructor.md)|Initializes a new instance of the ComPtrRef class from the specified pointer to another ComPtrRef object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef::GetAddressOf Method](../VS_visualcpp/ComPtrRef--GetAddressOf-Method.md)|Retrieves the address of a pointer to the interface represented by the current ComPtrRef object.|  
|[ComPtrRef::ReleaseAndGetAddressOf Method](../VS_visualcpp/ComPtrRef--ReleaseAndGetAddressOf-Method.md)|Deletes the current ComPtrRef object and returns a pointer-to-a-pointer to the interface that was represented by the ComPtrRef object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef::operator InterfaceType** Operator](../VS_visualcpp/ComPtrRef--operator-InterfaceType---Operator.md)|Deletes the current ComPtrRef object and returns a pointer-to-a-pointer to the interface that was represented by the ComPtrRef object.|  
|[ComPtrRef::operator T* Operator](../VS_visualcpp/ComPtrRef--operator-T--Operator.md)|Returns the value of the [ptr_](../VS_visualcpp/ComPtrRefBase--ptr_-Data-Member.md) data member of the current ComPtrRef object.|  
|[ComPtrRef::operator void** Operator](../VS_visualcpp/ComPtrRef--operator-void---Operator.md)|Deletes the current ComPtrRef object, casts the pointer to the interface that was represented by the ComPtrRef object as a pointer-to-pointer-to `void`, and then returns the cast pointer.|  
|[ComPtrRef::operator* Operator](../VS_visualcpp/ComPtrRef--operator--Operator.md)|Retrieves the pointer to the interface represented by the current ComPtrRef object.|  
|[ComPtrRef::operator== Operator](../VS_visualcpp/ComPtrRef--operator==-Operator.md)|Indicates whether two ComPtrRef objects are equal.|  
|[ComPtrRef::operator!= Operator](../VS_visualcpp/ComPtrRef--operator!=-Operator.md)|Indicates whether two ComPtrRef objects are not equal.|  
  
## Inheritance Hierarchy  
 `ComPtrRefBase`  
  
 `ComPtrRef`  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)