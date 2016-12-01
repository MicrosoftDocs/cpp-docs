---
title: "CConnectionPoint Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CConnectionPoint"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CConnectionPoint class"
ms.assetid: f0f23a1e-5e8c-41a9-aa6c-1a4793b28e8f
caps.latest.revision: 20
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
# CConnectionPoint Class
Defines a special type of interface used to communicate with other OLE objects, called a "connection point."  
  
## Syntax  
  
```  
class CConnectionPoint : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CConnectionPoint::CConnectionPoint](#cconnectionpoint__cconnectionpoint)|Constructs a `CConnectionPoint` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CConnectionPoint::GetConnections](#cconnectionpoint__getconnections)|Retrieves all connection points in a connection map.|  
|[CConnectionPoint::GetContainer](#cconnectionpoint__getcontainer)|Retrieves the container of the control that owns the connection map.|  
|[CConnectionPoint::GetIID](#cconnectionpoint__getiid)|Retrieves the interface ID of a connection point.|  
|[CConnectionPoint::GetMaxConnections](#cconnectionpoint__getmaxconnections)|Retrieves the maximum number of connection points supported by a control.|  
|[CConnectionPoint::GetNextConnection](#cconnectionpoint__getnextconnection)|Retrieves a pointer to the connection element at `pos`.|  
|[CConnectionPoint::GetStartPosition](#cconnectionpoint__getstartposition)|Starts a map iteration by returning a **POSITION** value that can be passed to a `GetNextConnection` call.|  
|[CConnectionPoint::OnAdvise](#cconnectionpoint__onadvise)|Called by the framework when establishing or breaking connections.|  
|[CConnectionPoint::QuerySinkInterface](#cconnectionpoint__querysinkinterface)|Retrieves a pointer to the requested sink interface.|  
  
## Remarks  
 Unlike normal OLE interfaces, which are used to implement and expose the functionality of an OLE control, a connection point implements an outgoing interface that is able to initiate actions on other objects, such as firing events and change notifications.  
  
 A connection consists of two parts: the object calling the interface, called the "source," and the object implementing the interface, called the "sink." By exposing a connection point, a source allows sinks to establish connections to itself. Through the connection point mechanism, a source object obtains a pointer to the sink's implementation of a set of member functions. For example, to fire an event implemented by the sink, the source can call the appropriate method of the sink's implementation.  
  
 By default, a `COleControl`-derived class implements two connection points: one for events and one for property change notifications. These connections are used, respectively, for event firing and for notifying a sink (for example, the control's container) when a property value has changed. Support is also provided for OLE controls to implement additional connection points. For each additional connection point implemented in your control class, you must declare a "connection part" that implements the connection point. If you implement one or more connection points, you also need to declare a single "connection map" in your control class.  
  
 The following example demonstrates a simple connection map and one connection point for the `Sample` OLE control, consisting of two fragments of code: the first portion declares the connection map and point; the second implements this map and point. The first fragment is inserted into the declaration of the control class, under the `protected` section:  
  
 [!code-cpp[NVC_MFCConnectionPoints#7](../../mfc/codesnippet/cpp/cconnectionpoint-class_1.h)]  
  
 The `BEGIN_CONNECTION_PART` and `END_CONNECTION_PART` macros declare an embedded class, `XSampleConnPt` (derived from `CConnectionPoint`) that implements this particular connection point. If you want to override any `CConnectionPoint` member functions, or add member functions of your own, declare them between these two macros. For example, the `CONNECTION_IID` macro overrides the `CConnectionPoint::GetIID` member function when placed between these two macros.  
  
 The second code fragment is inserted into the implementation file (.CPP) of your control class. This code implements the connection map, which includes the additional connection point, `SampleConnPt`:  
  
 [!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/cconnectionpoint-class_2.cpp)]  
  
 Once these code fragments have been inserted, the Sample OLE control exposes a connection point for the **ISampleSink** interface.  
  
 Typically, connection points support "multicasting", which is the ability to broadcast to multiple sinks connected to the same interface. The following code fragment demonstrates how to accomplish multicasting by iterating through each sink on a connection point:  
  
 [!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]  
  
 This example retrieves the current set of connections on the `SampleConnPt` connection point with a call to `CConnectionPoint::GetConnections`. It then iterates through the connections and calls `ISampleSink::SinkFunc` on every active connection.  
  
 For more information on using `CConnectionPoint`, see the article [Connection Points](../../mfc/connection-points.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CConnectionPoint`  
  
## Requirements  
 **Header:** afxdisp.h  
  
