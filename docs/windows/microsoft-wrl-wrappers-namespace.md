---
title: "Microsoft::WRL::Wrappers Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Wrappers namespace"
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
caps.latest.revision: 6
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
# Microsoft::WRL::Wrappers Namespace
Defines Resource Acquisition Is Initialization (RAII) wrapper types that simplify the lifetime management of objects, strings, and handles.  
  
## Syntax  
  
```  
namespace Microsoft::WRL::Wrappers;  
```  
  
## Members  
  
### Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`FileHandle`|`HandleT<HandleTraits::FileHandleTraits>`|  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[CriticalSection Class](../windows/criticalsection-class.md)|Represents a critical section object.|  
|[Event Class (Windows Runtime C++ Template Library)](../windows/event-class-windows-runtime-cpp-template-library.md)|Represents an event.|  
|[HandleT Class](../windows/handlet-class.md)|Represents a handle to an object.|  
|[HString Class](../windows/hstring-class.md)|Provides support for manipulating HSTRING handles.|  
|[HStringReference Class](../windows/hstringreference-class.md)|Represents an HSTRING that is created from an existing string.|  
|[Mutex Class](../windows/mutex-class1.md)|Represents a synchronization object that exclusively controls a shared resource.|  
|[RoInitializeWrapper Class](../windows/roinitializewrapper-class.md)|Initializes the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|[Semaphore Class](../windows/semaphore-class.md)|Represents a synchronization object that controls a shared resource that can support a limited number of users.|  
|[SRWLock Class](../windows/srwlock-class.md)|Represents a slim reader/writer lock.|  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)