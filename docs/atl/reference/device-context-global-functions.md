---
title: "Device Context Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Device Context Global Functions
This function creates a device context for a given device.  
  
|||  
|-|-|  
|[AtlCreateTargetDC](#atlcreatetargetdc)|Creates a device context.|  
  
##  <a name="atlcreatetargetdc"></a>  AtlCreateTargetDC  
 Creates a device context for the device specified in the [DVTARGETDEVICE](http://msdn.microsoft.com/library/windows/desktop/ms686613) structure.  
  
```
HDC
    AtlCreateTargetDC(
 HDC hdc,
    DVTARGETDEVICE* ptd);
```  
  
### Parameters  
 *hdc*  
 [in] The existing handle of a device context, or **NULL**.  
  
 `ptd`  
 [in] A pointer to the **DVTARGETDEVICE** structure that contains information about the target device.  
  
### Return Value  
 Returns the handle to a device context for the device specified in the **DVTARGETDEVICE**. If no device is specified, returns the handle to the default display device.  
  
### Remarks  
 If the structure is **NULL** and *hdc* is **NULL**, creates a device context for the default display device.  
  
 If *hdc* is not **NULL** and `ptd` is **NULL**, the function returns the existing *hdc*.  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)
