---
title: "ComPtrRefBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::Details::ComPtrRefBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtrRefBase class"
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
caps.latest.revision: 5
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
 A [ComPtr\<T>](../windows/comptr-class.md) type or a type derived from it, not merely the interface represented by the ComPtr.  
  
## Remarks  
 Represents the base class for the [ComPtrRef](../windows/comptrref-class.md) class.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`InterfaceType`|A synonym for the type of template parameter `T`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRefBase::operator IInspectable** Operator](../windows/comptrrefbase-operator-iinspectable-star-star-operator.md)|Casts the current [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member to a pointer-to-a-pointer-to the IInspectable interface.|  
|[ComPtrRefBase::operator IUnknown** Operator](../windows/comptrrefbase-operator-iunknown-star-star-operator.md)|Casts the current [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member to a pointer-to-a-pointer-to the IUnknown interface.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRefBase::ptr_ Data Member](../windows/comptrrefbase-ptr-data-member.md)|Pointer to the type specified by the current template parameter.|  
  
## Inheritance Hierarchy  
 `ComPtrRefBase`  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)