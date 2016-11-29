---
title: "Implementing the Event Handling Interface | Microsoft Docs"
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
  - "ATL, event handling"
  - "event handling, ATL"
  - "interfaces, event and event sink"
ms.assetid: eb2a5b33-88dc-4ce3-bee0-c5c38ea050d7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Implementing the Event Handling Interface
ATL helps you with all three elements required for handling events: implementing the event interface, advising the event source, and unadvising the event source. The precise steps you'll need to take depend on the type of the event interface and the performance requirements of your application.  
  
 The most common ways of implementing an interface using ATL are:  
  
-   Deriving from a custom interface directly.  
  
-   Deriving from [IDispatchImpl](../atl/reference/idispatchimpl-class.md) for dual interfaces described in a type library.  
  
-   Deriving from [IDispEventImpl](../atl/reference/idispeventimpl-class.md) for dispinterfaces described in a type library.  
  
-   Deriving from [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) for dispinterfaces not described in a type library or when you want to improve efficiency by not loading the type information at run time.  
  

 If you are implementing a custom or dual interface, you should advise the event source by calling [AtlAdvise](http://msdn.microsoft.com/Library/625a2f03-6b7f-4761-be5d-d2871d1d3254) or [CComPtrBase::Advise](../atl/reference/ccomptrbase-class.md#ccomptrbase__advise). You will need to keep track of the cookie returned by the call yourself. Call [AtlUnadvise](http://msdn.microsoft.com/Library/939d2e50-e2df-4e8f-a16a-e9650b8f0340) to break the connection.  

  
 If you are implementing a dispinterface using `IDispEventImpl` or `IDispEventSimpleImpl`, you should advise the event source by calling [IDispEventSimpleImpl::DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventadvise). Call [IDispEventSimpleImpl::DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventunadvise) to break the connection.  
  
 If you are using `IDispEventImpl` as a base class of a composite control, the event sources listed in the sink map will be advised and unadvised automatically using [CComCompositeControl::AdviseSinkMap](../atl/reference/ccomcompositecontrol-class.md#ccomcompositecontrol__advisesinkmap).  
  
 The `IDispEventImpl` and `IDispEventSimpleImpl` classes manage the cookie for you.  
  
## See Also  
 [Event Handling](../atl/event-handling-and-atl.md)

