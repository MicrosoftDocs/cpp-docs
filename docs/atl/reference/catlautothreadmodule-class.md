---
description: "Learn more about: CAtlAutoThreadModule Class"
title: "CAtlAutoThreadModule Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlAutoThreadModule", "atlbase/ATL::CAtlAutoThreadModule"]
helpviewer_keywords: ["CAtlAutoThreadModule class"]
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
---
# CAtlAutoThreadModule Class

This class implements a thread-pooled, apartment-model COM server.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
class CAtlAutoThreadModule : public CAtlAutoThreadModuleT<CAtlAutoThreadModule>
```

## Remarks

`CAtlAutoThreadModule` derives from [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) and implements a thread-pooled, apartment-model COM server. `CAtlAutoThreadModule` uses [CComApartment](../../atl/reference/ccomapartment-class.md) to manage an apartment for each thread in the module.

You must use the [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro in your object's class definition to specify [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) as the class factory. You should then add a single instance of a class derived from `CAtlAutoThreadModuleT` such as `CAtlAutoThreadModule`. For example:

`CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`

> [!NOTE]
> This class replaces the obsolete [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) class.

## Inheritance Hierarchy

`IAtlAutoThreadModule`

[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)

`CAtlAutoThreadModule`

## Requirements

**Header:** atlbase.h

## See also

[CAtlAutoThreadModuleT Class](../../atl/reference/catlautothreadmodulet-class.md)<br/>
[IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[Module Classes](../../atl/atl-module-classes.md)
