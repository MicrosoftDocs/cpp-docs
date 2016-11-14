---
title: "ArgTraitsHelper Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::ArgTraitsHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ArgTraitsHelper structure"
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
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
# ArgTraitsHelper Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   typename TDelegateInterface  
>  
struct ArgTraitsHelper;  
```  
  
#### Parameters  
 `TDelegateInterface`  
 A delegate interface.  
  
## Remarks  
 Helps define common characteristics of delegate arguments.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`methodType`|A synonym for `decltype(&TDelegateInterface::Invoke)`.|  
|`Traits`|A synonym for `ArgTraits<methodType>`.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[ArgTraitsHelper::args Constant](../windows/argtraitshelper-args-constant.md)|Helps [ArgTraits::args](../windows/argtraits-args-constant.md) keep count of the number of parameters on the Invoke method of a delegate interface.|  
  
## Inheritance Hierarchy  
 `ArgTraitsHelper`  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)