##  <a name="cconnectionpoint__cconnectionpoint"></a>  CConnectionPoint::CConnectionPoint  
 Constructs a `CConnectionPoint` object.  
  
```  
CConnectionPoint();
```  
  
##  <a name="cconnectionpoint__getconnections"></a>  CConnectionPoint::GetConnections  
 Call this function to retrieve all active connections for a connection point.  
  
```  
const CPtrArray* GetConnections();
```  
  
### Return Value  
 A pointer to an array of active connections (sinks). Some of the pointers in the array may be NULL. Each non-NULL pointer in this array can be safely converted to a pointer to the sink interface using a cast operator.  
  
##  <a name="cconnectionpoint__getcontainer"></a>  CConnectionPoint::GetContainer  
 Called by the framework to retrieve the **IConnectionPointContainer** for the connection point.  
  
```  
virtual LPCONNECTIONPOINTCONTAINER GetContainer();
```  
  
### Return Value  
 If successful, a pointer to the container; otherwise **NULL**.  
  
### Remarks  
 This function is typically implemented by the `BEGIN_CONNECTION_PART` macro.  
  
##  <a name="cconnectionpoint__getiid"></a>  CConnectionPoint::GetIID  
 Called by the framework to retrieve the interface ID of a connection point.  
  
```  
virtual REFIID GetIID() = 0;  
```  
  
### Return Value  
 A reference to the connection point's interface ID.  
  
### Remarks  
 Override this function to return the interface ID for this connection point.  
  
##  <a name="cconnectionpoint__getmaxconnections"></a>  CConnectionPoint::GetMaxConnections  
 Called by the framework to retrieve the maximum number of connections supported by the connection point.  
  
```  
virtual int GetMaxConnections();
```  
  
### Return Value  
 The maximum number of connections supported by the control, or -1 if no limit.  
  
### Remarks  
 The default implementation returns -1, indicating no limit.  
  
 Override this function if you want to limit the number of sinks that can connect to your control.  
  
##  <a name="cconnectionpoint__getnextconnection"></a>  CConnectionPoint::GetNextConnection  
 Retrieves a pointer to the connection element at `pos`.  
  
```  
LPUNKNOWN GetNextConnection(POSITION& pos) const;

 
```  
  
### Parameters  
 `pos`  
 Specifies a reference to a **POSITION** value returned by a previous `GetNextConnection` or [GetStartPosition](#cconnectionpoint__getstartposition) call.  
  
### Return Value  
 A pointer to the connection element specified by `pos`, or NULL.  
  
### Remarks  
 This function is most useful for iterating through all the elements in the connection map. When iterating, skip any NULLs returned from this function.  
  
### Example  
 [!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]  
  
##  <a name="cconnectionpoint__getstartposition"></a>  CConnectionPoint::GetStartPosition  
 Starts a map iteration by returning a **POSITION** value that can be passed to a [GetNextConnection](#cconnectionpoint__getnextconnection) call.  
  
```  
POSITION GetStartPosition() const;

 
```  
  
### Return Value  
 A **POSITION** value that indicates a starting position for iterating the map; or **NULL** if the map is empty.  
  
### Remarks  
 The iteration sequence is not predictable; therefore, the "first element in the map" has no special significance.  
  
### Example  
  See the example for [CConnectionPoint::GetNextConnection](#cconnectionpoint__getnextconnection).  
  
##  <a name="cconnectionpoint__onadvise"></a>  CConnectionPoint::OnAdvise  
 Called by the framework when a connection is being established or broken.  
  
```  
virtual void OnAdvise(BOOL bAdvise);
```  
  
### Parameters  
 `bAdvise`  
 **TRUE**, if a connection is being established; otherwise **FALSE**.  
  
### Remarks  
 The default implementation does nothing.  
  
 Override this function if you want notification when sinks connect to or disconnect from your connection point.  
  
##  <a name="cconnectionpoint__querysinkinterface"></a>  CConnectionPoint::QuerySinkInterface  
 Retrieves a pointer to the requested sink interface.  
  
```  
virtual HRESULT QuerySinkInterface(
    LPUNKNOWN pUnkSink,  
    void** ppInterface);
```  
  
### Parameters  
 `pUnkSink`  
 The identifier of the sink interface being requested.  
  
 `ppInterface`  
 A pointer to the interface pointer identified by `pUnkSink`. If the object does not support this interface, \* `ppInterface` is set to **NULL**.  
  
### Return Value  
 A standard `HRESULT` value.  
  
## See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)

