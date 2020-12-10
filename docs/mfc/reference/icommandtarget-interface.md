---
description: "Learn more about: ICommandTarget Interface"
title: "ICommandTarget Interface"
ms.date: "11/04/2016"
f1_keywords: ["ICommandTarget", "AFXWINFORMS/ICommandTarget", "AFXWINFORMS/ICommandTarget::Initialize"]
helpviewer_keywords: ["ICommandTarget interface [MFC]"]
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
---
# ICommandTarget Interface

Provides a user control with an interface to receive commands from a command source object.

## Syntax

```
interface class ICommandTarget
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[ICommandTarget::Initialize](#initialize)|Initializes the command target object.|

## Remarks

When you host a user control in an MFC View, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing `ICommandTarget`, you give the user control a reference to the [ICommandSource](../../mfc/reference/icommandsource-interface.md) object.

See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use `ICommandTarget`.

For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## Requirements

**Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)

## <a name="initialize"></a> ICommandTarget::Initialize

Initializes the command target object.

```cpp
void Initialize(ICommandSource^ cmdSource);
```

### Parameters

*cmdSource*<br/>
A handle to the command source object.

### Remarks

When you host a user control in an MFC View, CWinFormsView routes commands and update command UI messages to the user control to allow it to handle MFC commands.

This method initializes the command target object and associates it with the specified command source object cmdSource. It should be called in the user control class implementation. At initialization, you should register command handlers with the command source object by calling ICommandSource::AddCommandHandler in the Initialize implementation. See How to: Add Command Routing to the Windows Forms Control for an example of how to use Initialize to do this.

## See also

[How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[ICommandSource Interface](../../mfc/reference/icommandsource-interface.md)
