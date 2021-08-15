---
description: "Learn more about: ICommandUI Interface"
title: "ICommandUI Interface"
ms.date: "09/07/2019"
f1_keywords: ["ICommandUI", "AFXWINFORMS/ICommandUI", "AFXWINFORMS/icommandui__Check", "AFXWINFORMS/ICommandUI::ContinueRouting", "AFXWINFORMS/ICommandUI::Enabled", "AFXWINFORMS/ICommandUI::ID", "AFXWINFORMS/ICommandUI::Index", "AFXWINFORMS/ICommandUI::Radio", "AFXWINFORMS/ICommandUI::Text"]
helpviewer_keywords: ["ICommandUI interface [MFC]"]
ms.assetid: 134afe8d-dcdf-47ca-857a-a166a6b665dd
---
# ICommandUI Interface

Manages user interface commands.

## Syntax

```
interface class ICommandUI
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[icommandui__Check](#check)|Sets the user interface item for this command to the appropriate check state.|
|[ICommandUI::ContinueRouting](#continuerouting)|Tells the command-routing mechanism to continue routing the current message down the chain of handlers.|
|[ICommandUI::Enabled](#enabled)|Enables or disables the user interface item for this command.|
|[ICommandUI::ID](#id)|Gets the ID of the user interface object represented by the `ICommandUI` object.|
|[ICommandUI::Index](#index)|Gets the index of the user interface object represented by the `ICommandUI` object.|
|[ICommandUI::Radio](#radio)|Sets the user interface item for this command to the appropriate check state.|
|[ICommandUI::Text](#text)|Sets the text of the user interface item for this command.|

### Remarks

This interface provides methods and properties that manage user interface commands. `ICommandUI` is similar to [CCmdUI Class](../../mfc/reference/ccmdui-class.md), except that `ICommandUI` is used for MFC applications that interoperate with .NET components.

`ICommandUI` is used within an ON_UPDATE_COMMAND_UI handler in an [ICommandTarget](../../mfc/reference/icommandtarget-interface.md)-derived class. When a user of an application activates (selects or clicks) a menu, each menu item is displayed as enabled or disabled. The target of each menu command provides this information by implementing an ON_UPDATE_COMMAND_UI handler. For each of the command user interface objects in your application, use the [Class Wizard](mfc-class-wizard.md) to create a message-map entry and function prototype for each handler.

For more information on how the `ICommandUI` interface is used in command routing, see [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).

For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

For more information on how user interface commands are managed in MFC, see [CCmdUI Class](../../mfc/reference/ccmdui-class.md).

## <a name="check"></a> ICommandUI::Check

Sets the user interface item for this command to the appropriate check state.

```
property UICheckState Check;
```

### Remarks

This property sets the user interface item for this command to the appropriate check state. Set Check to the following values:

- 0 Uncheck
- 1 Check
- 2 Set indeterminate

## <a name="continuerouting"></a> ICommandUI::ContinueRouting

Tells the command routing mechanism to continue routing the current message down the chain of handlers.

```cpp
void ContinueRouting();
```

### Remarks

This is an advanced member function that should be used in conjunction with an ON_COMMAND_EX handler that returns FALSE. For more information, see Technical Note TN006: Message Maps.

## <a name="enabled"></a> ICommandUI::Enabled

Enables or disables the user interface item for this command.

```
property bool Enabled;
```

### Remarks

This property enables or disables the user interface item for this command. Set Enabled to TRUE to enable the item, FALSE to disable it.

## <a name="id"></a> ICommandUI::ID

Gets the ID of the user interface object represented by the ICommandUI object.

```
property unsigned int ID;
```

### Remarks

This property gets the ID (a handle) of the menu item, toolbar button, or other user interface object represented by the ICommandUI object.

## <a name="index"></a> ICommandUI::Index

Gets the index of the user interface object represented by the ICommandUI object.

```
property unsigned int Index;
```

### Remarks

This property gets the index (a handle) of the menu item, toolbar button, or other user interface object represented by the ICommandUI object.

## <a name="radio"></a> ICommandUI::Radio

Sets the user interface item for this command to the appropriate check state.

```
property bool Radio;
```

### Remarks

This property sets the user interface item for this command to the appropriate check state. Set Radio to TRUE to enable the item; otherwise FALSE.

## <a name="text"></a> ICommandUI::Text

Sets the text of the user interface item for this command.

```
property String^ Text;
```

### Remarks

This property sets the text of the user interface item for this command. Set Text to a text string handle.

## Requirements

**Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)

## See also

[CCmdUI Class](../../mfc/reference/ccmdui-class.md)
