---
description: "Learn more about: CCheckListBox Class"
title: "CCheckListBox Class"
ms.date: "11/04/2016"
f1_keywords: ["CCheckListBox", "AFXWIN/CCheckListBox", "AFXWIN/CCheckListBox::CCheckListBox", "AFXWIN/CCheckListBox::Create", "AFXWIN/CCheckListBox::DrawItem", "AFXWIN/CCheckListBox::Enable", "AFXWIN/CCheckListBox::GetCheck", "AFXWIN/CCheckListBox::GetCheckStyle", "AFXWIN/CCheckListBox::IsEnabled", "AFXWIN/CCheckListBox::MeasureItem", "AFXWIN/CCheckListBox::OnGetCheckPosition", "AFXWIN/CCheckListBox::SetCheck", "AFXWIN/CCheckListBox::SetCheckStyle"]
helpviewer_keywords: ["CCheckListBox [MFC], CCheckListBox", "CCheckListBox [MFC], Create", "CCheckListBox [MFC], DrawItem", "CCheckListBox [MFC], Enable", "CCheckListBox [MFC], GetCheck", "CCheckListBox [MFC], GetCheckStyle", "CCheckListBox [MFC], IsEnabled", "CCheckListBox [MFC], MeasureItem", "CCheckListBox [MFC], OnGetCheckPosition", "CCheckListBox [MFC], SetCheck", "CCheckListBox [MFC], SetCheckStyle"]
ms.assetid: 1dd78438-00e8-441c-b36f-9c4f9ac0d019
---
# CCheckListBox Class

Provides the functionality of a Windows checklist box.

## Syntax

```
class CCheckListBox : public CListBox
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CCheckListBox::CCheckListBox](#cchecklistbox)|Constructs a `CCheckListBox` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CCheckListBox::Create](#create)|Creates the Windows checklist box and attaches it to the `CCheckListBox` object.|
|[CCheckListBox::DrawItem](#drawitem)|Called by the framework when a visual aspect of an owner-draw list box changes.|
|[CCheckListBox::Enable](#enable)|Enables or disables a checklist box item.|
|[CCheckListBox::GetCheck](#getcheck)|Gets the state of an item's check box.|
|[CCheckListBox::GetCheckStyle](#getcheckstyle)|Gets the style of the control's check boxes.|
|[CCheckListBox::IsEnabled](#isenabled)|Determines whether an item is enabled.|
|[CCheckListBox::MeasureItem](#measureitem)|Called by the framework when a list box with an owner-draw style is created.|
|[CCheckListBox::OnGetCheckPosition](#ongetcheckposition)|Called by the framework to get the position of an item's check box.|
|[CCheckListBox::SetCheck](#setcheck)|Sets the state of an item's check box.|
|[CCheckListBox::SetCheckStyle](#setcheckstyle)|Sets the style of the control's check boxes.|

## Remarks

A "checklist box" displays a list of items, such as filenames. Each item in the list has a check box next to it that the user can check or clear.

`CCheckListBox` is only for owner-drawn controls because the list contains more than text strings. At its simplest, a checklist box contains text strings and check boxes, but you do not need to have text at all. For example, you could have a list of small bitmaps with a check box next to each item.

To create your own checklist box, you must derive your own class from `CCheckListBox`. To derive your own class, write a constructor for the derived class, then call `Create`.

If you want to handle Windows notification messages sent by a list box to its parent (usually a class derived from [CDialog](../../mfc/reference/cdialog-class.md)), add a message-map entry and message-handler member function to the parent class for each message.

Each message-map entry takes the following form:

**ON\_**_Notification_ **(** _id_, _memberFxn_ **)**

where `id` specifies the child window ID of the control sending the notification and `memberFxn` is the name of the parent member function you have written to handle the notification.

The parent's function prototype is as follows:

`afx_msg void memberFxn();`

There is only one message-map entry that pertains specifically to `CCheckListBox` (but see also the message-map entries for [CListBox](../../mfc/reference/clistbox-class.md)):

- ON_CLBN_CHKCHANGE The user has changed the state of an item's checkbox.

If your checklist box is a default checklist box (a list of strings with the default-sized checkboxes to the left of each), you can use the default [CCheckListBox::DrawItem](#drawitem) to draw the checklist box. Otherwise, you must override the [CListBox::CompareItem](../../mfc/reference/clistbox-class.md#compareitem) function and the [CCheckListBox::DrawItem](#drawitem) and [CCheckListBox::MeasureItem](#measureitem) functions.

You can create a checklist box either from a dialog template or directly in your code.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CCheckListBox`

