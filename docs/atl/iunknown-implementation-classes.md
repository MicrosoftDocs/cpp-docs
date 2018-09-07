---
title: "IUnknown Implementation Classes (ATL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["vc.atl.Iunknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["IUnknown implementation classes"]
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IUnknown Implementation Classes

The following classes implement `IUnknown` and related methods:

- [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) Manages reference counting for both aggregated and nonaggregated objects. Allows you to specify a threading model.

- [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) Manages reference counting for both aggregated and nonaggregated objects. Uses the default threading model of the server.

- [CComAggObject](../atl/reference/ccomaggobject-class.md) Implements `IUnknown` for an aggregated object.

- [CComObject](../atl/reference/ccomobject-class.md) Implements `IUnknown` for a nonaggregated object.

- [CComPolyObject](../atl/reference/ccompolyobject-class.md) Implements `IUnknown` for aggregated and nonaggregated objects. Using `CComPolyObject` avoids having both `CComAggObject` and `CComObject` in your module. A single `CComPolyObject` object handles both aggregated and nonaggregated cases.

- [CComObjectNoLock](../atl/reference/ccomobjectnolock-class.md) Implements `IUnknown` for a nonaggregated object, without modifying the module lock count.

- [CComTearOffObject](../atl/reference/ccomtearoffobject-class.md) Implements `IUnknown` for a tear-off interface.

- [CComCachedTearOffObject](../atl/reference/ccomcachedtearoffobject-class.md) Implements `IUnknown` for a "cached" tear-off interface.

- [CComContainedObject](../atl/reference/ccomcontainedobject-class.md) Implements `IUnknown` for the inner object of an aggregation or a tear-off interface.

- [CComObjectGlobal](../atl/reference/ccomobjectglobal-class.md) Manages a reference count on the module to ensure your object won't be deleted.

- [CComObjectStack](../atl/reference/ccomobjectstack-class.md) Creates a temporary COM object, using a skeletal implementation of `IUnknown`.

## Related Articles

[Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)

## See Also

[Class Overview](../atl/atl-class-overview.md)   
[Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)   
[COM Map Macros](../atl/reference/com-map-macros.md)   
[COM Map Global Functions](../atl/reference/com-map-global-functions.md)

