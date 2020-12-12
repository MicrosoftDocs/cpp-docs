---
description: "Learn more about: CMessageMap Class"
title: "CMessageMap Class"
ms.date: "11/04/2016"
f1_keywords: ["CMessageMap", "ATLWIN/ATL::CMessageMap", "ATLWIN/ATL::CMessageMap::ProcessWindowMessage"]
helpviewer_keywords: ["CMessageMap class", "message maps, ATL", "ATL, message handlers"]
ms.assetid: 1f97bc16-a8a0-4cf0-b90f-1778813a5c8e
---
# CMessageMap Class

This class allows an object's message maps to be access by another object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class ATL_NO_VTABLE CMessageMap
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMessageMap::ProcessWindowMessage](#processwindowmessage)|Accesses a message map in the `CMessageMap`-derived class.|

## Remarks

`CMessageMap` is an abstract base class that allows an object's message maps to be accessed by another object. In order for an object to expose its message maps, its class must derive from `CMessageMap`.

ATL uses `CMessageMap` to support contained windows and dynamic message map chaining. For example, any class containing a [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) object must derive from `CMessageMap`. The following code is taken from the [SUBEDIT](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit) sample. Through [CComControl](../../atl/reference/ccomcontrol-class.md), the `CAtlEdit` class automatically derives from `CMessageMap`.

[!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]

Because the contained window, `m_EditCtrl`, will use a message map in the containing class, `CAtlEdit` derives from `CMessageMap`.

For more information about message maps, see [Message Maps](../../atl/message-maps-atl.md) in the article "ATL Window Classes."

## Requirements

**Header:** atlwin.h

## <a name="processwindowmessage"></a> CMessageMap::ProcessWindowMessage

Accesses the message map identified by *dwMsgMapID* in a `CMessageMap`-derived class.

```
virtual BOOL ProcessWindowMessage(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT& lResult,
    DWORD dwMsgMapID) = 0;
```

### Parameters

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

*dwMsgMapID*<br/>
[in] The identifier of the message map that will process the message. The default message map, declared with [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), is identified by 0. An alternate message map, declared with [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), is identified by `msgMapID`.

### Return Value

TRUE if the message is fully handled; otherwise, FALSE.

### Remarks

Called by the window procedure of a [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) object or of an object that is dynamically chaining to the message map.

## See also

[CDynamicChain Class](../../atl/reference/cdynamicchain-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Class Overview](../../atl/atl-class-overview.md)
