---
description: "Learn more about: COM Map Global Functions"
title: "COM Map Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlbase/ATL::AtlInternalQueryInterface", "atlbase/ATL::InlineIsEqualIUnknown"]
helpviewer_keywords: ["COM interfaces, COM map global functions"]
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
---
# COM Map Global Functions

These functions provide support for COM Map `IUnknown` implementations.

|Function|Description|
|-|-|
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delegates to the `IUnknown` of a nonaggregated object.|
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Generates efficient code for comparing interfaces against `IUnknown`.|

## Requirements

**Header:** atlbase.h

## <a name="atlinternalqueryinterface"></a> AtlInternalQueryInterface

Retrieves a pointer to the requested interface.

```
HRESULT AtlInternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```

### Parameters

*pThis*<br/>
[in] A pointer to the object that contains the COM map of interfaces exposed to `QueryInterface`.

*pEntries*<br/>
[in] An array of `_ATL_INTMAP_ENTRY` structures that access a map of available interfaces.

*iid*<br/>
[in] The GUID of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer specified in *iid*, or NULL if the interface is not found.

### Return Value

One of the standard HRESULT values.

### Remarks

`AtlInternalQueryInterface` only handles interfaces in the COM map table. If your object is aggregated, `AtlInternalQueryInterface` does not delegate to the outer unknown. You can enter interfaces into the COM map table with the macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) or one of its variants.

### Example

[!code-cpp[NVC_ATL_Windowing#94](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]

## <a name="inlineisequaliunknown"></a> InlineIsEqualIUnknown

Call this function, for the special case of testing for `IUnknown`.

```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```

### Parameters

*rguid1*<br/>
[in] The GUID to compare to `IID_IUnknown`.

## See also

[Functions](../../atl/reference/atl-functions.md)<br/>
[COM Map Macros](../../atl/reference/com-map-macros.md)
