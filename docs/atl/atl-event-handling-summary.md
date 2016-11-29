---
title: "ATL Event Handling Summary | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, implementing"
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ATL Event Handling Summary
In general, handling COM events is a relatively simple process. There are three main steps:  
  
-   Implement the event interface on your object.  
  
-   Advise the event source that your object wants to receive events.  
  
-   Unadvise the event source when your object no longer needs to receive events.  
  
## Implementing the Interface  
 There are four main ways of implementing an interface using ATL.  
  
|Derive from|Suitable for Interface type|Requires you to implement all methods*|Requires a type library at run time|  
|-----------------|---------------------------------|---------------------------------------------|-----------------------------------------|  
|The interface|Vtable|Yes|No|  
|[IDispatchImpl](../atl/reference/idispatchimpl-class.md)|Dual|Yes|Yes|  
|[IDispEventImpl](../atl/reference/idispeventimpl-class.md)|Dispinterface|No|Yes|  
|[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|Dispinterface|No|No|  
  
 \* When using ATL support classes, you are never required to implement the **IUnknown** or `IDispatch` methods manually.  
  
## Advising and Unadvising the Event Source  
 There are three main ways of advising and unadvising an event source using ATL.  
  
|Advise function|Unadvise function|Most suitable for use with|Requires you to keep track of a cookie|Comments|  
|---------------------|-----------------------|--------------------------------|---------------------------------------------|--------------|  

|[AtlAdvise](http://msdn.microsoft.com/library/625a2f03-6b7f-4761-be5d-d2871d1d3254), [CComPtrBase::Advise](../atl/reference/ccomptrbase-class.md#ccomptrbase__advise)|[AtlUnadvise](http://msdn.microsoft.com/library/939d2e50-e2df-4e8f-a16a-e9650b8f0340)|Vtable or dual interfaces|Yes|`AtlAdvise` is a global ATL function. `CComPtrBase::Advise` is used by [CComPtr](../atl/reference/ccomptr-class.md) and [CComQIPtr](../atl/reference/ccomqiptr-class.md).|  

|[IDispEventSimpleImpl::DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventadvise)|[IDispEventSimpleImpl::DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventunadvise)|[IDispEventImpl](../atl/reference/idispeventimpl-class.md) or [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|No|Fewer parameters than `AtlAdvise` since the base class does more work.|  
|[CComCompositeControl::AdviseSinkMap(TRUE)](../atl/reference/ccomcompositecontrol-class.md#ccomcompositecontrol__advisesinkmap)|[CComCompositeControl::AdviseSinkMap(FALSE)](../atl/reference/ccomcompositecontrol-class.md#ccomcompositecontrol__advisesinkmap)|ActiveX controls in Composite controls|No|`CComCompositeControl::AdviseSinkMap` advises all entries in the event sink map. The same function unadvises the entries. This method is called automatically by the `CComCompositeControl` class.|  
|[CAxDialogImpl::AdviseSinkMap(TRUE)](../atl/reference/caxdialogimpl-class.md#caxdialogimpl__advisesinkmap)|[CAxDialogImpl::AdviseSinkMap(FALSE)](../atl/reference/caxdialogimpl-class.md#caxdialogimpl__advisesinkmap)|ActiveX controls in a dialog box|No|`CAxDialogImpl::AdviseSinkMap` advises and unadvises all ActiveX controls in the dialog resource. This is done automatically for you.|  
  
## See Also  
 [Event Handling](../atl/event-handling-and-atl.md)   
 [Supporting IDispEventImpl](../atl/supporting-idispeventimpl.md)

