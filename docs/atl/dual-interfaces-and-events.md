---
description: "Learn more about: Dual Interfaces and Events"
title: "Dual Interfaces and Events"
ms.date: "11/04/2016"
helpviewer_keywords: ["events [C++], dual interfaces", "dual interfaces, events"]
ms.assetid: bb382f7c-e885-4274-bf07-83f3602615d2
---
# Dual Interfaces and Events

While it is possible to design an event interface as a dual, there are a number of good design reasons not to do so. The fundamental reason is that the source of the event will only fire the event via the vtable or via `Invoke`, not both. If the event source fires the event as a direct vtable method call, the `IDispatch` methods will never be used and it's clear that the interface should have been a pure vtable interface. If the event source fires the event as a call to `Invoke`, the vtable methods will never be used and it's clear that the interface should have been a dispinterface. If you define your event interfaces as duals, you'll be requiring clients to implement part of an interface that will never be used.

> [!NOTE]
> This argument does not apply to dual interfaces, in general. From an implementation perspective, duals are a quick, convenient, and well-supported way of implementing interfaces that are accessible to a wide range of clients.

There are further reasons to avoid dual event interfaces; neither Visual Basic nor Internet Explorer support them.

## See also

[Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)
