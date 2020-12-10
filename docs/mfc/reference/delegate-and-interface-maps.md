---
description: "Learn more about: Delegate and interface map macros"
title: "Delegate and Interface Map Macros (MFC)"
ms.date: "03/30/2017"
helpviewer_keywords: ["delegate map macros [MFC]", "event map macros [MFC]", "interface map macros [MFC]"]
ms.assetid: 3840e642-ff7d-4bdc-998b-c7d8fc50890e
---
# Delegate and interface map macros

MFC supports these macros for delegate and interface maps:

|Name|Description|
|-|-|
|[BEGIN_DELEGATE_MAP](#begin_delegate_map)|Begins a delegate map.|
|[BEGIN_INTERFACE_MAP](#begin_interface_map)|Begins the definition of the interfaced map.|
|[CommandHandler Delegate](#commandhandler)|Registers callback methods with a command source.  |
|[END_DELEGATE_MAP](#end_delegate_map)|Ends a delegate map.|
|[END_INTERFACE_MAP](#end_interface_map)|Ends the interface map in the implementation file. |
|[EVENT_DELEGATE_ENTRY](#event_delegate_entry)|Creates an entry in the delegate map.|
|[INTERFACE_PART](#interface_part)|Used between the BEGIN_INTERFACE_MAP macro and the END_INTERFACE_MAP macro for each interface your object will support.|
|[MAKE_DELEGATE](#make_delegate)|Attaches an event handler to a managed control.|

## <a name="begin_delegate_map"></a> BEGIN_DELEGATE_MAP

Begins a delegate map.

### Syntax

```
BEGIN_DELEGATE_MAP(  CLASS );
```

### Parameters

*CLASS*<br/>
The class in which the managed control is hosted.

### Remarks

This macro marks the beginning of a list of delegate entries, which compose a delegate map. For an example of how this macro is used, see [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### Requirements

**Header:** msclr\event.h

## <a name="begin_interface_map"></a> BEGIN_INTERFACE_MAP

Begins the definition of the interfaced map when used in the implementation file.

### Syntax

```
BEGIN_INTERFACE_MAP( theClass, baseClass )
```

### Parameters

*theClass*<br/>
The class in which the interface map is to be defined

*baseClass*<br/>
The class from which *theClass* derives from.

### Remarks

For each interface that is implemented, there is one or more INTERFACE_PART macro invocations. For each aggregate that the class uses, there is one INTERFACE_AGGREGATE macro invocation.

For more information on interface maps, see [Technical Note 38](../tn038-mfc-ole-iunknown-implementation.md).

### Requirements

**Header:** afxwin.h

## <a name="commandhandler"></a> CommandHandler Delegate

Registers callback methods with a command source.

### Syntax

```
delegate void CommandHandler(  UINT^ cmdID  );
```

### Parameters

*cmdID*<br/>
The command ID.

### Remarks

This delegate registers callback methods with a command source. When you add a delegate to the command source object, the callback method becomes a handler for commands coming from the specified source.

For more information, see [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).

For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### Requirements

**Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)

## <a name="commanduihandler"></a> CommandUIHandler

Registers callback methods with a user interface update command message.

### Syntax

```
delegate void CommandUIHandler(  unsigned int cmdID, ICommandUI^ cmdUI);
```

### Parameters

*cmdID*<br/>
The command ID.

*cmdUI*<br/>
The command message ID.

### Remarks

This delegate registers callback methods with a user interface update command message. `CommandUIHandler` is similar to [CommandHandler](#commandhandler) except that this delegate is used with user interface object update commands. User interface update commands should be mapped one-to-one with message handler methods.

For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### Requirements

**Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)

## <a name="end_delegate_map"></a> END_DELEGATE_MAP

Ends a delegate map.

### Syntax

```
END_DELEGATE_MAP();
```

### Remarks

This macro marks the end of a list of delegate entries, which compose a delegate map. For an example of how this macro is used, see [EVENT_DELEGATE_ENTRY](#event_delegate_entry).

### Requirements

**Header:** msclr\event.h

## <a name="end_interface_map"></a> END_INTERFACE_MAP

Ends the interface map in the implementation file.

### Syntax

```
END_INTERFACE_MAP( )
```

### Remarks

For more information about interface maps, see [Technical Note 38](../tn038-mfc-ole-iunknown-implementation.md).

### Requirements

**Header:** afxwin.h

## <a name="event_delegate_entry"></a> EVENT_DELEGATE_ENTRY

Creates an entry in the delegate map.

### Syntax

```
EVENT_DELEGATE_ENTRY(MEMBER, ARG0, ARG1);
```

### Parameters

*MEMBER*<br/>
The event handler method to be attached to the control.

*ARG0*<br/>
The first argument of the managed event handler method, such as `Object^`.

*ARG1*<br/>
The second argument of the managed event handler method, such as `EventArgs^`.

### Remarks

Each entry in the delegate map corresponds to a managed event handler delegate created by [MAKE_DELEGATE](#make_delegate).

### Example

The following code example shows how to use EVENT_DELEGATE_ENTRY to create an entry in the delegate map for the `OnClick` event handler; also see the code example in MAKE_DELEGATE. For more information, see [How to: Sink Windows Forms Events from Native C++ Classes](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

```cpp
BEGIN_DELEGATE_MAP(CMyView)
   EVENT_DELEGATE_ENTRY(OnClick, System::Object^, System::EventArgs^)
END_DELEGATE_MAP()
```

### Requirements

**Header:** msclr\event.h

## <a name="interface_part"></a> INTERFACE_PART

Used between the BEGIN_INTERFACE_MAP macro and the END_INTERFACE_MAP macro for each interface your object will support.

### Syntax

```
INTERFACE_PART( theClass, iid, localClass)
```

### Parameters

*theClass*<br/>
The name of the class that contains the interface map.
*iid*<br/>
The IID that is to be mapped to the embedded class.
*localClass*<br/>
The name of the local class.

### Remarks

It allows you to map an IID to a member of the class indicated by *theClass* and *localClass*.

For more information on interface maps, see [Technical Note 38](../tn038-mfc-ole-iunknown-implementation.md).

### Requirements

**Header:** afxwin.h

## <a name="make_delegate"></a> MAKE_DELEGATE

Attaches an event handler to a managed control.

### Syntax

```
MAKE_DELEGATE( DELEGATE,  MEMBER) ;
```

### Parameters

*DELEGATE*<br/>
The type of the managed event handler delegate, such as [EventHandler](/dotnet/api/system.eventhandler).

*MEMBER*<br/>
The name of the event handler method to be attached to the control.

### Remarks

This macro creates a managed event handler delegate of type *DELEGATE* and of the name *MEMBER*. The managed event handler delegate allows a native class to handle managed events.

### Example

The following code example shows how to call `MAKE_DELEGATE` to attach an `OnClick` event handler to an MFC control `MyControl`. For a broader explanation of how this macro works in an MFC application, see [How to: Sink Windows Forms Events from Native C++ Classes](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md).

```cpp
// CMyView derives from CWinFormsView.
void CMyView::OnInitialUpdate()
{
   CWinFormsView::OnInitialUpdate();

   GetControl()->Click += MAKE_DELEGATE(System::EventHandler, OnClick);
}
```

### Requirements

**Header:** msclr\event.h

## See also

[How to: Sink Windows Forms Events from Native C++ Classes](../../dotnet/how-to-sink-windows-forms-events-from-native-cpp-classes.md)<br/>
[How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Macros and Globals](mfc-macros-and-globals.md)<br/>
