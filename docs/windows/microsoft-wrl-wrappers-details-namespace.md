---
title: "Microsoft::WRL::Wrappers::Details Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details"
  - "internal/Microsoft::WRL::Details"
  - "async/Microsoft::WRL::Details"
  - "corewrappers/Microsoft::WRL::Wrappers::Details"
  - "client/Microsoft::WRL::Details"
  - "module/Microsoft::WRL::Details"
  - "event/Microsoft::WRL::Details"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Details namespace"
ms.assetid: 6d3f04ac-9b53-4a82-a188-a85309ec34a4
caps.latest.revision: 4
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
# Microsoft::WRL::Wrappers::Details Namespace
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
namespace Microsoft::WRL::Wrappers::Details;  
```  
  
## Members  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[SyncLockT Class](../windows/synclockt-class.md)|Represents a type that can take exclusive or shared ownership of a resource.|  
|[SyncLockWithStatusT Class](../windows/synclockwithstatust-class.md)|Represents a type that can take exclusive or shared ownership of a resource.|  
  
### Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CompareStringOrdinal Method](../windows/comparestringordinal-method.md)|Compares two specified `HSTRING` objects and returns an integer that indicates their relative position in a sort order.|  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)