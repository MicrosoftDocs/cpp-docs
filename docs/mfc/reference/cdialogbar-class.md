---
description: "Learn more about: CDialogBar Class"
title: "CDialogBar Class"
ms.date: "11/04/2016"
f1_keywords: ["CDialogBar", "AFXEXT/CDialogBar", "AFXEXT/CDialogBar::CDialogBar", "AFXEXT/CDialogBar::Create"]
helpviewer_keywords: ["CDialogBar [MFC], CDialogBar", "CDialogBar [MFC], Create"]
ms.assetid: da2f7a30-970c-44e3-87f0-6094bd002cab
---
# CDialogBar Class

Provides the functionality of a Windows modeless dialog box in a control bar.

## Syntax

```
class CDialogBar : public CControlBar
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDialogBar::CDialogBar](#cdialogbar)|Constructs a `CDialogBar` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDialogBar::Create](#create)|Creates a Windows dialog bar and attaches it to the `CDialogBar` object.|

## Remarks

A dialog bar resembles a dialog box in that it contains standard Windows controls that the user can tab between. Another similarity is that you create a dialog template to represent the dialog bar.

Creating and using a dialog bar is similar to creating and using a `CFormView` object. First, use the [dialog editor](../../windows/dialog-editor.md) to define a dialog template with the style WS_CHILD and no other style. The template must not have the style WS_VISIBLE. In your application code, call the constructor to construct the `CDialogBar` object, then call `Create` to create the dialog-bar window and attach it to the `CDialogBar` object.

For more information on `CDialogBar`, see the article [Dialog Bars](../../mfc/dialog-bars.md) and [Technical Note 31](../../mfc/tn031-control-bars.md), Control Bars.

> [!NOTE]
> In the current release, a `CDialogBar` object cannot host Windows Forms controls. For more information about Windows Forms controls in Visual C++, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CDialogBar`

## Requirements

**Header:** afxext.h

## <a name="cdialogbar"></a> CDialogBar::CDialogBar

Constructs a `CDialogBar` object.

```
CDialogBar();
```

## <a name="create"></a> CDialogBar::Create

Loads the dialog-box resource template specified by `lpszTemplateName` or `nIDTemplate`, creates the dialog-bar window, sets its style, and associates it with the `CDialogBar` object.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    LPCTSTR lpszTemplateName,
    UINT nStyle,
    UINT nID);

virtual BOOL Create(
    CWnd* pParentWnd,
    UINT nIDTemplate,
    UINT nStyle,
    UINT nID);
```

### Parameters

*pParentWnd*<br/>
A pointer to the parent `CWnd` object.

*lpszTemplateName*<br/>
A pointer to the name of the `CDialogBar` object's dialog-box resource template.

*nStyle*<br/>
The toolbar style. Additional toolbar styles supported are:

- CBRS_TOP Control bar is at top of the frame window.

- CBRS_BOTTOM Control bar is at bottom of the frame window.

- CBRS_NOALIGN Control bar is not repositioned when the parent is resized.

- CBRS_TOOLTIPS Control bar displays tool tips.

- CBRS_SIZE_DYNAMIC Control bar is dynamic.

- CBRS_SIZE_FIXED Control bar is fixed.

- CBRS_FLOATING Control bar is floating.

- CBRS_FLYBY Status bar displays information about the button.

- CBRS_HIDE_INPLACE Control bar is not displayed to the user.

*nID*<br/>
The control ID of the dialog bar.

*nIDTemplate*<br/>
The resource ID of the `CDialogBar` object's dialog-box template.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

If you specify the CBRS_TOP or CBRS_BOTTOM alignment style, the dialog bar's width is that of the frame window and its height is that of the resource specified by *nIDTemplate*. If you specify the CBRS_LEFT or CBRS_RIGHT alignment style, the dialog bar's height is that of the frame window and its width is that of the resource specified by *nIDTemplate*.

### Example

[!code-cpp[NVC_MFCMessageMaps#13](../../mfc/reference/codesnippet/cpp/cdialogbar-class_1.cpp)]

## See also

[MFC Sample CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFormView Class](../../mfc/reference/cformview-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)
