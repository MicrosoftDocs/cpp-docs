---
description: "Learn more about: Message Map Macros (ATL)"
title: "Message Map Macros (ATL)"
ms.date: "11/04/2016"
f1_keywords: ["atlwin/ATL::ALT_MSG_MAP", "atlwin/ATL::BEGIN_MSG_MAP", "atlwin/ATL::CHAIN_MSG_MAP_ALT", "atlwin/ATL::CHAIN_MSG_MAP_ALT_MEMBER", "atlwin/ATL::CHAIN_MSG_MAP", "atlwin/ATL::CHAIN_MSG_MAP_DYNAMIC", "atlwin/ATL::CHAIN_MSG_MAP_MEMBER", "atlwin/ATL::COMMAND_CODE_HANDLER", "atlwin/ATL::COMMAND_HANDLER", "atlwin/ATL::COMMAND_ID_HANDLER", "atlwin/ATL::COMMAND_RANGE_CODE_HANDLER", "atlwin/ATL::COMMAND_RANGE_HANDLER", "atlwin/ATL::DECLARE_EMPTY_MSG_MAP", "atlwin/ATL::DEFAULT_REFLECTION_HANDLER", "atlwin/ATL::END_MSG_MAP", "atlwin/ATL::FORWARD_NOTIFICATIONS", "atlwin/ATL::MESSAGE_HANDLER", "atlwin/ATL::MESSAGE_RANGE_HANDLER", "atlwin/ATL::NOTIFY_CODE_HANDLER", "atlwin/ATL::NOTIFY_HANDLER", "atlwin/ATL::NOTIFY_ID_HANDLER", "atlwin/ATL::NOTIFY_RANGE_CODE_HANDLER", "atlwin/ATL::NOTIFY_RANGE_HANDLER", "atlwin/ATL::REFLECT_NOTIFICATIONS", "atlwin/ATL::REFLECTED_COMMAND_CODE_HANDLER", "atlwin/ATL::REFLECTED_COMMAND_HANDLER", "atlwin/ATL::REFLECTED_COMMAND_ID_HANDLER", "atlwin/ATL::REFLECTED_COMMAND_RANGE_CODE_HANDLER", "atlwin/ATL::REFLECTED_COMMAND_RANGE_HANDLER", "atlwin/ATL::REFLECTED_NOTIFY_CODE_HANDLER", "atlwin/ATL::REFLECTED_NOTIFY_HANDLER", "atlwin/ATL::REFLECTED_NOTIFY_ID_HANDLER", "atlwin/ATL::REFLECTED_NOTIFY_RANGE_CODE_HANDLER", "atlwin/ATL::REFLECTED_NOTIFY_RANGE_HANDLER"]
ms.assetid: eefdd546-8934-4a30-b263-9c06a8addcbd
---
# Message Map Macros (ATL)

These macros define message maps and entries.

