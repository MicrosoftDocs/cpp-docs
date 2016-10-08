---
title: "queuing_mode Enumeration"
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
ms.topic: article
ms.assetid: 8c641054-906d-40b3-bbb4-f62af9356a14
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# queuing_mode Enumeration
Specifies the queuing modes that are supported on the accelerator.  
  
## Syntax  
  
```  
enum queuing_mode;  
```  
  
## Members  
  
### Values  
  
|Name|Description|  
|----------|-----------------|  
|`queuing_mode_immediate`|A queuing mode that specifies that any commands, for example, [parallel_for_each Function (C++ AMP)](../VS_visualcpp/parallel_for_each-Function--C---AMP-.md), are sent to the corresponding accelerator device as soon as they return to the caller.|  
|`queuing_mode_automatic`|A queuing mode that specifies that commands be queued up on a command queue that corresponds to the [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object. Commands are sent to the device when [accelerator_view::flush](../VS_visualcpp/accelerator_view--flush-Method.md) is called.|  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)