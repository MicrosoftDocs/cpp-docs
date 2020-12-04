---
description: "Learn more about: CDynamicChain Class"
title: "CDynamicChain Class"
ms.date: "11/04/2016"
f1_keywords: ["CDynamicChain", "ATLWIN/ATL::CDynamicChain", "ATLWIN/ATL::CDynamicChain::CDynamicChain", "ATLWIN/ATL::CDynamicChain::CallChain", "ATLWIN/ATL::CDynamicChain::RemoveChainEntry", "ATLWIN/ATL::CDynamicChain::SetChainEntry"]
helpviewer_keywords: ["message maps, chaining", "chaining message maps", "CDynamicChain class"]
ms.assetid: f084b2be-0e77-4836-973d-ae278a1e9da8
---
# CDynamicChain Class

This class provides methods supporting the dynamic chaining of message maps.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CDynamicChain
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDynamicChain::CDynamicChain](#cdynamicchain)|The constructor.|
|[CDynamicChain::~CDynamicChain](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDynamicChain::CallChain](#callchain)|Directs a Windows message to another object's message map.|
|[CDynamicChain::RemoveChainEntry](#removechainentry)|Removes a message map entry from the collection.|
|[CDynamicChain::SetChainEntry](#setchainentry)|Adds a message map entry to the collection or modifies an existing entry.|

## Remarks

`CDynamicChain` manages a collection of message maps, enabling a Windows message to be directed, at run time, to another object's message map.

To add support for dynamic chaining of message maps, do the following:

- Derive your class from `CDynamicChain`. In the message map, specify the [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro to chain to another object's default message map.

- Derive every class you want to chain to from [CMessageMap](../../atl/reference/cmessagemap-class.md). `CMessageMap` allows an object to expose its message maps to other objects.

- Call `CDynamicChain::SetChainEntry` to identify which object and which message map you want to chain to.

For example, suppose your class is defined as follows:

[!code-cpp[NVC_ATL_Windowing#88](../../atl/codesnippet/cpp/cdynamicchain-class_1.h)]

The client then calls `CMyWindow::SetChainEntry`:

[!code-cpp[NVC_ATL_Windowing#89](../../atl/codesnippet/cpp/cdynamicchain-class_2.cpp)]

where `chainedObj` is the chained object and is an instance of a class derived from `CMessageMap`. Now, if `myCtl` receives a message that is not handled by `OnPaint` or `OnSetFocus`, the window procedure directs the message to `chainedObj`'s default message map.

For more information about message map chaining, see [Message Maps](../../atl/message-maps-atl.md) in the article "ATL Window Classes."

## Requirements

**Header:** atlwin.h

## <a name="callchain"></a> CDynamicChain::CallChain

Directs the Windows message to another object's message map.

```
BOOL CallChain(
    DWORD dwChainID,
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT& lResult);
```

### Parameters

*dwChainID*<br/>
[in] The unique identifier associated with the chained object and its message map.

*hWnd*<br/>
[in] The handle to the window receiving the message.

*uMsg*<br/>
[in] The message sent to the window.

*wParam*<br/>
[in] Additional message-specific information.

*lParam*<br/>
[in] Additional message-specific information.

*lResult*<br/>
[out] The result of the message processing.

### Return Value

TRUE if the message is fully processed; otherwise, FALSE.

### Remarks

For the window procedure to invoke `CallChain`, you must specify the [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro in your message map. For an example, see the [CDynamicChain](../../atl/reference/cdynamicchain-class.md) overview.

`CallChain` requires a previous call to [SetChainEntry](#setchainentry) to associate the *dwChainID* value with an object and its message map.

## <a name="cdynamicchain"></a> CDynamicChain::CDynamicChain

The constructor.

```
CDynamicChain();
```

## <a name="dtor"></a> CDynamicChain::~CDynamicChain

The destructor.

```
~CDynamicChain();
```

### Remarks

Frees all allocated resources.

## <a name="removechainentry"></a> CDynamicChain::RemoveChainEntry

Removes the specified message map from the collection.

```
BOOL RemoveChainEntry(DWORD dwChainID);
```

### Parameters

*dwChainID*<br/>
[in] The unique identifier associated with the chained object and its message map. You originally define this value through a call to [SetChainEntry](#setchainentry).

### Return Value

TRUE if the message map is successfully removed from the collection. Otherwise, FALSE.

## <a name="setchainentry"></a> CDynamicChain::SetChainEntry

Adds the specified message map to the collection.

```
BOOL SetChainEntry(
    DWORD dwChainID,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);
```

### Parameters

*dwChainID*<br/>
[in] The unique identifier associated with the chained object and its message map.

*pObject*<br/>
[in] A pointer to the chained object declaring the message map. This object must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
[in] The identifier of the message map in the chained object. The default value is 0, which identifies the default message map declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). To specify an alternate message map declared with [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), pass `msgMapID`.

### Return Value

TRUE if the message map is successfully added to the collection. Otherwise, FALSE.

### Remarks

If the *dwChainID* value already exists in the collection, its associated object and message map are replaced by *pObject* and *dwMsgMapID*, respectively. Otherwise, a new entry is added.

## See also

[CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
