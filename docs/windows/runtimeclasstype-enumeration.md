---
title: "RuntimeClassType Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClassType"]
dev_langs: ["C++"]
helpviewer_keywords: ["RuntimeClassType enumeration"]
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClassType Enumeration
Specifies the type of [RuntimeClass](../windows/runtimeclass-class.md) instance that is supported.  
  
## Syntax  
  
```cpp  
enum RuntimeClassType;  
```  
  
## Members  
  
### Values  
  
|Name|Description|  
|----------|-----------------|  
|`ClassicCom`|A classic COM runtime class.|  
|`Delegate`|Equivalent to `ClassicCom`.|  
|`InhibitFtmBase`|Disables `FtmBase` support while `__WRL_CONFIGURATION_LEGACY__` is not defined.|  
|`InhibitWeakReference`|Disables weak reference support.|  
|`WinRt`|A Windows Runtime class.|  
|`WinRtClassicComMix`|A combination of `WinRt` and `ClassicCom`.|  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)