|Name|Description|
|-|-|
|[ALT_MSG_MAP](#alt_msg_map)|Marks the beginning of an alternate message map.|
|[BEGIN_MSG_MAP](#begin_msg_map)|Marks the beginning of the default message map.|
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Chains to an alternate message map in the base class.|
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Chains to an alternate message map in a data member of the class.|
|[CHAIN_MSG_MAP](#chain_msg_map)|Chains to the default message map in the base class.|
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Chains to the message map in another class at run time.|
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Chains to the default message map in a data member of the class.|
|[COMMAND_CODE_HANDLER](#command_code_handler)|Maps a WM_COMMAND message to a handler function, based on the notification code.|
|[COMMAND_HANDLER](#command_handler)|Maps a WM_COMMAND message to a handler function, based on the notification code and the identifier of the menu item, control, or accelerator.|
|[COMMAND_ID_HANDLER](#command_id_handler)|Maps a WM_COMMAND message to a handler function, based on the identifier of the menu item, control, or accelerator.|
|[COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler)|Maps a WM_COMMAND message to a handler function, based on the notification code and a contiguous range of control identifiers.|
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Maps a WM_COMMAND message to a handler function, based on a contiguous range of control identifiers.|
|[DECLARE_EMPTY_MSG_MAP](#declare_empty_msg_map)|Implements an empty message map.|
|[DEFAULT_REFLECTION_HANDLER](#default_reflection_handler)|Provides a default handler for reflected messages that are not handled otherwise.|
|[END_MSG_MAP](#end_msg_map)|Marks the end of a message map.|
|[FORWARD_NOTIFICATIONS](#forward_notifications)|Forwards notification messages to the parent window.|
|[MESSAGE_HANDLER](#message_handler)|Maps a Windows message to a handler function.|
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Maps a contiguous range of Windows messages to a handler function.|
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Maps a WM_NOTIFY message to a handler function, based on the notification code.|
|[NOTIFY_HANDLER](#notify_handler)|Maps a WM_NOTIFY message to a handler function, based on the notification code and the control identifier.|
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Maps a WM_NOTIFY message to a handler function, based on the control identifier.|
|[NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler)|Maps a WM_NOTIFY message to a handler function, based on the notification code and a contiguous range of control identifiers.|
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Maps a WM_NOTIFY message to a handler function, based on a contiguous range of control identifiers.|
|[REFLECT_NOTIFICATIONS](#reflect_notifications)|Reflects notification messages back to the window that sent them.|
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the notification code.|
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the notification code and the identifier of the menu item, control, or accelerator.|
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the identifier of the menu item, control, or accelerator.|
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the notification code and a contiguous range of control identifiers.|
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Maps a reflected WM_COMMAND message to a handler function, based on a contiguous range of control identifiers.|
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the notification code.|
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the notification code and the control identifier.|
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the control identifier.|
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the notification code and a contiguous range of control identifiers.|
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on a contiguous range of control identifiers.|

## Requirements

**Header:** atlwin.h

## <a name="alt_msg_map"></a> ALT_MSG_MAP

Marks the beginning of an alternate message map.

```
ALT_MSG_MAP(msgMapID)
```

### Parameters

*msgMapID*<br/>
[in] The message map identifier.

### Remarks

ATL identifies each message map by a number. The default message map (declared with the BEGIN_MSG_MAP macro) is identified by 0. An alternate message map is identified by *msgMapID*.

Message maps are used to process messages sent to a window. For example, [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) allows you to specify the identifier of a message map in the containing object. [CContainedWindow::WindowProc](ccontainedwindowt-class.md#windowproc) then uses this message map to direct the contained window's messages either to the appropriate handler function or to another message map. For a list of macros that declare handler functions, see [BEGIN_MSG_MAP](#begin_msg_map).

Always begin a message map with BEGIN_MSG_MAP. You can then declare subsequent alternate message maps.

The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Note that there is always exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Example

The following example shows the default message map and one alternate message map, each containing one handler function:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

The next example shows two alternate message maps. The default message map is empty.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

### Requirements

**Header:** atlwin.h

## <a name="begin_msg_map"></a> BEGIN_MSG_MAP

Marks the beginning of the default message map.

```
BEGIN_MSG_MAP(theClass)
```

### Parameters

*theClass*<br/>
[in] The name of the class containing the message map.

### Remarks

[CWindowImpl::WindowProc](cwindowimpl-class.md#windowproc) uses the default message map to process messages sent to the window. The message map directs messages either to the appropriate handler function or to another message map.

The following macros map a message to a handler function. This function must be defined in *theClass*.

|Macro|Description|
|-----------|-----------------|
|[MESSAGE_HANDLER](#message_handler)|Maps a Windows message to a handler function.|
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Maps a contiguous range of Windows messages to a handler function.|
|[COMMAND_HANDLER](#command_handler)|Maps a WM_COMMAND message to a handler function, based on the notification code and the identifier of the menu item, control, or accelerator.|
|[COMMAND_ID_HANDLER](#command_id_handler)|Maps a WM_COMMAND message to a handler function, based on the identifier of the menu item, control, or accelerator.|
|[COMMAND_CODE_HANDLER](#command_handler)|Maps a WM_COMMAND message to a handler function, based on the notification code.|
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Maps a contiguous range of WM_COMMAND messages to a handler function, based on the identifier of the menu item, control, or accelerator.|
|[NOTIFY_HANDLER](#notify_handler)|Maps a WM_NOTIFY message to a handler function, based on the notification code and the control identifier.|
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Maps a WM_NOTIFY message to a handler function, based on the control identifier.|
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Maps a WM_NOTIFY message to a handler function, based on the notification code.|
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Maps a contiguous range of WM_NOTIFY messages to a handler function, based on the control identifier.|

The following macros direct messages to another message map. This process is called "chaining."

|Macro|Description|
|-----------|-----------------|
|[CHAIN_MSG_MAP](#chain_msg_map)|Chains to the default message map in the base class.|
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Chains to the default message map in a data member of the class.|
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Chains to an alternate message map in the base class.|
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Chains to an alternate message map in a data member of the class.|
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Chains to the default message map in another class at run time.|

The following macros direct "reflected" messages from the parent window. For example, a control normally sends notification messages to its parent window for processing, but the parent window can reflect the message back to the control.

|Macro|Description|
|-----------|-----------------|
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the notification code and the identifier of the menu item, control, or accelerator.|
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the identifier of the menu item, control, or accelerator.|
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the notification code.|
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Maps a reflected WM_COMMAND message to a handler function, based on a contiguous range of control identifiers.|
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Maps a reflected WM_COMMAND message to a handler function, based on the notification code and a contiguous range of control identifiers.|
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the notification code and the control identifier.|
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the control identifier.|
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the notification code.|
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on a contiguous range of control identifiers.|
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Maps a reflected WM_NOTIFY message to a handler function, based on the notification code and a contiguous range of control identifiers.|

### Example

[!code-cpp[NVC_ATL_Windowing#102](../../atl/codesnippet/cpp/message-map-macros-atl_3.h)]

When a `CMyExtWindow` object receives a WM_PAINT message, the message is directed to `CMyExtWindow::OnPaint` for the actual processing. If `OnPaint` indicates the message requires further processing, the message will then be directed to the default message map in `CMyBaseWindow`.

In addition to the default message map, you can define an alternate message map with [ALT_MSG_MAP](#alt_msg_map). Always begin a message map with BEGIN_MSG_MAP. You can then declare subsequent alternate message maps. The following example shows the default message map and one alternate message map, each containing one handler function:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

The next example shows two alternate message maps. The default message map is empty.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Note that there is always exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Requirements

**Header:** atlwin.h

## <a name="chain_msg_map_alt"></a> CHAIN_MSG_MAP_ALT

Defines an entry in a message map.

```
CHAIN_MSG_MAP_ALT(theChainClass, msgMapID)
```

### Parameters

*theChainClass*<br/>
[in] The name of the base class containing the message map.

*msgMapID*<br/>
[in] The message map identifier.

### Remarks

CHAIN_MSG_MAP_ALT directs messages to an alternate message map in a base class. You must have declared this alternate message map with [ALT_MSG_MAP(msgMapID)](#alt_msg_map). To direct messages to a base class's default message map (declared with [BEGIN_MSG_MAP](#begin_msg_map)), use CHAIN_MSG_MAP. For an example, see [CHAIN_MSG_MAP](#chain_msg_map).

> [!NOTE]
> Always begin a message map with BEGIN_MSG_MAP. You can then declare subsequent alternate message maps with ALT_MSG_MAP. The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Requirements

**Header:** atlwin.h

## <a name="chain_msg_map_alt_member"></a> CHAIN_MSG_MAP_ALT_MEMBER

Defines an entry in a message map.

```
CHAIN_MSG_MAP_ALT_MEMBER(theChainMember, msgMapID)
```

### Parameters

*theChainMember*<br/>
[in] The name of the data member containing the message map.

*msgMapID*<br/>
[in] The message map identifier.

### Remarks

CHAIN_MSG_MAP_ALT_MEMBER directs messages to an alternate message map in a data member. You must have declared this alternate message map with [ALT_MSG_MAP(msgMapID)](#alt_msg_map). To direct messages to a data member's default message map (declared with [BEGIN_MSG_MAP](#begin_msg_map)), use CHAIN_MSG_MAP_MEMBER. For an example, see [CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member).

> [!NOTE]
> Always begin a message map with BEGIN_MSG_MAP. You can then declare subsequent alternate message maps with ALT_MSG_MAP. The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Requirements

**Header:** atlwin.h

## <a name="chain_msg_map"></a> CHAIN_MSG_MAP

Defines an entry in a message map.

```
CHAIN_MSG_MAP(theChainClass)
```

### Parameters

*theChainClass*<br/>
[in] The name of the base class containing the message map.

### Remarks

CHAIN_MSG_MAP directs messages to a base class's default message map (declared with [BEGIN_MSG_MAP](#begin_msg_map)). To direct messages to a base class's alternate message map (declared with [ALT_MSG_MAP](#alt_msg_map)), use [CHAIN_MSG_MAP_ALT](#chain_msg_map_alt).

> [!NOTE]
> Always begin a message map with BEGIN_MSG_MAP. You can then declare subsequent alternate message maps with ALT_MSG_MAP. The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Example

[!code-cpp[NVC_ATL_Windowing#107](../../atl/codesnippet/cpp/message-map-macros-atl_4.h)]

This example illustrates the following:

- If a window procedure is using `CMyClass`'s default message map and `OnPaint` does not handle a message, the message is directed to `CMyBaseClass`'s default message map for processing.

- If a window procedure is using the first alternate message map in `CMyClass`, all messages are directed to `CMyBaseClass`'s default message map.

- If a window procedure is using `CMyClass`'s second alternate message map and `OnChar` does not handle a message, the message is directed to the specified alternate message map in `CMyBaseClass`. `CMyBaseClass` must have declared this message map with ALT_MSG_MAP(1).

### Requirements

**Header:** atlwin.h

## <a name="chain_msg_map_dynamic"></a> CHAIN_MSG_MAP_DYNAMIC

Defines an entry in a message map.

```
CHAIN_MSG_MAP_DYNAMIC(dynaChainID)
```

### Parameters

*dynaChainID*<br/>
[in] The unique identifier for an object's message map.

### Remarks

CHAIN_MSG_MAP_DYNAMIC directs messages, at run time, to the default message map in another object. The object and its message map are associated with *dynaChainID*, which you define through [CDynamicChain::SetChainEntry](cdynamicchain-class.md#setchainentry). You must derive your class from `CDynamicChain` in order to use CHAIN_MSG_MAP_DYNAMIC. For an example, see the [CDynamicChain](../../atl/reference/cdynamicchain-class.md) overview.

> [!NOTE]
> Always begin a message map with [BEGIN_MSG_MAP](#begin_msg_map). You can then declare subsequent alternate message maps with ALT_MSG_MAP. The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Requirements

**Header:** atlwin.h

## <a name="chain_msg_map_member"></a> CHAIN_MSG_MAP_MEMBER

Defines an entry in a message map.

```
CHAIN_MSG_MAP_MEMBER(theChainMember)
```

### Parameters

*theChainMember*<br/>
[in] The name of the data member containing the message map.

### Remarks

CHAIN_MSG_MAP_MEMBER directs messages to a data member's default message map (declared with [BEGIN_MSG_MAP](#begin_msg_map)). To direct messages to a data member's alternate message map (declared with [ALT_MSG_MAP](#alt_msg_map)), use [CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member).

> [!NOTE]
> Always begin a message map with BEGIN_MSG_MAP. You can then declare subsequent alternate message maps with ALT_MSG_MAP. The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Example

[!code-cpp[NVC_ATL_Windowing#108](../../atl/codesnippet/cpp/message-map-macros-atl_5.h)]

This example illustrates the following:

- If a window procedure is using `CMyClass`'s default message map and `OnPaint` does not handle a message, the message is directed to `m_obj`'s default message map for processing.

- If a window procedure is using the first alternate message map in `CMyClass`, all messages are directed to `m_obj`'s default message map.

- If a window procedure is using `CMyClass`'s second alternate message map and `OnChar` does not handle a message, the message is directed to the specified alternate message map of `m_obj`. Class `CMyContainedClass` must have declared this message map with ALT_MSG_MAP(1).

### Requirements

**Header:** atlwin.h

## <a name="command_code_handler"></a> COMMAND_CODE_HANDLER

Similar to [COMMAND_HANDLER](#command_handler), but maps a [WM_COMMAND](/windows/win32/menurc/wm-command) message based only on the notification code.

```
COMMAND_CODE_HANDLER(code, func)
```

### Parameters

*code*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="command_handler"></a> COMMAND_HANDLER

Defines an entry in a message map.

```
COMMAND_HANDLER(id, code, func)
```

### Parameters

*id*<br/>
[in] The identifier of the menu item, control, or accelerator.

*code*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

COMMAND_HANDLER maps a [WM_COMMAND](/windows/win32/menurc/wm-command) message to the specified handler function, based on the notification code and the control identifier. For example:

[!code-cpp[NVC_ATL_Windowing#119](../../atl/codesnippet/cpp/message-map-macros-atl_6.h)]

Any function specified in a COMMAND_HANDLER macro must be defined as follows:

`LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);`

The message map sets `bHandled` to TRUE before `CommandHandler` is called. If `CommandHandler` does not fully handle the message, it should set `bHandled` to FALSE to indicate the message needs further processing.

> [!NOTE]
> Always begin a message map with [BEGIN_MSG_MAP](#begin_msg_map). You can then declare subsequent alternate message maps with [ALT_MSG_MAP](#alt_msg_map). The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

In addition to COMMAND_HANDLER, you can use [MESSAGE_HANDLER](#message_handler) to map a WM_COMMAND message without regard to an identifier or code. In this case, `MESSAGE_HANDLER(WM_COMMAND, OnHandlerFunction)` will direct all WM_COMMAND messages to `OnHandlerFunction`.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Requirements

**Header:** atlwin.h

## <a name="command_id_handler"></a> COMMAND_ID_HANDLER

Similar to [COMMAND_HANDLER](#command_handler), but maps a [WM_COMMAND](/windows/win32/menurc/wm-command) message based only on the identifier of the menu item, control, or accelerator.

```
COMMAND_ID_HANDLER(id, func)
```

### Parameters

*id*<br/>
[in] The identifier of the menu item, control, or accelerator sending the message.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="command_range_code_handler"></a> COMMAND_RANGE_CODE_HANDLER

Similar to [COMMAND_RANGE_HANDLER](#command_range_handler), but maps [WM_COMMAND](/windows/win32/menurc/wm-command) messages with a specific notification code from a range of controls to a single handler function.

```
COMMAND_RANGE_CODE_HANDLER(idFirst, idLast, code, func)
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*code*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

This range is based on the identifier of the menu item, control, or accelerator sending the message.

### Requirements

**Header:** atlwin.h

## <a name="command_range_handler"></a> COMMAND_RANGE_HANDLER

Similar to [COMMAND_HANDLER](#command_handler), but maps [WM_COMMAND](/windows/win32/menurc/wm-command) messages from a range of controls to a single handler function.

```
COMMAND_RANGE_HANDLER( idFirst, idLast, func)
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

This range is based on the identifier of the menu item, control, or accelerator sending the message.

### Requirements

**Header:** atlwin.h

## <a name="declare_empty_msg_map"></a> DECLARE_EMPTY_MSG_MAP

Declares an empty message map.

```
DECLARE_EMPTY_MSG_MAP()
```

### Remarks

DECLARE_EMPTY_MSG_MAP is a convenience macro that calls the macros [BEGIN_MSG_MAP](#begin_msg_map) and [END_MSG_MAP](#end_msg_map) to create an empty message map:

[!code-cpp[NVC_ATL_Windowing#122](../../atl/codesnippet/cpp/message-map-macros-atl_7.h)]

## <a name="default_reflection_handler"></a> DEFAULT_REFLECTION_HANDLER

Provides a default handler for the child window (control) that will receive reflected messages; the handler will properly pass unhandled messages to `DefWindowProc`.

```
DEFAULT_REFLECTION_HANDLER()
```

### Requirements

**Header:** atlwin.h

## <a name="end_msg_map"></a> END_MSG_MAP

Marks the end of a message map.

```
END_MSG_MAP()
```

### Remarks

Always use the [BEGIN_MSG_MAP](#begin_msg_map) macro to mark the beginning of a message map. Use [ALT_MSG_MAP](#alt_msg_map) to declare subsequent alternate message maps.

Note that there is always exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Example

The following example shows the default message map and one alternate message map, each containing one handler function:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

The next example shows two alternate message maps. The default message map is empty.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

### Requirements

**Header:** atlwin.h

## <a name="forward_notifications"></a> FORWARD_NOTIFICATIONS

Forwards notification messages to the parent window.

```
FORWARD_NOTIFICATIONS()
```

### Remarks

Specify this macro as part of your message map.

### Requirements

**Header:** atlwin.h

## <a name="message_handler"></a> MESSAGE_HANDLER

Defines an entry in a message map.

```
MESSAGE_HANDLER( msg, func )
```

### Parameters

*msg*<br/>
[in] The Windows message.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

MESSAGE_HANDLER maps a Windows message to the specified handler function.

Any function specified in a MESSAGE_HANDLER macro must be defined as follows:

`LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);`

The message map sets `bHandled` to TRUE before `MessageHandler` is called. If `MessageHandler` does not fully handle the message, it should set `bHandled` to FALSE to indicate the message needs further processing.

> [!NOTE]
> Always begin a message map with [BEGIN_MSG_MAP](#begin_msg_map). You can then declare subsequent alternate message maps with [ALT_MSG_MAP](#alt_msg_map). The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

In addition to MESSAGE_HANDLER, you can use [COMMAND_HANDLER](#command_handler) and [NOTIFY_HANDLER](#notify_handler) to map [WM_COMMAND](/windows/win32/menurc/wm-command) and [WM_NOTIFY](/windows/win32/controls/wm-notify) messages, respectively.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Example

[!code-cpp[NVC_ATL_Windowing#129](../../atl/codesnippet/cpp/message-map-macros-atl_8.h)]

### Requirements

**Header:** atlwin.h

## <a name="message_range_handler"></a> MESSAGE_RANGE_HANDLER

Similar to [MESSAGE_HANDLER](#message_handler), but maps a range of Windows messages to a single handler function.

```
MESSAGE_RANGE_HANDLER( msgFirst, msgLast, func )
```

### Parameters

*msgFirst*<br/>
[in] Marks the beginning of a contiguous range of messages.

*msgLast*<br/>
[in] Marks the end of a contiguous range of messages.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="notify_code_handler"></a> NOTIFY_CODE_HANDLER

Similar to [NOTIFY_HANDLER](#notify_handler), but maps a [WM_NOTIFY](/windows/win32/controls/wm-notify) message based only on the notification code.

```
NOTIFY_CODE_HANDLER(cd, func)
```

### Parameters

*cd*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="notify_handler"></a> NOTIFY_HANDLER

Defines an entry in a message map.

```
NOTIFY_HANDLER( id, cd, func )
```

### Parameters

*id*<br/>
[in] The identifier of the control sending the message.

*cd*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

NOTIFY_HANDLER maps a [WM_NOTIFY](/windows/win32/controls/wm-notify) message to the specified handler function, based on the notification code and the control identifier.

Any function specified in a NOTIFY_HANDLER macro must be defined as follows:

`LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);`

The message map sets `bHandled` to TRUE before `NotifyHandler` is called. If `NotifyHandler` does not fully handle the message, it should set `bHandled` to FALSE to indicate the message needs further processing.

> [!NOTE]
> Always begin a message map with [BEGIN_MSG_MAP](#begin_msg_map). You can then declare subsequent alternate message maps with [ALT_MSG_MAP](#alt_msg_map). The [END_MSG_MAP](#end_msg_map) macro marks the end of the message map. Every message map must have exactly one instance of BEGIN_MSG_MAP and END_MSG_MAP.

In addition to NOTIFY_HANDLER, you can use [MESSAGE_HANDLER](#message_handler) to map a WM_NOTIFY message without regard to an identifier or code. In this case, `MESSAGE_HANDLER(WM_NOTIFY, OnHandlerFunction)` will direct all WM_NOTIFY messages to `OnHandlerFunction`.

For more information about using message maps in ATL, see [Message Maps](../../atl/message-maps-atl.md).

### Example

[!code-cpp[NVC_ATL_Windowing#130](../../atl/codesnippet/cpp/message-map-macros-atl_9.h)]

### Requirements

**Header:** atlwin.h

## <a name="notify_id_handler"></a> NOTIFY_ID_HANDLER

Similar to [NOTIFY_HANDLER](#notify_handler), but maps a [WM_NOTIFY](/windows/win32/controls/wm-notify) message based only on the control identifier.

```
NOTIFY_ID_HANDLER( id, func )
```

### Parameters

*id*<br/>
[in] The identifier of the control sending the message.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="notify_range_code_handler"></a> NOTIFY_RANGE_CODE_HANDLER

Similar to [NOTIFY_RANGE_HANDLER](#notify_range_handler), but maps [WM_NOTIFY](/windows/win32/controls/wm-notify) messages with a specific notification code from a range of controls to a single handler function.

```
NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*cd*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

This range is based on the identifier of the control sending the message.

### Requirements

**Header:** atlwin.h

## <a name="notify_range_handler"></a> NOTIFY_RANGE_HANDLER

Similar to [NOTIFY_HANDLER](#notify_handler), but maps [WM_NOTIFY](/windows/win32/controls/wm-notify) messages from a range of controls to a single handler function.

```
NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*func*<br/>
[in] The name of the message-handler function.

### Remarks

This range is based on the identifier of the control sending the message.

### Requirements

**Header:** atlwin.h

## <a name="reflect_notifications"></a> REFLECT_NOTIFICATIONS

Reflects notification messages back to the child window (control) that sent them.

```
REFLECT_NOTIFICATIONS()
```

### Remarks

Specify this macro as part of the parent window's message map.

### Requirements

**Header:** atlwin.h

## <a name="reflected_command_code_handler"></a> REFLECTED_COMMAND_CODE_HANDLER

Similar to [COMMAND_CODE_HANDLER](#command_code_handler), but maps commands reflected from the parent window.

```
REFLECTED_COMMAND_CODE_HANDLER( code, func )
```

### Parameters

*code*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_command_handler"></a> REFLECTED_COMMAND_HANDLER

Similar to [COMMAND_HANDLER](#command_handler), but maps commands reflected from the parent window.

```
REFLECTED_COMMAND_HANDLER( id, code, func )
```

### Parameters

*id*<br/>
[in] The identifier of the menu item, control, or accelerator.

*code*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_command_id_handler"></a> REFLECTED_COMMAND_ID_HANDLER

Similar to [COMMAND_ID_HANDLER](#command_id_handler), but maps commands reflected from the parent window.

```
REFLECTED_COMMAND_ID_HANDLER( id, func )
```

### Parameters

*id*<br/>
[in] The identifier of the menu item, control, or accelerator.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_command_range_code_handler"></a> REFLECTED_COMMAND_RANGE_CODE_HANDLER

Similar to [COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler), but maps commands reflected from the parent window.

```
REFLECTED_COMMAND_RANGE_CODE_HANDLER( idFirst, idLast, code, func )
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*code*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_command_range_handler"></a> REFLECTED_COMMAND_RANGE_HANDLER

Similar to [COMMAND_RANGE_HANDLER](#command_range_handler), but maps commands reflected from the parent window.

```
REFLECTED_COMMAND_RANGE_HANDLER( idFirst, idLast, func )
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_notify_code_handler"></a> REFLECTED_NOTIFY_CODE_HANDLER

Similar to [NOTIFY_CODE_HANDLER](#notify_code_handler), but maps notifications reflected from the parent window.

```
REFLECTED_NOTIFY_CODE_HANDLER_EX( cd, func )
```

### Parameters

*cd*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_notify_handler"></a> REFLECTED_NOTIFY_HANDLER

Similar to [NOTIFY_HANDLER](#notify_handler), but maps notifications reflected from the parent window.

```
REFLECTED_NOTIFY_HANDLER( id, cd, func )
```

### Parameters

*id*<br/>
[in] The identifier of the menu item, control, or accelerator.

*cd*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_notify_id_handler"></a> REFLECTED_NOTIFY_ID_HANDLER

Similar to [NOTIFY_ID_HANDLER](#notify_id_handler), but maps notifications reflected from the parent window.

```
REFLECTED_NOTIFY_ID_HANDLER( id, func )
```

### Parameters

*id*<br/>
[in] The identifier of the menu item, control, or accelerator.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_notify_range_code_handler"></a> REFLECTED_NOTIFY_RANGE_CODE_HANDLER

Similar to [NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler), but maps notifications reflected from the parent window.

```
REFLECTED_NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*cd*<br/>
[in] The notification code.

*func*<br/>
[in] The name of the message-handler function.

### Requirements

**Header:** atlwin.h

## <a name="reflected_notify_range_handler"></a> REFLECTED_NOTIFY_RANGE_HANDLER

Similar to [NOTIFY_RANGE_HANDLER](#notify_range_handler), but maps notifications reflected from the parent window.

```
REFLECTED_NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```

### Parameters

*idFirst*<br/>
[in] Marks the beginning of a contiguous range of control identifiers.

*idLast*<br/>
[in] Marks the end of a contiguous range of control identifiers.

*func*<br/>
[in] The name of the message-handler function.

## See also

[Macros](../../atl/reference/atl-macros.md)
