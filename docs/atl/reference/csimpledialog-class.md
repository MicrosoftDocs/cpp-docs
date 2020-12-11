---
description: "Learn more about: CSimpleDialog Class"
title: "CSimpleDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleDialog", "ATLWIN/ATL::CSimpleDialog", "ATLWIN/ATL::CSimpleDialog::DoModal"]
helpviewer_keywords: ["CSimpleDialog class", "CSimpleDialog class, modal dialog boxes in ATL", "dialog boxes, modal", "modal dialog boxes, ATL"]
ms.assetid: 2ae65cc9-4f32-4168-aecd-200b4a480fdf
---
# CSimpleDialog Class

This class implements a basic modal dialog box.

## Syntax

```
template <WORD t_wDlgTemplateID, BOOL t_bCenter = TRUE>
class CSimpleDialog : public CDialogImplBase
```

#### Parameters

*t_wDlgTemplateID*

The resource ID of the dialog template resource.

*t_bCenter*<br/>
TRUE if the dialog object is to be centered on the owner window; otherwise FALSE.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleDialog::DoModal](#domodal)|Creates a modal dialog box.|

## Remarks

Implements a modal dialog box with basic functionality. `CSimpleDialog` provides support for Windows common controls only. To create and display a modal dialog box, create an instance of this class, providing the name of an existing resource template for the dialog box. The dialog box object closes when the user clicks any control with a pre-defined value (such as IDOK or IDCANCEL).

`CSimpleDialog` allows you to create only modal dialog boxes. `CSimpleDialog` provides the dialog box procedure, which uses the default message map to direct messages to the appropriate handlers.

See [Implementing a Dialog Box](../../atl/implementing-a-dialog-box.md) for more information.

## Inheritance Hierarchy

`CDialogImplBase`

`CSimpleDialog`

## Requirements

**Header:** atlwin.h

## <a name="domodal"></a> CSimpleDialog::DoModal

Invokes a modal dialog box and returns the dialog-box result when done.

```
INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow());
```

### Parameters

*hWndParent*<br/>
A handle to the parent of the dialog box. If no value is provided, the parent is set to the current active window.

### Return Value

If successful, the return value is the resource ID of the control that dismissed the dialog box.

If the function fails, the return value is -1. To get extended error information, call `GetLastError`.

### Remarks

This method handles all interaction with the user while the dialog box is active. This is what makes the dialog box modal; that is, the user cannot interact with other windows until the dialog box is closed.

## See also

[Class Overview](../../atl/atl-class-overview.md)
