---
description: "Learn more about: Interfaces (ATL)"
title: "Interfaces (ATL)"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["COM interfaces", "interfaces, COM"]
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
---
# Interfaces (ATL)

An interface is the way in which an object exposes its functionality to the outside world. In COM, an interface is a table of pointers (like a C++ vtable) to functions implemented by the object. The table represents the interface, and the functions to which it points are the methods of that interface. An object can expose as many interfaces as it chooses.

Each interface is based on the fundamental COM interface, [IUnknown](../atl/iunknown.md). The methods of `IUnknown` allow navigation to other interfaces exposed by the object.

Also, each interface is given a unique interface ID (IID). This uniqueness makes it easy to support interface versioning. A new version of an interface is simply a new interface, with a new IID.

> [!NOTE]
> IIDs for the standard COM and OLE interfaces are predefined.

## See also

[Introduction to COM](../atl/introduction-to-com.md)<br/>
[COM Objects and Interfaces](/windows/win32/com/com-objects-and-interfaces)
