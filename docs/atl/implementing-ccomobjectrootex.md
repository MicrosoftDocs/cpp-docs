---
description: "Learn more about: Implementing CComObjectRootEx"
title: "Implementing CComObjectRootEx"
ms.date: "11/04/2016"
helpviewer_keywords: ["CComObjectRoot class, implementing", "CComObjectRootEx class"]
ms.assetid: 79630c44-f2df-4e9e-b730-400a0ebfbd2b
---
# Implementing CComObjectRootEx

[CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) is essential; all ATL objects must have one instance of `CComObjectRootEx` or [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) in their inheritance. `CComObjectRootEx` provides the default `QueryInterface` mechanism based on COM map entries.

Through its COM map, an object's interfaces are exposed to a client when the client queries for an interface. The query is performed through `CComObjectRootEx::InternalQueryInterface`. `InternalQueryInterface` only handles interfaces in the COM map table.

You can enter interfaces into the COM map table with the [COM_INTERFACE_ENTRY](reference/com-interface-entry-macros.md#com_interface_entry) macro or one of its variants. For example, the following code enters the interfaces `IDispatch`, `IBeeper`, and `ISupportErrorInfo` into the COM map table:

[!code-cpp[NVC_ATL_COM#1](../atl/codesnippet/cpp/implementing-ccomobjectrootex_1.h)]

## See also

[Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)<br/>
[COM Map Macros](../atl/reference/com-map-macros.md)