## Requirements

**Header:** afxwin.h

## <a name="cchecklistbox"></a> CCheckListBox::CCheckListBox

Constructs a `CCheckListBox` object.

```
CCheckListBox();
```

### Remarks

You construct a `CCheckListBox` object in two steps. First define a class derived from `CCheckListBox`, then call `Create`, which initializes the Windows checklist box and attaches it to the `CCheckListBox` object.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#60](../../mfc/codesnippet/cpp/cchecklistbox-class_1.cpp)]

## <a name="create"></a> CCheckListBox::Create

Creates the Windows checklist box and attaches it to the `CCheckListBox` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the style of the checklist box. The style must be LBS_HASSTRINGS and either LBS_OWNERDRAWFIXED (all items in the list are the same height) or LBS_OWNERDRAWVARIABLE (items in the list are of varying heights). This style can be combined with other [list-box styles](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) except LBS_USETABSTOPS.

*rect*<br/>
Specifies the checklist-box size and position. Can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](/windows/win32/api/windef/ns-windef-rect) structure.

*pParentWnd*<br/>
Specifies the checklist box's parent window (usually a `CDialog` object). It must not be NULL.

*nID*<br/>
Specifies the checklist box's control ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You construct a `CCheckListBox` object in two steps. First, define a class derived from `CcheckListBox` and then call `Create`, which initializes the Windows checklist box and attaches it to the `CCheckListBox`. See [CCheckListBox::CCheckListBox](#cchecklistbox) for a sample.

