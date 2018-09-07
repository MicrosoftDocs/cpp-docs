---
title: "Device Context Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["atlwin/ATL::AtlCreateTargetDC"]
dev_langs: ["C++"]
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Device Context Global Functions

This function creates a device context for a given device.

|||
|-|-|
|[AtlCreateTargetDC](#atlcreatetargetdc)|Creates a device context.|

##  <a name="atlcreatetargetdc"></a>  AtlCreateTargetDC

Creates a device context for the device specified in the [DVTARGETDEVICE](/windows/desktop/api/objidl/ns-objidl-tagdvtargetdevice) structure.

```
HDC AtlCreateTargetDC(HDC hdc, DVTARGETDEVICE* ptd);
```

### Parameters

*hdc*  
[in] The existing handle of a device context, or NULL.

*ptd*  
[in] A pointer to the `DVTARGETDEVICE` structure that contains information about the target device.

### Return Value

Returns the handle to a device context for the device specified in the `DVTARGETDEVICE`. If no device is specified, returns the handle to the default display device.

### Remarks

If the structure is NULL and *hdc* is NULL, creates a device context for the default display device.

If *hdc* is not NULL and *ptd* is NULL, the function returns the existing *hdc*.  

## Requirements

**Header:** atlwin.h

## See Also

[Functions](../../atl/reference/atl-functions.md)
