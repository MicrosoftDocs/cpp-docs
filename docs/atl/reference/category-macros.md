---
description: "Learn more about: Category Macros"
title: "Category Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlcom/ATL::BEGIN_CATEGORY_MAP", "atlcom/ATL::END_CATEGORY_MAP", "atlcom/ATL::IMPLEMENTED_CATEGORY", "atlcom/ATL::REQUIRED_CATEGORY"]
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
---
# Category Macros

These macros define category maps.

|Macro|Description|
|-|-|
|[BEGIN_CATEGORY_MAP](#begin_category_map)|Marks the beginning of the category map.|
|[END_CATEGORY_MAP](#end_category_map)|Marks the end of the category map.|
|[IMPLEMENTED_CATEGORY](#implemented_category)|Indicates categories that are implemented by the COM object.|
|[REQUIRED_CATEGORY](#required_category)|Indicates categories that are required of the container by the COM object.|

## Requirements

**Header:** atlcom.h

## <a name="begin_category_map"></a> BEGIN_CATEGORY_MAP

Marks the beginning of the category map.

```cpp
BEGIN_CATEGORY_MAP(theClass)
```

### Parameters

*theClass*<br/>
[in] The name of the class containing the category map.

### Remarks

The category map is used to specify which component categories the COM class will implement and which categories it requires from its container.

Add an [IMPLEMENTED_CATEGORY](#implemented_category) entry to the map for each category implemented by the COM class. Add a [REQUIRED_CATEGORY](#required_category) entry to the map for each category that the class requires its clients to implement. Mark the end of the map with the [END_CATEGORY_MAP](#end_category_map) macro.

The component categories listed in the map will be registered automatically when the module is registered if the class has an associated [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) or [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto).

> [!NOTE]
> ATL uses the standard component categories manager to register component categories. If the manager is not present on the system when the module is registered, registration succeeds, but the component categories will not be registered for that class.

For more information about component categories, see [What are Component Categories and how do they work](/windows/win32/com/component-categories-and-how-they-work) in the Windows SDK.

### Example

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

## <a name="end_category_map"></a> END_CATEGORY_MAP

Marks the end of the category map.

```cpp
END_CATEGORY_MAP()
```

### Example

See the example for [BEGIN_CATEGORY_MAP](#begin_category_map).

## <a name="implemented_category"></a> IMPLEMENTED_CATEGORY

Add an IMPLEMENTED_CATEGORY macro to your component's [category map](#begin_category_map) to specify that it should be registered as implementing the category identified by the *catID* parameter.

```cpp
IMPLEMENTED_CATEGORY(catID)
```

### Parameters

*catID*<br/>
[in] A CATID constant or variable holding the globally unique identifier (GUID) for the implemented category. The address of *catID* will be taken and added to the map. See the table below for a selection of stock categories.

### Remarks

The component categories listed in the map will be registered automatically when the module is registered if the class has an associated [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) or [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro.

Clients can use the category information registered for the class to determine its capabilities and requirements without having to create an instance of it.

For more information about component categories, see [What are Component Categories and how do they work](/windows/win32/com/component-categories-and-how-they-work) in the Windows SDK.

### A Selection of Stock Categories

|Description|Symbol|Registry GUID|
|-----------------|------------|-------------------|
|Safe For Scripting|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|
|Safe For Initialization|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|
|Simple Frame Site Containment|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|
|Simple Data Binding|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|
|Advanced Data Binding|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|
|Windowless Controls|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|
|Internet-Aware Objects|See [Internet Aware Objects](/windows/win32/com/internet-aware-objects) in the Windows SDK for a sample list.||

### Example

[!code-cpp[NVC_ATL_Windowing#100](../../atl/codesnippet/cpp/category-macros_1.h)]

## <a name="required_category"></a> REQUIRED_CATEGORY

Add a REQUIRED_CATEGORY macro to your component's [category map](#begin_category_map) to specify that it should be registered as requiring the category identified by the *catID* parameter.

```cpp
REQUIRED_CATEGORY( catID )
```

### Parameters

*catID*<br/>
[in] A CATID constant or variable holding the globally unique identifier (GUID) for the required category. The address of *catID* will be taken and added to the map. See the table below for a selection of stock categories.

### Remarks

The component categories listed in the map will be registered automatically when the module is registered if the class has an associated [OBJECT_ENTRY_AUTO](../../atl/reference/object-map-macros.md#object_entry_auto) or [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro.

Clients can use the category information registered for the class to determine its capabilities and requirements without having to create an instance of it. For example, a control may require that a container support data binding. The container can find out if it has the capabilities necessary to host the control by querying the category manager for the categories required by that control. If the container does not support a required feature, it can refuse to host the COM object.

For more information about component categories, including a sample list, see [What are Component Categories and how do they work](/windows/win32/com/component-categories-and-how-they-work) in the Windows SDK.

### A Selection of Stock Categories

|Description|Symbol|Registry GUID|
|-----------------|------------|-------------------|
|Safe For Scripting|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|
|Safe For Initialization|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|
|Simple Frame Site Containment|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|
|Simple Data Binding|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|
|Advanced Data Binding|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|
|Windowless Controls|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|
|Internet-Aware Objects|See [Internet Aware Objects](/windows/win32/com/internet-aware-objects) in the Windows SDK for a sample list.||

### Example

[!code-cpp[NVC_ATL_Windowing#135](../../atl/codesnippet/cpp/category-macros_2.h)]

## See also

[Macros](../../atl/reference/atl-macros.md)
