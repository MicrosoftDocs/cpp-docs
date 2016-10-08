---
title: "RuntimeClassType Enumeration"
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
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
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
# RuntimeClassType Enumeration
Specifies the type of [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md) instance that is supported.  
  
## Syntax  
  
```  
enum RuntimeClassType;  
```  
  
## Members  
  
### Values  
  
|Name|Description|  
|----------|-----------------|  
|`ClassicCom`|A classic COM runtime class.|  
|`Delegate`|Equivalent to **ClassicCom**.|  
|`InhibitFtmBase`|Disables `FtmBase` support while `__WRL_CONFIGURATION_LEGACY__` is not defined.|  
|`InhibitWeakReference`|Disables weak reference support.|  
|`WinRt`|A Windows Runtime class.|  
|`WinRtClassicComMix`|A combination of `WinRt` and `ClassicCom`.|  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)