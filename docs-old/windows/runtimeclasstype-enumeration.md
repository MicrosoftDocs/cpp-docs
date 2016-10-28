---
title: "RuntimeClassType Enumeration"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClassType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RuntimeClassType enumeration"
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
caps.latest.revision: 6
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
# RuntimeClassType Enumeration
Specifies the type of [RuntimeClass](../windows/runtimeclass-class.md) instance that is supported.  
  
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
|`WinRt`|A [!INCLUDE[wrt](../atl/includes/wrt_md.md)] class.|  
|`WinRtClassicComMix`|A combination of `WinRt` and `ClassicCom`.|  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft--wrl-namespace.md)