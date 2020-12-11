---
description: "Learn more about: Object Map Macros"
title: "Object Map Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlcom/ATL::DECLARE_OBJECT_DESCRIPTION", "atlcom/ATL::OBJECT_ENTRY_AUTO", "atlcom/ATL::OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO"]
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
---
# Object Map Macros

These macros define object maps and entries.

|Name|Description|
|-|-|
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Allows you to specify a class object's text description, which will be entered into the object map.|
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Enters an ATL object into the object map, updates the registry, and creates an instance of the object.|
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Allows you to specify that the object should be registered and initialized, but it should not be externally creatable via `CoCreateInstance`.|

## Requirements

**Header:** atlcom.h

## <a name="declare_object_description"></a> DECLARE_OBJECT_DESCRIPTION

Allows you to specify a text description for your class object.

```
DECLARE_OBJECT_DESCRIPTION( x )
```

### Parameters

*x*<br/>
[in] The class object's description.

### Remarks

ATL enters this description into the object map through the [OBJECT_ENTRY_AUTO](#object_entry_auto) macro.

DECLARE_OBJECT_DESCRIPTION implements a `GetObjectDescription` function, which you can use to override the [CComCoClass::GetObjectDescription](ccomcoclass-class.md#getobjectdescription) method.

The `GetObjectDescription` function is called by `IComponentRegistrar::GetComponents`. `IComponentRegistrar` is an Automation interface that allows you to register and unregister individual components in a DLL. When you create a Component Registrar object with the ATL Project Wizard, the wizard will automatically implement the `IComponentRegistrar` interface. `IComponentRegistrar` is typically used by Microsoft Transaction Server.

For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md).

### Example

[!code-cpp[NVC_ATL_Windowing#123](../../atl/codesnippet/cpp/object-map-macros_1.h)]

## <a name="object_entry_auto"></a> OBJECT_ENTRY_AUTO

Enters an ATL object into the object map, updates the registry, and creates an instance of the object.

```
OBJECT_ENTRY_AUTO( clsid, class )
```

### Parameters

*clsid*<br/>
[in] The CLSID of a COM class implemented by the C++ class named *class*.

*class*<br/>
[in] The name of the C++ class implementing the COM class represented by *clsid*.

### Remarks

Object entry macros are placed at global scope in the project to provide support for the registration, initialization, and creation of a class.

OBJECT_ENTRY_AUTO enters the function pointers of the creator class and class-factory creator class `CreateInstance` functions for this object into the auto-generated ATL object map. When [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver) is called, it updates the system registry for each object in the object map.

The table below describes how the information added to the object map is obtained from the class given as the second parameter to this macro.

|Information for|Obtained from|
|---------------------|-------------------|
|COM registration|[Registry Macros](../../atl/reference/registry-macros.md)|
|Class factory creation|[Class Factory Macros](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Instance creation|[Aggregation Macros](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Component category registration|[Category Macros](../../atl/reference/category-macros.md)|
|Class-level initialization and cleanup|[ObjectMain](ccomobjectrootex-class.md#objectmain)|

## <a name="object_entry_non_createable_ex_auto"></a> OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO

Allows you to specify that the object should be registered and initialized, but it should not be externally creatable via `CoCreateInstance`.

```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO( clsid, class )
```

### Parameters

*clsid*<br/>
[in] The CLSID of a COM class implemented by the C++ class named *class*.

*class*<br/>
[in] The name of the C++ class implementing the COM class represented by *clsid*.

### Remarks

Object entry macros are placed at global scope in the project to provide support for the registration, initialization, and creation of a class.

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO allows you to specify that an object should be registered and initialized (see [OBJECT_ENTRY_AUTO](#object_entry_auto) for more information), but it should not be creatable via `CoCreateInstance`.

## See also

[Macros](../../atl/reference/atl-macros.md)
