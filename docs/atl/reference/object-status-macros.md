---
description: "Learn more about: Object Status Macros"
title: "Object Status Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlcom/ATL::DECLARE_OLEMISC_STATUS"]
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
---
# Object Status Macros

This macro sets flags belonging to ActiveX controls.

|Name|Description|
|-|-|
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Used in ATL ActiveX controls to set the OLEMISC flags.|

## Requirements

**Header:** atlcom.h

## <a name="declare_olemisc_status"></a> DECLARE_OLEMISC_STATUS

Used in ATL ActiveX controls to set the OLEMISC flags.

```
DECLARE_OLEMISC_STATUS( miscstatus )
```

### Parameters

*miscstatus*<br/>
All applicable OLEMISC flags.

### Remarks

This macro is used to set the OLEMISC flags for an ActiveX control. Refer to [IOleObject::GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) for more details.

### Example

[!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]

## See also

[Macros](../../atl/reference/atl-macros.md)
