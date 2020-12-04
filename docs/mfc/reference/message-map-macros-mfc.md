---
description: "Learn more about: Message Map Macros (MFC)"
title: "Message Map Macros (MFC)"
ms.date: "03/27/2019"
f1_keywords: ["AFXWIN/DECLARE_MESSAGE_MAP", "AFXWIN/BEGIN_MESSAGE_MAP", "AFXWIN/BEGIN_TEMPLATE_MESSAGE_MAP", "AFXWIN/END_MESSAGE_MAP", "AFXWIN/ON_COMMAND", "AFXWIN/ON_COMMAND_EX", "AFXWIN/ON_CONTROL", "AFXWIN/ON_MESSAGE", "AFXWIN/ON_OLECMD", "AFXWIN/ON_REGISTERED_MESSAGE", "AFXWIN/ON_REGISTERED_THREAD_MESSAGE", "AFXWIN/ON_THREAD_MESSAGE", "AFXWIN/ON_UPDATE_COMMAND_UI", "AFXWIN/ON_COMMAND_RANGE", "AFXWIN/ON_UPDATE_COMMAND_UI_RANGE", "AFXWIN/ON_CONTROL_RANGE"]
helpviewer_keywords: ["message map macros", "Windows messages [MFC], declaration", "demarcating Windows messages", "message maps [MFC], macros", "message maps [MFC], declaration and demarcation", "message mapping macros", "ranges, message map", "message map ranges"]
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
---
# Message Map Macros (MFC)

To support message maps, MFC supplies the following macros:

### Message-Map Declaration and Demarcation Macros

