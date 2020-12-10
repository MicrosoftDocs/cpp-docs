---
description: "Learn more about: Connection Point Macros"
title: "Connection Point Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlcom/ATL::BEGIN_CONNECTION_POINT_MAP", "atlcom/ATL::END_CONNECTION_POINT_MAP"]
helpviewer_keywords: ["connection points [C++], macros"]
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
---
# Connection Point Macros

These macros define connection point maps and entries.

|Macro|Description|
|-|-|
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Marks the beginning of the connection point map entries.|
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Enters connection points into the map.|
|[CONNECTION_POINT_ENTRY_P](#connection_point_entry)| (Visual Studio 2017) Similar to CONNECTION_POINT_ENTRY but takes a pointer to iid.|
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Marks the end of the connection point map entries.|

## Requirements

**Header:** atlcom.h

## <a name="begin_connection_point_map"></a> BEGIN_CONNECTION_POINT_MAP

Marks the beginning of the connection point map entries.

```
BEGIN_CONNECTION_POINT_MAP(x)
```

### Parameters

*x*<br/>
[in] The name of the class containing the connection points.

### Remarks

Start your connection point map with the BEGIN_CONNECTION_POINT_MAP macro, add entries for each of your connection points with the [CONNECTION_POINT_ENTRY](#connection_point_entry) macro, and complete the map with the [END_CONNECTION_POINT_MAP](#end_connection_point_map) macro.

For more information about connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).

### Example

[!code-cpp[NVC_ATL_Windowing#101](../../atl/codesnippet/cpp/connection-point-macros_1.h)]

## <a name="connection_point_entry"></a> CONNECTION_POINT_ENTRY and CONNECTION_POINT_ENTRY_P

Enters a connection point for the specified interface into the connection point map so that it can be accessed.

```
CONNECTION_POINT_ENTRY(iid)
CONNECTION_POINT_ENTRY_P(piid) // (Visual Studio 2017)
```

### Parameters

*iid*<br/>
[in] The GUID of the interface being added to the connection point map.

*piid*<br/>
[in] Pointer to the GUID of the interface being adde.

### Remarks

Connection point entries in the map are used by [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). The class containing the connection point map must inherit from `IConnectionPointContainerImpl`.

Start your connection point map with the [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) macro, add entries for each of your connection points with the CONNECTION_POINT_ENTRY macro, and complete the map with the [END_CONNECTION_POINT_MAP](#end_connection_point_map) macro.

For more information about connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).

### Example

[!code-cpp[NVC_ATL_Windowing#120](../../atl/codesnippet/cpp/connection-point-macros_2.h)]

## <a name="end_connection_point_map"></a> END_CONNECTION_POINT_MAP

Marks the end of the connection point map entries.

```
END_CONNECTION_POINT_MAP()
```

### Remarks

Start your connection point map with the [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) macro, add entries for each of your connection points with the [CONNECTION_POINT_ENTRY](#connection_point_entry) macro, and complete the map with the END_CONNECTION_POINT_MAP macro.

For more information about connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).

### Example

[!code-cpp[NVC_ATL_Windowing#128](../../atl/codesnippet/cpp/connection-point-macros_3.h)]

## See also

[Macros](../../atl/reference/atl-macros.md)<br/>
[Connection Point Global Functions](../../atl/reference/connection-point-global-functions.md)
