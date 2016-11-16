---
title: "HandleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HandleT class"
ms.assetid: 3822b32a-a426-4d94-a54d-919d4df60ee2
caps.latest.revision: 3
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
 An instance of the [HandleTraits](../windows/handletraits-structure.md) stucture that defines common characteristics of a handle.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Traits`|A synonym for `HandleTraits`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::HandleT Constructor](../windows/handlet-handlet-constructor.md)|Initializes a new instance of the HandleT class.|  
|[HandleT::~HandleT Destructor](../windows/handlet-tilde-handlet-destructor.md)|Deinitializes an instance of the HandleT class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::Attach Method](../windows/handlet-attach-method.md)|Associates the specified handle with the current HandleT object.|  
|[HandleT::Close Method](../windows/handlet-close-method.md)|Closes the current HandleT object.|  
|[HandleT::Detach Method](../windows/handlet-detach-method.md)|Disassociates the current HandleT object from its underlying handle.|  
|[HandleT::Get Method](../windows/handlet-get-method.md)|Gets the value of the underlying handle.|  
|[HandleT::IsValid Method](../windows/handlet-isvalid-method.md)|Indicates whether the current HandleT object represents a handle.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::InternalClose Method](../windows/handlet-internalclose-method.md)|Closes the current HandleT object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::operator= Operator](../windows/handlet-operator-assign-operator.md)|Moves the value of the specified HandleT object to the current HandleT object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[HandleT::handle_ Data Member](../windows/handlet-handle-data-member.md)|Contains the handle that is represented by the HandleT object.|  
  
## Inheritance Hierarchy  
 `HandleT`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)