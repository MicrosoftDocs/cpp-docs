---
description: "Learn more about: Implementing the Event Handling Interface"
title: "Implementing the Event Handling Interface"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL, event handling", "event handling, ATL", "interfaces, event and event sink"]
ms.assetid: eb2a5b33-88dc-4ce3-bee0-c5c38ea050d7
---
# Implementing the Event Handling Interface

ATL helps you with all three elements required for handling events: implementing the event interface, advising the event source, and unadvising the event source. The precise steps you'll need to take depend on the type of the event interface and the performance requirements of your application.

The most common ways of implementing an interface using ATL are:

- Deriving from a custom interface directly.

- Deriving from [IDispatchImpl](../atl/reference/idispatchimpl-class.md) for dual interfaces described in a type library.

- Deriving from [IDispEventImpl](../atl/reference/idispeventimpl-class.md) for dispinterfaces described in a type library.

- Deriving from [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) for dispinterfaces not described in a type library or when you want to improve efficiency by not loading the type information at run time.

If you are implementing a custom or dual interface, you should advise the event source by calling [AtlAdvise](reference/connection-point-global-functions.md#atladvise) or [CComPtrBase::Advise](../atl/reference/ccomptrbase-class.md#advise). You will need to keep track of the cookie returned by the call yourself. Call [AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise) to break the connection.

If you are implementing a dispinterface using `IDispEventImpl` or `IDispEventSimpleImpl`, you should advise the event source by calling [IDispEventSimpleImpl::DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise). Call [IDispEventSimpleImpl::DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise) to break the connection.

If you are using `IDispEventImpl` as a base class of a composite control, the event sources listed in the sink map will be advised and unadvised automatically using [CComCompositeControl::AdviseSinkMap](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).

The `IDispEventImpl` and `IDispEventSimpleImpl` classes manage the cookie for you.

## See also

[Event Handling](../atl/event-handling-and-atl.md)
