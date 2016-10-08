---
title: "ComPtr Class"
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
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
caps.latest.revision: 8
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
# ComPtr Class
Creates a *smart pointer* type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.  
  
## Syntax  
  
```  
template <  
   typename T  
>  
class ComPtr;  
  
template<  
   class U  
>  
friend class ComPtr;  
```  
  
#### Parameters  
 `T`  
 The interface that the ComPtr represents.  
  
 `U`  
 A class to which the current ComPtr is a friend. (The template that uses this parameter is protected.)  
  
## Remarks  
 ComPtr<> declares a type that represents the underlying interface pointer. Use ComPtr<> to declare a variable and then use the arrow member-access operator (`->`) to access an interface member function.  
  
 For more information about smart pointers, see the "COM Smart Pointers" subsection of the [COM Coding Practices](assetId:///76aca556-b4d6-4e67-a2a3-4439900f0c39)topic in the MSDN Library.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`InterfaceType`|A synonym for the type specified by the `T` template parameter.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::ComPtr Constructor](../VS_visualcpp/ComPtr--ComPtr-Constructor.md)|Intializes a new instance of the ComPtr class. Overloads provide default, copy, move, and conversion constructors.|  
|[ComPtr::~ComPtr Destructor](../VS_visualcpp/ComPtr--~ComPtr-Destructor.md)|Deinitializes an instance of ComPtr.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::As Method](../VS_visualcpp/ComPtr--As-Method.md)|Returns a ComPtr object that represents the interface identified by the specified template parameter.|  
|[ComPtr::AsIID Method](../VS_visualcpp/ComPtr--AsIID-Method.md)|Returns a ComPtr object that represents the interface identified by the specified interface ID.|  
|[ComPtr::AsWeak Method](../VS_visualcpp/ComPtr--AsWeak-Method.md)|Retrieves a weak reference to the current object.|  
|[ComPtr::Attach Method](../VS_visualcpp/ComPtr--Attach-Method.md)|Associates this ComPtr with the interface type specified by the current template type parameter.|  
|[ComPtr::CopyTo Method](../VS_visualcpp/ComPtr--CopyTo-Method.md)|Copies the current or specified interface associated with this ComPtr to the specified output pointer.|  
|[ComPtr::Detach Method](../VS_visualcpp/ComPtr--Detach-Method.md)|Disassociates this ComPtr from the interface that it represents.|  
|[ComPtr::Get Method](../VS_visualcpp/ComPtr--Get-Method.md)|Retrieves a pointer to the interface that is associated with this ComPtr.|  
|[ComPtr::GetAddressOf Method](../VS_visualcpp/ComPtr--GetAddressOf-Method.md)|Retrieves the address of the [ptr_](../VS_visualcpp/ComPtr--ptr_-Data-Member.md) data member, which contains a pointer to the interface represented by this ComPtr.|  
|[ComPtr::ReleaseAndGetAddressOf Method](../VS_visualcpp/ComPtr--ReleaseAndGetAddressOf-Method.md)|Releases the interface associated with this ComPtr and then retrieves the address of the [ptr_](../VS_visualcpp/ComPtr--ptr_-Data-Member.md) data member, which contains a pointer to the interface that was released.|  
|[ComPtr::Reset](../VS_visualcpp/ComPtr--Reset.md)|Releases all references for the pointer to the interface that is associated with this ComPtr.|  
|[ComPtr::Swap Method](../VS_visualcpp/ComPtr--Swap-Method.md)|Exchanges the interface managed by the current ComPtr with the interface managed by the specified ComPtr.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::InternalAddRef Method](../VS_visualcpp/ComPtr--InternalAddRef-Method.md)|Increments the reference count of the interface associated with this ComPtr.|  
|[ComPtr::InternalRelease Method](../VS_visualcpp/ComPtr--InternalRelease-Method.md)|Performs a COM Release operation on the interface associated with this ComPtr.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::operator Microsoft::WRL::Details::BoolType Operator](../VS_visualcpp/ComPtr--operator-Microsoft--WRL--Details--BoolType-Operator.md)|Indicates whether or not a ComPtr is managing the object lifetime of an interface.|  
|[ComPtr::operator& Operator](../VS_visualcpp/ComPtr--operator--Operator.md)|Retrieves the address of the current ComPtr.|  
|[ComPtr::operator= Operator](../VS_visualcpp/ComPtr--operator=-Operator.md)|Assigns a value to the current ComPtr.|  
|[ComPtr::operator-> Operator](../VS_visualcpp/ComPtr--operator---Operator.md)|Retrieves a pointer to the type specified by the current template parameter.|  
|[ComPtr::operator== Operator](../VS_visualcpp/ComPtr--operator==-Operator.md)|Indicates whether two ComPtr objects are equal.|  
|[ComPtr::operator!= Operator](../VS_visualcpp/ComPtr--operator!=-Operator.md)|Indicates whether two ComPtr objects are not equal.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::ptr_ Data Member](../VS_visualcpp/ComPtr--ptr_-Data-Member.md)|Contains a pointer to the interface that is associated with, and managed by this ComPtr.|  
  
## Inheritance Hierarchy  
 `ComPtr`  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)