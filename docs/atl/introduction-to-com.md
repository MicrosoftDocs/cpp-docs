---
description: "Learn more about: Introduction to COM"
title: "Introduction to COM"
ms.custom: "index-page"
ms.date: "11/04/2016"
helpviewer_keywords: ["COM"]
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
---
# Introduction to COM

COM is the fundamental "object model" on which ActiveX Controls and OLE are built. COM allows an object to expose its functionality to other components and to host applications. It defines both how the object exposes itself and how this exposure works across processes and across networks. COM also defines the object's life cycle.

Fundamental to COM are these concepts:

- [Interfaces](../atl/interfaces-atl.md) — the mechanism through which an object exposes its functionality.

- [IUnknown](../atl/iunknown.md) — the basic interface on which all others are based. It implements the reference counting and interface querying mechanisms running through COM.

- [Reference counting](../atl/reference-counting.md) — the technique by which an object (or, strictly, an interface) decides when it is no longer being used and is therefore free to remove itself.

- [QueryInterface](../atl/queryinterface.md) — the method used to query an object for a given interface.

- [Marshaling](../atl/marshaling.md) — the mechanism that enables objects to be used across thread, process, and network boundaries, allowing for location independence.

- [Aggregation](../atl/aggregation.md) — a way in which one object can make use of another.

## See also

[Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)<br/>
[The Component Object Model](/windows/win32/com/the-component-object-model)
