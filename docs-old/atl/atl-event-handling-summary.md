---
title: "ATL Event Handling Summary"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, implementing"
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
caps.latest.revision: 8
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
|[IDispatchImpl](../atl/idispatchimpl-class.md)|Dual|Yes|Yes|  
|[IDispEventImpl](../atl/idispeventimpl-class.md)|Dispinterface|No|Yes|  
|[IDispEventSimpleImpl](../atl/idispeventsimpleimpl-class.md)|Dispinterface|No|No|  
  
 \* When using ATL support classes, you are never required to implement the **IUnknown** or `IDispatch` methods manually.  
  
## Advising and Unadvising the Event Source  
 There are three main ways of advising and unadvising an event source using ATL.  
  
|Advise function|Unadvise function|Most suitable for use with|Requires you to keep track of a cookie?|Comments|  
|---------------------|-----------------------|--------------------------------|---------------------------------------------|--------------|  
|[AtlAdvise](../Topic/AtlAdvise.md), [CComPtrBase::Advise](../Topic/CComPtrBase::Advise.md)|[AtlUnadvise](../Topic/AtlUnadvise.md)|Vtable or dual interfaces|Yes|`AtlAdvise` is a global ATL function. `CComPtrBase::Advise` is used by [CComPtr](../atl/ccomptr-class.md) and [CComQIPtr](../atl/ccomqiptr-class.md).|  
|[IDispEventSimpleImpl::DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md)|[IDispEventSimpleImpl::DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md)|[IDispEventImpl](../atl/idispeventimpl-class.md) or [IDispEventSimpleImpl](../atl/idispeventsimpleimpl-class.md)|No|Fewer parameters than `AtlAdvise` since the base class does more work.|  
|[CComCompositeControl::AdviseSinkMap(TRUE)](../Topic/CComCompositeControl::AdviseSinkMap.md)|[CComCompositeControl::AdviseSinkMap(FALSE)](../Topic/CComCompositeControl::AdviseSinkMap.md)|ActiveX controls in Composite controls|No|`CComCompositeControl::AdviseSinkMap` advises all entries in the event sink map. The same function unadvises the entries. This method is called automatically by the `CComCompositeControl` class.|  
|[CAxDialogImpl::AdviseSinkMap(TRUE)](../Topic/CAxDialogImpl::AdviseSinkMap.md)|[CAxDialogImpl::AdviseSinkMap(FALSE)](../Topic/CAxDialogImpl::AdviseSinkMap.md)|ActiveX controls in a dialog box|No|`CAxDialogImpl::AdviseSinkMap` advises and unadvises all ActiveX controls in the dialog resource. This is done automatically for you.|  
  
## See Also  
 [Event Handling](../atl/event-handling-and-atl.md)   
 [Supporting IDispEventImpl](../atl/supporting-idispeventimpl.md)