|Name|Description|
|-|-|
|[DECLARE_MESSAGE_MAP](#declare_message_map)|Declares that a message map will be used in a class to map messages to functions (must be used in the class declaration).|
|[BEGIN_MESSAGE_MAP](#begin_message_map)|Begins the definition of a message map (must be used in the class implementation).|
|[BEGIN_TEMPLATE_MESSAGE_MAP](#begin_template_message_map)|Begins the definition of a message map on a class type containing a single template argument. |
|[END_MESSAGE_MAP](#end_message_map)|Ends the definition of a message map (must be used in the class implementation).|

### Message-Mapping Macros

|Name|Description|
|-|-|
|[ON_COMMAND](#on_command)|Indicates which function will handle a specified command message.|
|[ON_COMMAND_EX](#on_command_ex)|Indicates which function will handle a specified command message.|
|[ON_CONTROL](#on_control)|Indicates which function will handle a specified control-notification message.|
|[ON_MESSAGE](#on_message)|Indicates which function will handle a user-defined message.|
|[ON_OLECMD](#on_olecmd)|Indicates which function will handle a menu command from a DocObject or its container.|
|[ON_REGISTERED_MESSAGE](#on_registered_message)|Indicates which function will handle a registered user-defined message.|
|[ON_REGISTERED_THREAD_MESSAGE](#on_registered_thread_message)|Indicates which function will handle a registered user-defined message when you have a `CWinThread` class.|
|[ON_THREAD_MESSAGE](#on_thread_message)|Indicates which function will handle a user-defined message when you have a `CWinThread` class.|
|[ON_UPDATE_COMMAND_UI](#on_update_command_ui)|Indicates which function will handle a specified user-interface update command message.|

### Message-Map Range Macros

|Name|Description|
|-|-|
|[ON_COMMAND_RANGE](#on_command_range)|Indicates which function will handle the range of command IDs specified in the first two parameters to the macro.|
|[ON_UPDATE_COMMAND_UI_RANGE](#on_update_command_ui_range)|Indicates which update handler will handle the range of command IDs specified in the first two parameters to the macro.|
|[ON_CONTROL_RANGE](#on_control_range)|Indicates which function will handle notifications from the range of control IDs specified in the second and third parameters to the macro. The first parameter is a control-notification message, such as BN_CLICKED.|

For more information on message maps, the message-map declaration and demarcation macros, and the message-mapping macros, see [Message Maps](../../mfc/reference/message-maps-mfc.md) and [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md). For more information about message-map ranges, see [Handlers for Message-Map Ranges](../../mfc/handlers-for-message-map-ranges.md).

## <a name="begin_message_map"></a> BEGIN_MESSAGE_MAP

Begins the definition of your message map.

### Syntax

```cpp
BEGIN_MESSAGE_MAP( theClass, baseClass )
```

### Parameters

*theClass*<br/>
Specifies the name of the class whose message map this is.

*baseClass*<br/>
Specifies the name of the base class of *theClass*.

### Remarks

In the implementation (.cpp) file that defines the member functions for your class, start the message map with the BEGIN_MESSAGE_MAP macro, then add macro entries for each of your message-handler functions, and complete the message map with the END_MESSAGE_MAP macro.

For more information about message maps, see [Message Maps](message-maps-mfc.md)

### Example

```cpp
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()
```

### Requirements

**Header:** afxwin.h

## <a name="begin_template_message_map"></a> BEGIN_TEMPLATE_MESSAGE_MAP

Begins the definition of a message map on a class type containing a single template argument.

### Syntax

```cpp
BEGIN_TEMPLATE_MESSAGE_MAP( theClass, type_name, baseClass )
```

### Parameters

*theClass*<br/>
Specifies the name of the class whose message map this is.

*type_name*<br/>
The name of the template parameter specified for the class.

*baseClass*<br/>
Specifies the name of the base class of *theClass*.

### Remarks

This macro is similar to the [BEGIN_MESSAGE_MAP](message-map-macros-mfc.md#begin_message_map) macro; however, this macro is intended for classes containing a single template argument.

In the method implementation section of your class, start the message map with the BEGIN_TEMPLATE_MESSAGE_MAP macro; then add macro entries for each of your message-handler methods as you would for a standard message map. As with the BEGIN_MESSAGE_MAP macro, complete the template message map with the [END_MESSAGE_MAP](message-map-macros-mfc.md#end_message_map) macro.

For more information on implementing message maps for template classes, refer to [How to: Create a Message Map for a Template Class](../how-to-create-a-message-map-for-a-template-class.md).

### Requirements

**Header:** afxwin.h

## <a name="declare_message_map"></a> DECLARE_MESSAGE_MAP

Declares that the class defines a message map. Each `CCmdTarget`-derived class in your program must provide a message map to handle messages.

### Syntax

```cpp
DECLARE_MESSAGE_MAP( )
```

### Remarks

Use the DECLARE_MESSAGE_MAP macro at the end of your class declaration. Then, in the .cpp file that defines the member functions for the class, use the BEGIN_MESSAGE_MAP macro, macro entries for each of your message-handler functions, and the END_MESSAGE_MAP macro.

> [!NOTE]
> If you declare any member after DECLARE_MESSAGE_MAP, you must specify a new access type (**`public`**, **`private`**, or **`protected`**) for them.

For more information on message maps and the DECLARE_MESSAGE_MAP macro, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

### Example

```cpp
class CMainFrame : public CMDIFrameWnd
{
   DECLARE_MESSAGE_MAP()

   // Remainder of class declaration omitted.
```

### Requirements

**Header:** afxwin.h

## <a name="end_message_map"></a> END_MESSAGE_MAP

Ends the definition of your message map.

### Syntax

```cpp
END_MESSAGE_MAP( )
```

### Remarks

For more information on message maps and the END_MESSAGE_MAP macro, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

### Requirements

**Header:** afxwin.h

## <a name="on_command"></a> ON_COMMAND

This macro maps a command message to a member function.

### Syntax

```cpp
ON_COMMAND( commandId, memberFxn )
```

### Parameters

*commandId*<br/>
The command ID.

*memberFxn*<br/>
The name of the message-handler function to which the command is mapped.

### Remarks

It indicates which function will handle a command message from a command user-interface object such as a menu item or toolbar button.

When a command-target object receives a Windows WM_COMMAND message with the specified ID, ON_COMMAND will call the member function `memberFxn` to handle the message.

Use ON_COMMAND to map a single command to a member function. Use [ON_COMMAND_RANGE](#on_command_range) to map a range of command IDs to one member function. Only one message-map entry can match a given command ID. That is, you can't map a command to more than one handler. For more information and examples, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

### Example

```cpp
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, &CMFCListViewDoc::OnMycommand)
END_MESSAGE_MAP()
```

### Requirements

**Header:** afxmsg_.h

## <a name="on_command_ex"></a> ON_COMMAND_EX

Extended command-handler member function.

### Syntax

```cpp
ON_COMMAND_EX(commandId, memberFxn);
```

### Parameters

*commandId*<br/>
The command ID.

*memberFxn*<br/>
The name of the message-handler function to which the command is mapped.

### Remarks

An extended form of command message handlers is available for advanced uses. The ON_COMMAND_EX macro is used for such message handlers, and it provides a superset of the [ON_COMMAND](message-map-macros-mfc.md#on_command) functionality. Extended command-handler member functions take a single parameter, a UINT containing the command ID, and return a BOOL. The return value should be TRUE to indicate that the command has been handled; otherwise routing will continue to other command target objects.

For more information, see Technical Note [TN006: Message Maps]tm006-message-maps.md).

### Requirements

Header file: afxmsg_.h

## <a name="on_control"></a> ON_CONTROL

Indicates which function will handle a custom-control notification message.

### Syntax

```cpp
ON_CONTROL( wNotifyCode, commandId, memberFxn )
```

### Parameters

*wNotifyCode*<br/>
The notification code of the control.

*commandId*<br/>
The command ID.

*memberFxn*<br/>
The name of the message-handler function to which the command is mapped.

### Remarks

Control notification messages are those sent from a control to its parent window.

There should be exactly one ON_CONTROL macro statement in your message map for every control notification message that must be mapped to a message-handler function.

For more information and examples, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

### Requirements

**Header:** afxmsg_.h

## <a name="on_message"></a> ON_MESSAGE

Indicates which function will handle a user-defined message.

### Syntax

```cpp
ON_MESSAGE( message, memberFxn )
```

### Parameters

*message*<br/>
The message ID.

*memberFxn*<br/>
The name of the message-handler function to which the message is mapped.

The type of the function must be `afx_msg LRESULT (CWnd::*)(WPARAM, LPARAM)`.

### Remarks

User-defined messages are any messages that are not standard Windows WM_MESSAGE messages. When selecting a message ID, you must use values within the range of WM_USER (0x0400) to 0x7FFF or WM_APP (0x8000) to 0xBFFF. For more information regarding message IDs, see [WM_APP](/windows/win32/winmsg/wm-app).

There should be exactly one ON_MESSAGE macro statement in your message map for every user-defined message that must be mapped to a message-handler function.

> [!NOTE]
> In addition to user-defined messages, ON_MESSAGE handles less common Windows messages. For more information, see [Message Maps](../../mfc/tn006-message-maps.md).

For more information and examples, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md) and [User-Defined Handlers](user-defined-handlers.md)

### Example

```cpp
#define WM_MYMESSAGE (WM_USER + 100)

BEGIN_MESSAGE_MAP(CMyWnd2, CWnd)
   ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()

// inside the class declaration
afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

LRESULT CMyWnd2::OnMyMessage(WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(wParam);
   UNREFERENCED_PARAMETER(lParam);

   // Handle message here.

   return 0;
}
```

### Requirements

**Header:** afxmsg_.h

## <a name="on_olecmd"></a> ON_OLECMD

Routes commands through the command dispatch interface `IOleCommandTarget`.

### Syntax

```cpp
ON_OLECMD( pguid, olecmdid, commandId )
```

### Parameters

*pguid*<br/>
Identifier of the command group to which the command belongs. Use NULL for the standard group.

*olecmdid*<br/>
The identifier of the OLE command.

*commandId*<br/>
The menu ID, toolbar ID, button ID, or other ID of the resource or object issuing the command.

### Remarks

`IOleCommandTarget` allows a container to receive commands that originate in a DocObject's user interface, and allows the container to send the same commands (such as New, Open, SaveAs, and Print on the File menu; and Copy, Paste, Undo, and so forth on the Edit menu) to a DocObject.

`IOleCommandTarget` is simpler than OLE Automation's `IDispatch`. `IOleCommandTarget` relies entirely on a standard set of commands that rarely have arguments, and no type information is involved (type safety is diminished for command arguments as well). If you do need to dispatch commands with arguments, use [COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd).

The `IOleCommandTarget` standard menu commands have been implemented by MFC in the following macros:

**ON_OLECMD_CLEARSELECTION( )**

Dispatches the Edit Clear command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_CLEARSELECTION, ID_EDIT_CLEAR)`

**ON_OLECMD_COPY( )**

Dispatches the Edit Copy command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_COPY, ID_EDIT_COPY)`

**ON_OLECMD_CUT( )**

Dispatches the Edit Cut command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_CUT, ID_EDIT_CUT)`

**ON_OLECMD_NEW( )**

Dispatches the File New command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_NEW, ID_FILE_NEW)`

**ON_OLECMD_OPEN( )**

Dispatches the File Open command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_OPEN, ID_FILE_OPEN)`

**ON_OLECMD_PAGESETUP( )**

Dispatches the File Page Setup command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_PAGESETUP, ID_FILE_PAGE_SETUP)`

**ON_OLECMD_PASTE( )**

Dispatches the Edit Paste command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_PASTE, ID_EDIT_PASTE)`

**ON_OLECMD_PASTESPECIAL( )**

Dispatches the Edit Paste Special command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_PASTESPECIAL, ID_EDIT_PASTE_SPECIAL)`

**ON_OLECMD_PRINT( )**

Dispatches the File Print command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)`

**ON_OLECMD_PRINTPREVIEW( )**

Dispatches the File Print Preview command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_PRINTPREVIEW, ID_FILE_PRINT_PREVIEW)`

**ON_OLECMD_REDO( )**

Dispatches the Edit Redo command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_REDO, ID_EDIT_REDO)`

**ON_OLECMD_SAVE( )**

Dispatches the File Save command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_SAVE, ID_FILE_SAVE)`

**ON_OLECMD_SAVE_AS( )**

Dispatches the File Save As command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_SAVEAS, ID_FILE_SAVE_AS)`

**ON_OLECMD_SAVE_COPY_AS( )**

Dispatches the File Save Copy As command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_SAVECOPYAS, ID_FILE_SAVE_COPY_AS)`

**ON_OLECMD_SELECTALL( )**

Dispatches the Edit Select All command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_SELECTALL, ID_EDIT_SELECT_ALL)`

**ON_OLECMD_UNDO( )**

Dispatches the Edit Undo command. Implemented as:

`ON_OLECMD(NULL, OLECMDID_UNDO, ID_EDIT_UNDO)`

### Requirements

**Header:** afxdocob.h

## <a name="on_registered_message"></a> ON_REGISTERED_MESSAGE

The Windows `RegisterWindowMessage` function is used to define a new window message that is guaranteed to be unique throughout the system.

### Syntax

```cpp
ON_REGISTERED_MESSAGE( nMessageVariable, memberFxn )
```

### Parameters

*nMessageVariable*<br/>
The registered window-message ID variable.

*memberFxn*<br/>
The name of the message-handler function to which the message is mapped.

### Remarks

This macro indicates which function will handle the registered message.

For more information and examples, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

### Example

```cpp
static UINT NEAR WM_FIND = RegisterWindowMessage(_T("COMMDLG_FIND"));

BEGIN_MESSAGE_MAP(CMyWnd3, CWnd)
   ON_REGISTERED_MESSAGE(WM_FIND, OnFind)
END_MESSAGE_MAP()
```

### Requirements

**Header:** afxmsg_.h

## <a name="on_registered_thread_message"></a> ON_REGISTERED_THREAD_MESSAGE

Indicates which function will handle the message registered by the Windows RegisterWindowMessage function.

### Syntax

```cpp
ON_REGISTERED_THREAD_MESSAGE(nMessageVariable, memberFxn )
```

### Parameters

*nMessageVariable*<br/>
The registered window-message ID variable.

*memberFxn*<br/>
The name of the CWinThread-message-handler function to which the message is mapped.

### Remarks

RegisterWindowMessage is used to define a new window message that is guaranteed to be unique throughout the system. ON_REGISTERED_THREAD_MESSAGE must be used instead of ON_REGISTERED_MESSAGE when you have a CWinThread class.

### Requirements

**Header:** afxmsg_.h

## <a name="on_thread_message"></a> ON_THREAD_MESSAGE

Indicates which function will handle a user-defined message.

### Syntax

```cpp
ON_THREAD_MESSAGE( message, memberFxn )
```

### Parameters

*message*<br/>
The message ID.

*memberFxn*<br/>
The name of the `CWinThread`-message-handler function to which the message is mapped.

### Remarks

ON_THREAD_MESSAGE must be used instead of ON_MESSAGE when you have a `CWinThread` class. User-defined messages are any messages that are not standard Windows WM_MESSAGE messages. There should be exactly one ON_THREAD_MESSAGE macro statement in your message map for every user-defined message that must be mapped to a message-handler function.

### Requirements

**Header:** afxole.h

## <a name="on_update_command_ui"></a> ON_UPDATE_COMMAND_UI

This macro indicates which function will handle a user-interface update command message.

### Syntax

```cpp
ON_UPDATE_COMMAND_UI( messageId, memberFxn )
```

### Parameters

*messageId*<br/>
The message ID.

*memberFxn*<br/>
The name of the message-handler function to which the message is mapped.

### Remarks

There should be exactly one ON_UPDATE_COMMAND_UI macro statement in your message map for every user-interface update command that must be mapped to a message-handler function.

For more information and examples, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

### Requirements

**Header:** afxole.h

## <a name="on_command_range"></a> ON_COMMAND_RANGE

Use this macro to map a contiguous range of command IDs to a single message handler function.

### Syntax

```cpp
ON_COMMAND_RANGE( id1, id2, memberFxn )
```

### Parameters

*id1*<br/>
Command ID at the beginning of a contiguous range of command IDs.

*id2*<br/>
Command ID at the end of a contiguous range of command IDs.

*memberFxn*<br/>
The name of the message-handler function to which the commands are mapped.

### Remarks

The range of IDs starts with *id1* and ends with *id2*.

Use ON_COMMAND_RANGE to map a range of command IDs to one member function. Use [ON_COMMAND](#on_command) to map a single command to a member function. Only one message-map entry can match a given command ID. That is, you can't map a command to more than one handler. For more information on mapping message ranges, see [Handlers for Message-Map Ranges](../../mfc/handlers-for-message-map-ranges.md).

There is no automatic support for message map ranges, so you must place the macro yourself.

### Example

```cpp
// The code fragment below shows how to use ON_COMMAND_RANGE macro
// to map a contiguous range of command IDs to a single message
// handler function (i.e. OnRangeCmds() in the sample below). In
// addition, it also shows how to use CheckMenuRadioItem() to check a
// selected menu item and makes it a radio item.

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
   ON_COMMAND_RANGE(ID_COMMAND_RANGECMD1, ID_COMMAND_RANGECMD3, &CChildFrame::OnRangeCmds)
END_MESSAGE_MAP()

void CChildFrame::OnRangeCmds(UINT nID)
{
   CMenu* mmenu = AfxGetMainWnd()->GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(5);
   submenu->CheckMenuRadioItem(ID_COMMAND_RANGECMD1, ID_COMMAND_RANGECMD3,
      nID, MF_BYCOMMAND);
}
```

### Requirements

**Header:** afxmsg_.h

## <a name="on_update_command_ui_range"></a> ON_UPDATE_COMMAND_UI_RANGE

Maps a contiguous range of command IDs to a single update message handler function.

### Syntax

```cpp
ON_UPDATE_COMMAND_UI_RANGE( id1, id2, memberFxn )
```

### Parameters

*id1*<br/>
Command ID at the beginning of a contiguous range of command IDs.

*id2*<br/>
Command ID at the end of a contiguous range of command IDs.

*memberFxn*<br/>
The name of the update message-handler function to which the commands are mapped.

### Remarks

Update message handlers update the state of menu items and toolbar buttons associated with the command. The range of IDs starts with *id1* and ends with *id2*.

There is no automatic support for message map ranges, so you must place the macro yourself.

### Requirements

**Header:** afxmsg_.h

## <a name="on_control_range"></a> ON_CONTROL_RANGE

Use this macro to map a contiguous range of control IDs to a single message handler function for a specified Windows notification message, such as BN_CLICKED.

### Syntax

```cpp
ON_CONTROL_RANGE( wNotifyCode, id1, id2, memberFxn )
```

### Parameters

*wNotifyCode*<br/>
The notification code to which your handler is responding.

*id1*<br/>
Command ID at the beginning of a contiguous range of control IDs.

*id2*<br/>
Command ID at the end of a contiguous range of control IDs.

*memberFxn*<br/>
The name of the message-handler function to which the controls are mapped.

### Remarks

The range of IDs starts with *id1* and ends with *id2*. The handler is called for the specified notification coming from any of the mapped controls.

There is no automatic support for message map ranges, so you must place the macro yourself.

For more information on implementing handler functions for a range of control IDs, refer to [Handlers for Message-Map Ranges](../../mfc/handlers-for-message-map-ranges.md).

### Requirements

**Header:** afxmsg_.h

## See also

[ON_COMMAND](message-map-macros-mfc.md#on_command)<br/>
[TN006: Message Maps](../tn006-message-maps.md)<br/>
[COleCmdUI Class](colecmdui-class.md)<br/>
[COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd)<br/>
[RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew)<br/>
[User-Defined Handlers](user-defined-handlers.md)<br/>
[CCmdUI Class](ccmdui-class.md)