When `Create` executes, Windows sends the [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), and [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messages to the checklist-box control.

These messages are handled by default by the [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), and [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) member functions in the `CWnd` base class. To extend the default message handling, add a message map to the your derived class and override the preceding message-handler member functions. Override `OnCreate`, for example, to perform needed initialization for a new class.

Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a checklist-box control:

- WS_CHILD Always

- WS_VISIBLE Usually

- WS_DISABLED Rarely

- WS_VSCROLL To add a vertical scroll bar

- WS_HSCROLL To add a horizontal scroll bar

- WS_GROUP To group controls

- WS_TABSTOP To allow tabbing to this control

## <a name="drawitem"></a> CCheckListBox::DrawItem

Called by the framework when a visual aspect of an owner-drawn checklist box changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A long pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure that contains information about the type of drawing required.

### Remarks

The `itemAction` and `itemState` members of the `DRAWITEMSTRUCT` structure define the drawing action that is to be performed.

By default, this function draws a default checkbox list, consisting of a list of strings each with a default-sized checkbox to the left. The checkbox list size is the one specified in [Create](#create).

Override this member function to implement drawing of owner-draw checklist boxes that are not the default, such as checklist boxes with lists that aren't strings, with variable-height items, or with checkboxes that aren't on the left. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *lpDrawItemStruct* before the termination of this member function.

If checklist box items are not all the same height, the checklist box style (specified in `Create`) must be **LBS_OWNERVARIABLE**, and you must override the [MeasureItem](#measureitem) function.

## <a name="enable"></a> CCheckListBox::Enable

Call this function to enable or disable a checklist box item.

```cpp
void Enable(
    int nIndex,
    BOOL bEnabled = TRUE);
```

### Parameters

*nIndex*<br/>
Index of the checklist box item to be enabled.

*bEnabled*<br/>
Specifies whether the item is enabled or disabled.

## <a name="getcheck"></a> CCheckListBox::GetCheck

Retrieves the state of the specified check box.

```
int GetCheck(int nIndex);
```

### Parameters

*nIndex*<br/>
Zero-based index of a check box that is contained in the list box.

### Return Value

The state of the specified check box. The following table lists possible values.

|Value|Description|
|-----------|-----------------|
|BST_CHECKED|The check box is checked.|
|BST_UNCHECKED|The check box is not checked.|
|BST_INDETERMINATE|The check box state is indeterminate.|

## <a name="getcheckstyle"></a> CCheckListBox::GetCheckStyle

Call this function to get the checklist box's style.

```
UINT GetCheckStyle();
```

### Return Value

The style of the control's check boxes.

### Remarks

For information on possible styles, see [SetCheckStyle](#setcheckstyle).

## <a name="isenabled"></a> CCheckListBox::IsEnabled

Call this function to determine whether an item is enabled.

```
BOOL IsEnabled(int nIndex);
```

### Parameters

*nIndex*<br/>
Index of the item.

### Return Value

Nonzero if the item is enabled; otherwise 0.

## <a name="measureitem"></a> CCheckListBox::MeasureItem

Called by the framework when a checklist box with a nondefault style is created.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### Parameters

*lpMeasureItemStruct*<br/>
A long pointer to a [MEASUREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-measureitemstruct) structure.

### Remarks

By default, this member function does nothing. Override this member function and fill in the `MEASUREITEMSTRUCT` structure to inform Windows of the dimensions of checklist-box items. If the checklist box is created with the [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the framework calls this member function for each item in the list box. Otherwise, this member is called only once.

## <a name="ongetcheckposition"></a> CCheckListBox::OnGetCheckPosition

The framework calls this function to get the position and size of the check box in an item.

```
virtual CRect OnGetCheckPosition(
    CRect rectItem,
    CRect rectCheckBox);
```

### Parameters

*rectItem*<br/>
The position and size of the list item.

*rectCheckBox*<br/>
The default position and size of an item's check box.

### Return Value

The position and size of an item's check box.

### Remarks

The default implementation only returns the default position and size of the check box (`rectCheckBox`). By default, a check box is aligned in the upper-left corner of an item and is the standard check box size. There may be cases where you want the check boxes on the right, or want a larger or smaller check box. In these cases, override `OnGetCheckPosition` to change the check box position and size within the item.

## <a name="setcheck"></a> CCheckListBox::SetCheck

Sets the state of the specified check box.

```cpp
void SetCheck(
    int nIndex,
    int nCheck);
```

### Parameters

*nIndex*<br/>
Zero-based index of a check box that is contained in the list box.

*nCheck*<br/>
The button state for the specified check box. See the Remarks section for possible values.

### Remarks

The following table lists possible values for the *nCheck* parameter.

|Value|Description|
|-----------|-----------------|
|BST_CHECKED|Select the specified check box.|
|BST_UNCHECKED|Clear the specified check box.|
|BST_INDETERMINATE|Set the specified check box state to indeterminate.<br /><br /> This state is only available if the check box style is BS_AUTO3STATE or BS_3STATE. For more information, see [Button Styles](../../mfc/reference/styles-used-by-mfc.md#button-styles).|

## <a name="setcheckstyle"></a> CCheckListBox::SetCheckStyle

Call this function to set the style of check boxes in the checklist box.

```cpp
void SetCheckStyle(UINT nStyle);
```

### Parameters

*nStyle*<br/>
Determines the style of check boxes in the checklist box.

### Remarks

Valid styles are:

- BS_CHECKBOX

- BS_AUTOCHECKBOX

- BS_AUTO3STATE

- BS_3STATE

For information on these styles, see [Button Styles](../../mfc/reference/styles-used-by-mfc.md#button-styles).

## See also

[MFC Sample TSTCON](../../overview/visual-cpp-samples.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)
