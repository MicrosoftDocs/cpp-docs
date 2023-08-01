---
description: "Learn more about: Connection Maps"
title: "Connection Maps"
ms.date: "8/1/2023"
helpviewer_keywords: ["connection maps"]
---

# Connection maps

OLE controls are able to expose interfaces to other applications. These interfaces only allow access from a container into that control. If an OLE control wants to access external interfaces of other OLE objects, a connection point must be established. This connection point allows a control outgoing access to external dispatch maps, such as event maps or notification functions.

The Microsoft Foundation Class Library offers a programming model that supports connection points. In this model, "connection maps" are used to designate interfaces or connection points for the OLE control. Connection maps contain one macro for each connection point. For more information on connection maps, see the [`CConnectionPoint`](../../mfc/reference/cconnectionpoint-class.md) class.

Typically, a control supports just two connection points: one for events and one for property notifications. These are implemented by the `COleControl` base class and require no extra work by the control writer. Any other connection points you want to implement in your class must be added manually. To support connection maps and points, MFC provides the following macros:

### Connection Map declaration and demarcation

|Name|Description|
|-|-|
|[`BEGIN_CONNECTION_PART`](#BEGIN_CONNECTION_PART)|Declares an embedded class that implements an additional connection point (must be used in the class declaration).|
|[`END_CONNECTION_PART`](#END_CONNECTION_PART)|Ends the declaration of a connection point (must be used in the class declaration).|
|[`CONNECTION_IID`](#CONNECTION_IID)|Specifies the interface ID of the control's connection point.|
|[`DECLARE_CONNECTION_MAP`](#DECLARE_CONNECTION_MAP)|Declares that a connection map will be used in a class (must be used in the class declaration).|
|[`BEGIN_CONNECTION_MAP`](#BEGIN_CONNECTION_MAP)|Begins the definition of a connection map (must be used in the class implementation).|
|[`END_CONNECTION_MAP`](#END_CONNECTION_MAP)|Ends the definition of a connection map (must be used in the class implementation).|
|[`CONNECTION_PART`](#CONNECTION_PART)|Specifies a connection point in the control's connection map.|

The following functions assist a sink in establishing and disconnecting a connection using connection points:

### Initialization/termination of connection points

|Name|Description|
|-|-|
|[`AfxConnectionAdvise`](#AfxConnectionAdvise)|Establishes a connection between a source and a sink.|
|[`AfxConnectionUnadvise`](#AfxConnectionUnadvise)|Breaks a connection between a source and a sink.|

## <a name="BEGIN_CONNECTION_PART"></a> `BEGIN_CONNECTION_PART`

Use the `BEGIN_CONNECTION_PART` macro to begin the definition of additional connection points beyond the event and property notification connection points.

```cpp
BEGIN_CONNECTION_PART(theClass, localClass)
```

### Parameters

*`theClass`*
Specifies the name of the control class whose connection point this is.

*`localClass`*
Specifies the name of the local class that implements the connection point.

### Remarks

In the declaration (`.h`) file that defines the member functions for your class, start the connection point with the `BEGIN_CONNECTION_PART` macro. Then add the `CONNECTION_IID` macro and any other member functions you wish to implement. Finally, complete the connection point map with the `END_CONNECTION_PART` macro.

### Requirements

**Header** `afxdisp.h`

## <a name="END_CONNECTION_PART"></a> `END_CONNECTION_PART`

Ends the declaration of your connection point.

```cpp
END_CONNECTION_PART(localClass)
```

### Parameters

*`localClass`*\
Specifies the name of the local class that implements the connection point.

### Requirements

**Header** `afxdisp.h`

## <a name="CONNECTION_IID"></a> `CONNECTION_IID`

Use between the `BEGIN_CONNECTION_PART` and `END_CONNECTION_PART` macros to define an interface ID for a connection point supported by your OLE control.

```cpp
CONNECTION_IID(iid)
```

### Parameters

*`iid`*\
The interface ID of the interface called by the connection point.

### Remarks

The *`iid`* argument is an interface ID used to identify the interface that the connection point calls on its connected sinks. For example:

[!code-cpp[NVC_MFCConnectionPoints#10](../../mfc/codesnippet/cpp/connection-maps_1.h)]

Specifies a connection point that calls the `ISinkInterface` interface.

### Requirements

**Header** `afxdisp.h`

## <a name="DECLARE_CONNECTION_MAP"></a> `DECLARE_CONNECTION_MAP`

Each `COleControl`-derived class in your program can provide a connection map to specify additional connection points that your control supports.

```cpp
DECLARE_CONNECTION_MAP()
```

### Remarks

If your control supports additional points, use the `DECLARE_CONNECTION_MAP` macro at the end of your class declaration. Then, in the .cpp file that defines the member functions for the class, use the `BEGIN_CONNECTION_MAP` macro, `CONNECTION_PART` macros for each of the control's connection points, and the `END_CONNECTION_MAP` macro to declare the end of the connection map.

### Requirements

**Header** `afxdisp.h`

## <a name="BEGIN_CONNECTION_MAP"></a> `BEGIN_CONNECTION_MAP`

Each `COleControl`-derived class in your program can provide a connection map to specify connection points that your control will support.

```cpp
BEGIN_CONNECTION_MAP(theClass, theBase)
```

### Parameters

*`theClass`*\
Specifies the name of the control class whose connection map this is.

*`theBase`*\
Specifies the name of the base class of *`theClass`*.

### Remarks

In the implementation (`.CPP`) file that defines the member functions for your class, start the connection map with the `BEGIN_CONNECTION_MAP` macro, then add macro entries for each of your connection points using the [`CONNECTION_PART`](#CONNECTION_PART) macro. Finally, complete the connection map with the [`END_CONNECTION_MAP`](#END_CONNECTION_MAP) macro.

### Requirements

**Header** `afxdisp.h`

## <a name="END_CONNECTION_MAP"></a> `END_CONNECTION_MAP`

Ends the definition of your connection map.

```cpp
END_CONNECTION_MAP()
```

### Requirements

**Header** `afxdisp.h`

## <a name="CONNECTION_PART"></a> `CONNECTION_PART`

Maps a connection point for your OLE control to a specific interface ID.

```cpp
CONNECTION_PART(theClass, iid, localClass)
```

### Parameters

*`theClass`*\
Specifies the name of the control class whose connection point this is.

*`iid`*\
The interface ID of the interface called by the connection point.

*`localClass`*\
Specifies the name of the local class that implements the connection point.

### Remarks

For example:

[!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/connection-maps_2.cpp)]

implements a connection map, with a connection point, that calls the `IID_ISinkInterface` interface.

### Requirements

**Header** `afxdisp.h`

## <a name="AfxConnectionAdvise"></a> `AfxConnectionAdvise`

Call this function to establish a connection between a source, specified by *`pUnkSrc`*, and a sink, specified by *`pUnkSink`*.

```cpp
BOOL AFXAPI AfxConnectionAdvise(
    LPUNKNOWN pUnkSrc,
    REFIID iid,
    LPUNKNOWN pUnkSink,
    BOOL bRefCount,
    DWORD FAR* pdwCookie);
```

### Parameters

*`pUnkSrc`*\
A pointer to the object that calls the interface.

*`pUnkSink`*\
A pointer to the object that implements the interface.

*`iid`*\
The interface ID of the connection.

*`bRefCount`*\
For out-of-process connections, this parameter must be `TRUE`, and indicates that creating the connection should cause the reference count of *`pUnkSink`* to be incremented.

For in-process connections, `TRUE` indicates that creating the connection should cause the reference count of *`pUnkSink`* to be incremented. `FALSE` indicates that the reference count shouldn't be incremented.

**Warning**: In general, it can't be predicted which connections are in-process and which connections are out-of-process, so it is recommended to always set this parameter to `TRUE`.

*`pdwCookie`*\
A pointer to a `DWORD` where a connection identifier is returned. This value should be passed as the *`dwCookie`* parameter to `AfxConnectionUnadvise` when disconnecting the connection.

### Return Value

Nonzero if a connection was established; otherwise 0.

### Example

[!code-cpp[NVC_MFCConnectionPoints#8](../../mfc/codesnippet/cpp/connection-maps_3.cpp)]

### Requirements

**Header:** `afxctl.h`

## <a name="AfxConnectionUnadvise"></a> `AfxConnectionUnadvise`

Call this function to disconnect a connection between a source, specified by *`pUnkSrc`*, and a sink, specified by *`pUnkSink`*.

```cpp
BOOL AFXAPI AfxConnectionUnadvise(
    LPUNKNOWN pUnkSrc,
    REFIID iid,
    LPUNKNOWN pUnkSink,
    BOOL bRefCount,
    DWORD dwCookie);
```

### Parameters

*`pUnkSrc`*\
A pointer to the object that calls the interface.

*`pUnkSink`*\
A pointer to the object that implements the interface.

*`iid`*\
The interface ID of the connection point interface.

*`bRefCount`*\
For out-of-process connections, this parameter must be `TRUE`, and indicates that creating the connection should cause the reference count of *`pUnkSink`* to be decremented.

For in-process connections, `TRUE` indicates that creating the connection should cause the reference count of *`pUnkSink`* to be decremented. `FALSE` indicates that the reference count shouldn't be decremented.

**Warning**: In general, it can't be predicted which connections are in-process and which connections are out-of-process, so it is recommended to always set this parameter to `TRUE`.

*`dwCookie`*\
The connection identifier returned by ``AfxConnectionAdvise``.

### Return value

Nonzero if a connection was disconnected; otherwise 0.

### Example

[!code-cpp[NVC_MFCConnectionPoints#9](../../mfc/codesnippet/cpp/connection-maps_4.cpp)]

### Requirements

**Header:** `afxctl.h`

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)