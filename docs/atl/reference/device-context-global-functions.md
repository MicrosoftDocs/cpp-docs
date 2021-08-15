---
description: "Learn more about: Device Context Global Functions"
title: "Device Context Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlwin/ATL::AtlCreateTargetDC"]
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
---
# Device Context Global Functions

This function creates a device context for a given device.

|Name|Description|
|-|-|
|[AtlCreateTargetDC](#atlcreatetargetdc)|Creates a device context.|

## <a name="atlcreatetargetdc"></a> AtlCreateTargetDC

Creates a device context for the device specified in the [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) structure.

```
HDC AtlCreateTargetDC(HDC hdc, DVTARGETDEVICE* ptd);
```

### Parameters

*hdc*<br/>
[in] The existing handle of a device context, or NULL.

*ptd*<br/>
[in] A pointer to the `DVTARGETDEVICE` structure that contains information about the target device.

### Return Value

Returns the handle to a device context for the device specified in the `DVTARGETDEVICE`. If no device is specified, returns the handle to the default display device.

### Remarks

If the structure is NULL and *hdc* is NULL, creates a device context for the default display device.

If *hdc* is not NULL and *ptd* is NULL, the function returns the existing *hdc*.

## Requirements

**Header:** atlwin.h

## See also

[Functions](../../atl/reference/atl-functions.md)
