---
description: "Learn more about: Snap-In Object Macros"
title: "Snap-In Object Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlsnap/ATL::BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP", "atlsnap/ATL::BEGIN_SNAPINTOOLBARID_MAP", "atlsnap/ATL::END_EXTENSION_SNAPIN_NODEINFO_MAP", "atlsnap/ATL::END_SNAPINTOOLBARID_MAP", "atlsnap/ATL::EXTENSION_SNAPIN_DATACLASS", "atlsnap/ATL::EXTENSION_SNAPIN_NODEINFO_ENTRY", "atlsnap/ATL::SNAPINMENUID", "atlsnap/ATL::SNAPINTOOLBARID_ENTRY"]
ms.assetid: 4e9850c0-e395-4929-86c9-584a81828053
---
# Snap-In Object Macros

These macros provide support for snap-in extensions.

|Name|Description|
|-|-|
|[BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map)|Marks the beginning of the snap-in extension data class map for a Snap-In object.|
|[BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map)|Marks the beginning of the toolbar map for a Snap-In object.|
|[END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map)|Marks the end of the snap-in extension data class map for a Snap-In object.|
|[END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map)|Marks the end of the toolbar map for a Snap-In object.|
|[EXTENSION_SNAPIN_DATACLASS](#extension_snapin_dataclass)|Creates a data member for the data class of the snap-in extension.|
|[EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry)|Enters a snap-in extension data class into the snap-in extension data class map of the Snap-In object.|
|[SNAPINMENUID](#snapinmenuid)|Declares the ID of the context menu used by the Snap-In object.|
|[SNAPINTOOLBARID_ENTRY](#snapintoolbarid_entry)|Enters a toolbar into the toolbar map of the Snap-In object.|

## Requirements

**Header:** atlsnap.h

## <a name="begin_extension_snapin_nodeinfo_map"></a> BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP

Marks the beginning of the snap-in extension data class map.

```
BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP(classname)
```

### Parameters

*classname*<br/>
[in] The name of the snap-in extension data class.

### Remarks

Start your snap-in extension map with the BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP macro, add entries for each of your snap-in extension data types with the [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) macro, and complete the map with the [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) macro.

### Example

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

## <a name="begin_snapintoolbarid_map"></a> BEGIN_SNAPINTOOLBARID_MAP

Declares the beginning of the toolbar ID map for the Snap-In object.

```
BEGIN_SNAPINTOOLBARID_MAP(_class)
```

### Parameters

*_class*<br/>
[in] Specifies the Snap-In object class.

### Example

[!code-cpp[NVC_ATL_Windowing#106](../../atl/codesnippet/cpp/snap-in-object-macros_2.h)]

## <a name="end_extension_snapin_nodeinfo_map"></a> END_EXTENSION_SNAPIN_NODEINFO_MAP

Marks the end of the snap-in extension data class map.

```
END_EXTENSION_SNAPIN_NODEINFO_MAP()
```

### Remarks

Start your snap-in extension map with the [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) macro, add entries for each of your extension snap-in data types with the [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) macro, and complete the map with the END_EXTENSION_SNAPIN_NODEINFO_MAP macro.

### Example

See the example for [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

## <a name="end_snapintoolbarid_map"></a> END_SNAPINTOOLBARID_MAP

Declares the end of the toolbar ID map for the Snap-In object.

```
END_SNAPINTOOLBARID_MAP( _class )
```

### Parameters

*_class*<br/>
[in] Specifies the Snap-In object class.

### Example

See the example for [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## <a name="extension_snapin_dataclass"></a> EXTENSION_SNAPIN_DATACLASS

Adds a data member to the snap-in extension data class for an **ISnapInItemImpl**-derived class.

```
EXTENSION_SNAPIN_DATACLASS(dataClass )
```

### Parameters

*dataClass*<br/>
[in] The data class of the snap-in extension.

### Remarks

This class should also be entered into a snap-in extension data class map. Start your snap-in extension data class map with the [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) macro, add entries for each of your snap-in extension data types with the [EXTENSION_SNAPIN_NODEINFO_ENTRY](#extension_snapin_nodeinfo_entry) macro, and complete the map with the [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) macro.

### Example

[!code-cpp[NVC_ATL_Windowing#105](../../atl/codesnippet/cpp/snap-in-object-macros_1.h)]

## <a name="extension_snapin_nodeinfo_entry"></a> EXTENSION_SNAPIN_NODEINFO_ENTRY

Adds a snap-in extension data class to the snap-in extension data class map.

```
EXTENSION_SNAPIN_NODEINFO_ENTRY( dataClass )
```

### Parameters

*dataClass*<br/>
[in] The data class of the snap-in extension.

### Remarks

Start your snap-in extension data class map with the [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map) macro, add entries for each of your snap-in extension data types with the EXTENSION_SNAPIN_NODEINFO_ENTRY macro, and complete the map with the [END_EXTENSION_SNAPIN_NODEINFO_MAP](#end_extension_snapin_nodeinfo_map) macro.

### Example

See the example for [BEGIN_EXTENSION_SNAPIN_NODEINFO_MAP](#begin_extension_snapin_nodeinfo_map).

## <a name="snapinmenuid"></a> SNAPINMENUID

Use this macro to declare the context menu resource of the Snap-In object.

```
SNAPINMENUID( id )
```

### Parameters

*id*<br/>
[in] Identifies the context menu of the Snap-In object.

## <a name="snapintoolbarid_entry"></a> SNAPINTOOLBARID_ENTRY

Use this macro to enter a toolbar ID into the Snap-In object's toolbar ID map.

```
SNAPINTOOLBARID_ENTRY( id )
```

### Parameters

*id*<br/>
[in] Identifies the toolbar control.

### Remarks

The [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map) macro marks the beginning of the toolbar ID map; the [END_SNAPINTOOLBARID_MAP](#end_snapintoolbarid_map) macro marks the end.

### Example

See the example for [BEGIN_SNAPINTOOLBARID_MAP](#begin_snapintoolbarid_map).

## See also

[Macros](../../atl/reference/atl-macros.md)
