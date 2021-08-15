---
description: "Learn more about: ATL Event Handling Summary"
title: "ATL Event Handling Summary"
ms.date: "11/04/2016"
helpviewer_keywords: ["event handling, implementing"]
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
---
# ATL Event Handling Summary

In general, handling COM events is a relatively simple process. There are three main steps:

- Implement the event interface on your object.

- Advise the event source that your object wants to receive events.

- Unadvise the event source when your object no longer needs to receive events.

## Implementing the Interface

There are four main ways of implementing an interface using ATL.

|Derive from|Suitable for Interface type|Requires you to implement all methods*|Requires a type library at run time|
|-----------------|---------------------------------|---------------------------------------------|-----------------------------------------|
|The interface|Vtable|Yes|No|
|[IDispatchImpl](../atl/reference/idispatchimpl-class.md)|Dual|Yes|Yes|
|[IDispEventImpl](../atl/reference/idispeventimpl-class.md)|Dispinterface|No|Yes|
|[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|Dispinterface|No|No|

\* When using ATL support classes, you are never required to implement the `IUnknown` or `IDispatch` methods manually.

## Advising and Unadvising the Event Source

There are three main ways of advising and unadvising an event source using ATL.

|Advise function|Unadvise function|Most suitable for use with|Requires you to keep track of a cookie|Comments|
|---------------------|-----------------------|--------------------------------|---------------------------------------------|--------------|
|[AtlAdvise](reference/connection-point-global-functions.md#atladvise), [CComPtrBase::Advise](../atl/reference/ccomptrbase-class.md#advise)|[AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise)|Vtable or dual interfaces|Yes|`AtlAdvise` is a global ATL function. `CComPtrBase::Advise` is used by [CComPtr](../atl/reference/ccomptr-class.md) and [CComQIPtr](../atl/reference/ccomqiptr-class.md).|
|[IDispEventSimpleImpl::DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise)|[IDispEventSimpleImpl::DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise)|[IDispEventImpl](../atl/reference/idispeventimpl-class.md) or [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|No|Fewer parameters than `AtlAdvise` since the base class does more work.|
|[CComCompositeControl::AdviseSinkMap(TRUE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|[CComCompositeControl::AdviseSinkMap(FALSE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|ActiveX controls in Composite controls|No|`CComCompositeControl::AdviseSinkMap` advises all entries in the event sink map. The same function unadvises the entries. This method is called automatically by the `CComCompositeControl` class.|
|[CAxDialogImpl::AdviseSinkMap(TRUE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|[CAxDialogImpl::AdviseSinkMap(FALSE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|ActiveX controls in a dialog box|No|`CAxDialogImpl::AdviseSinkMap` advises and unadvises all ActiveX controls in the dialog resource. This is done automatically for you.|

## See also

[Event Handling](../atl/event-handling-and-atl.md)<br/>
[Supporting IDispEventImpl](../atl/supporting-idispeventimpl.md)
