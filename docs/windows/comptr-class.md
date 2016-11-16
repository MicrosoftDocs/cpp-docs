---
title: "ComPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtr class"
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
  
 For more information about smart pointers, see the "COM Smart Pointers" subsection of the [COM Coding Practices](http://msdn.microsoft.com/en-us/76aca556-b4d6-4e67-a2a3-4439900f0c39)topic in the MSDN Library.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`InterfaceType`|A synonym for the type specified by the `T` template parameter.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::ComPtr Constructor](../windows/comptr-comptr-constructor.md)|Intializes a new instance of the ComPtr class. Overloads provide default, copy, move, and conversion constructors.|  
|[ComPtr::~ComPtr Destructor](../windows/comptr-tilde-comptr-destructor.md)|Deinitializes an instance of ComPtr.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::As Method](../windows/comptr-as-method.md)|Returns a ComPtr object that represents the interface identified by the specified template parameter.|  
|[ComPtr::AsIID Method](../windows/comptr-asiid-method.md)|Returns a ComPtr object that represents the interface identified by the specified interface ID.|  
|[ComPtr::AsWeak Method](../windows/comptr-asweak-method.md)|Retrieves a weak reference to the current object.|  
|[ComPtr::Attach Method](../windows/comptr-attach-method.md)|Associates this ComPtr with the interface type specified by the current template type parameter.|  
|[ComPtr::CopyTo Method](../windows/comptr-copyto-method.md)|Copies the current or specified interface associated with this ComPtr to the specified output pointer.|  
|[ComPtr::Detach Method](../windows/comptr-detach-method.md)|Disassociates this ComPtr from the interface that it represents.|  
|[ComPtr::Get Method](../windows/comptr-get-method.md)|Retrieves a pointer to the interface that is associated with this ComPtr.|  
|[ComPtr::GetAddressOf Method](../windows/comptr-getaddressof-method.md)|Retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface represented by this ComPtr.|  
|[ComPtr::ReleaseAndGetAddressOf Method](../windows/comptr-releaseandgetaddressof-method.md)|Releases the interface associated with this ComPtr and then retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface that was released.|  
|[ComPtr::Reset](../windows/comptr-reset.md)|Releases all references for the pointer to the interface that is associated with this ComPtr.|  
|[ComPtr::Swap Method](../windows/comptr-swap-method.md)|Exchanges the interface managed by the current ComPtr with the interface managed by the specified ComPtr.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::InternalAddRef Method](../windows/comptr-internaladdref-method.md)|Increments the reference count of the interface associated with this ComPtr.|  
|[ComPtr::InternalRelease Method](../windows/comptr-internalrelease-method.md)|Performs a COM Release operation on the interface associated with this ComPtr.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::operator Microsoft::WRL::Details::BoolType Operator](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)|Indicates whether or not a ComPtr is managing the object lifetime of an interface.|  
|[ComPtr::operator& Operator](../windows/comptr-operator-ampersand-operator.md)|Retrieves the address of the current ComPtr.|  
|[ComPtr::operator= Operator](../windows/comptr-operator-assign-operator.md)|Assigns a value to the current ComPtr.|  
|[ComPtr::operator-> Operator](../windows/comptr-operator-arrow-operator.md)|Retrieves a pointer to the type specified by the current template parameter.|  
|[ComPtr::operator== Operator](../windows/comptr-operator-equality-operator.md)|Indicates whether two ComPtr objects are equal.|  
|[ComPtr::operator!= Operator](../windows/comptr-operator-inequality-operator.md)|Indicates whether two ComPtr objects are not equal.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtr::ptr_ Data Member](../windows/comptr-ptr-data-member.md)|Contains a pointer to the interface that is associated with, and managed by this ComPtr.|  
  
## Inheritance Hierarchy  
 `ComPtr`  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)