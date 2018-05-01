---
title: "queuing_mode Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::queuing_mode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "queuing_mode enumeration"
ms.assetid: 8c641054-906d-40b3-bbb4-f62af9356a14
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# queuing_mode Enumeration
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Specifies the queuing modes that are supported on the accelerator.  
  
## Syntax  
  
```  
enum queuing_mode;  
```  
  
## Members  
  
### Values  
  
|Name|Description|  
|----------|-----------------|  
|`queuing_mode_immediate`|A queuing mode that specifies that any commands, for example, [parallel_for_each Function (C++ AMP)](http://msdn.microsoft.com/library/449013a2-5f16-4280-ac1a-0d850f7d5160), are sent to the corresponding accelerator device as soon as they return to the caller.|  
|`queuing_mode_automatic`|A queuing mode that specifies that commands be queued up on a command queue that corresponds to the [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) object. Commands are sent to the device when [accelerator_view::flush](http://msdn.microsoft.com/library/914020f3-c6f4-47ec-8826-74d580807145) is called.|  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
