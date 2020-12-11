---
description: "Learn more about: CComboBoxEx Class"
title: "CComboBoxEx Class"
ms.date: "11/04/2016"
f1_keywords: ["CComboBoxEx", "AFXCMN/CComboBoxEx", "AFXCMN/CComboBoxEx::CComboBoxEx", "AFXCMN/CComboBoxEx::Create", "AFXCMN/CComboBoxEx::CreateEx", "AFXCMN/CComboBoxEx::DeleteItem", "AFXCMN/CComboBoxEx::GetComboBoxCtrl", "AFXCMN/CComboBoxEx::GetEditCtrl", "AFXCMN/CComboBoxEx::GetExtendedStyle", "AFXCMN/CComboBoxEx::GetImageList", "AFXCMN/CComboBoxEx::GetItem", "AFXCMN/CComboBoxEx::HasEditChanged", "AFXCMN/CComboBoxEx::InsertItem", "AFXCMN/CComboBoxEx::SetExtendedStyle", "AFXCMN/CComboBoxEx::SetImageList", "AFXCMN/CComboBoxEx::SetItem", "AFXCMN/CComboBoxEx::SetWindowTheme"]
helpviewer_keywords: ["CComboBoxEx [MFC], CComboBoxEx", "CComboBoxEx [MFC], Create", "CComboBoxEx [MFC], CreateEx", "CComboBoxEx [MFC], DeleteItem", "CComboBoxEx [MFC], GetComboBoxCtrl", "CComboBoxEx [MFC], GetEditCtrl", "CComboBoxEx [MFC], GetExtendedStyle", "CComboBoxEx [MFC], GetImageList", "CComboBoxEx [MFC], GetItem", "CComboBoxEx [MFC], HasEditChanged", "CComboBoxEx [MFC], InsertItem", "CComboBoxEx [MFC], SetExtendedStyle", "CComboBoxEx [MFC], SetImageList", "CComboBoxEx [MFC], SetItem", "CComboBoxEx [MFC], SetWindowTheme"]
ms.assetid: 33ca960a-2409-478c-84a4-a2ee8ecfe8f7
---
# CComboBoxEx Class

Extends the combo box control by providing support for image lists.

## Syntax

```
class CComboBoxEx : public CComboBox
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComboBoxEx::CComboBoxEx](#ccomboboxex)|Constructs a `CComboBoxEx` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComboBoxEx::Create](#create)|Creates the combo box and attaches it to the `CComboBoxEx` object.|
|[CComboBoxEx::CreateEx](#createex)|Creates a combo box with the specified Windows extended styles and attaches it to a `ComboBoxEx` object.|
|[CComboBoxEx::DeleteItem](#deleteitem)|Removes an item from a `ComboBoxEx` control.|
|[CComboBoxEx::GetComboBoxCtrl](#getcomboboxctrl)|Retrieves a pointer to the child combo box control.|
|[CComboBoxEx::GetEditCtrl](#geteditctrl)|Retrieves the handle to the edit control portion of a `ComboBoxEx` control.|
|[CComboBoxEx::GetExtendedStyle](#getextendedstyle)|Retrieves the extended styles that are in use for a `ComboBoxEx` control.|
|[CComboBoxEx::GetImageList](#getimagelist)|Retrieves a pointer to the image list assigned to a `ComboBoxEx` control.|
|[CComboBoxEx::GetItem](#getitem)|Retrieves item information for a given `ComboBoxEx` item.|
|[CComboBoxEx::HasEditChanged](#haseditchanged)|Determines if the user has changed the contents of the `ComboBoxEx` edit control by typing.|
|[CComboBoxEx::InsertItem](#insertitem)|Inserts a new item in a `ComboBoxEx` control.|
|[CComboBoxEx::SetExtendedStyle](#setextendedstyle)|Sets extended styles within a `ComboBoxEx` control.|
|[CComboBoxEx::SetImageList](#setimagelist)|Sets an image list for a `ComboBoxEx` control.|
|[CComboBoxEx::SetItem](#setitem)|Sets the attributes for an item in a `ComboBoxEx` control.|
|[CComboBoxEx::SetWindowTheme](#setwindowtheme)|Sets the visual style of the extended combo box control.|

## Remarks

By using `CComboBoxEx` to create combo box controls, you no longer need to implement your own image drawing code. Instead, use `CComboBoxEx` to access images from an image list.

## Image List Support

In a standard combo box, the owner of the combo box is responsible for drawing an image by creating the combo box as an owner-draw control. When you use `CComboBoxEx`, you do not need to set the drawing styles CBS_OWNERDRAWFIXED and CBS_HASSTRINGS because they are implied. Otherwise, you must write code to perform drawing operations. A `CComboBoxEx` control supports up to three images per item: one for a selected state, one for an unselected state, and one for an overlay image.

## Styles

`CComboBoxEx` supports the styles CBS_SIMPLE, CBS_DROPDOWN, CBS_DROPDOWNLIST, and WS_CHILD. All other styles passed when you create the window are ignored by the control. After the window is created, you can provide other combo box styles by calling the `CComboBoxEx` member function [SetExtendedStyle](#setextendedstyle). With these styles, you can:

- Set string searches in the list to be case-sensitive.

- Create a combo box control that uses the slash ('/'), backslash ('\\'), and period ('.') characters as word delimiters. This allow users to jump from word to word, using the keyboard shortcut CTRL+ ARROW.

- Set the combo box control to either display or not display an image. If no image is displayed, the combo box can remove the text indent that accommodates an image.

- Create a narrow combo box control, including sizing it so it clips the wider combo box it contains.

These style flags are described further in [Using CComboBoxEx](../../mfc/using-ccomboboxex.md).

## Item Retention and Callback Item Attributes

Item information, such as indexes for items and images, indentation values, and text strings, is stored in the Win32 structure [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw), as described in the Windows SDK. The structure also contains members that correspond to callback flags.

For a detailed, conceptual discussion, see [Using CComboBoxEx](../../mfc/using-ccomboboxex.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CComboBox](../../mfc/reference/ccombobox-class.md)

`CComboBoxEx`

## Requirements

**Header:** afxcmn.h

## <a name="ccomboboxex"></a> CComboBoxEx::CComboBoxEx

Call this member function to create a `CComboBoxEx` object.

```
CComboBoxEx();
```

## <a name="create"></a> CComboBoxEx::Create

Creates the combo box and attaches it to the `CComboBoxEx` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the combination of combo box styles applied to the combo box. See **Remarks** below for more information about styles.

*rect*<br/>
A reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT](/windows/win32/api/windef/ns-windef-rect) structure, which is the position and size of the combo box.

*pParentWnd*<br/>
A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the combo box (usually a `CDialog`). It must not be NULL.

*nID*<br/>
Specifies the combo box's control ID.

### Return Value

Nonzero if the object was created successfully; otherwise 0.

### Remarks

Create a `CComboBoxEx` object in two steps:

1. Call [CComboBoxEx](#ccomboboxex) to construct a `CComboBoxEx` object.

1. Call this member function, which creates the extended Windows combo box and attaches it to the `CComboBoxEx` object.

When you call `Create`, MFC initializes the common controls.

When you create the combo box, you can specify any or all of the following combo-box styles:

- CBS_SIMPLE

- CBS_DROPDOWN

- CBS_DROPDOWNLIST

- CBS_AUTOHSCROLL

- WS_CHILD

All other styles passed when you create the window are ignored. The `ComboBoxEx` control also supports extended styles that provide additional features. These styles are described in [ComboBoxEx control extended styles](/windows/win32/Controls/comboboxex-control-extended-styles), in the Windows SDK. Set these styles by calling [SetExtendedStyle](#setextendedstyle).

If you want to use extended windows styles with your control, call [CreateEx](#createex) instead of `Create`.

## <a name="createex"></a> CComboBoxEx::CreateEx

Call this function to create an extended combo box control (a child window) and associate it with the `CComboBoxEx` object.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwExStyle*<br/>
Specifies the extended style of the control being created. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

*dwStyle*<br/>
The combo box control's style. See [Create](#create) for a list of styles.

*rect*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure describing the size and position of the window to be created, in client coordinates of *pParentWnd*.

*pParentWnd*<br/>
A pointer to the window that is the control's parent.

*nID*<br/>
The control's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Use `CreateEx` instead of `Create` to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.

`CreateEx` creates the control with the extended Windows styles specified by *dwExStyle*. You must set extended styles specific to an extended combo box control using [SetExtendedStyle](#setextendedstyle). For example, use `CreateEx` to set such styles as WS_EX_CONTEXTHELP, but use `SetExtendedStyle` to set such styles as CBES_EX_CASESENSITIVE. For more information, see the styles described in the topic [ComboBoxEx Control Extended Styles](/windows/win32/Controls/comboboxex-control-extended-styles) in the Windows SDK.

## <a name="deleteitem"></a> CComboBoxEx::DeleteItem

Removes an item from a `ComboBoxEx` control.

```
int DeleteItem(int iIndex);
```

### Parameters

*iIndex*<br/>
Zero-based index of the item to be removed.

### Return Value

The number of items remaining in the control. If *iIndex* is invalid, the function returns CB_ERR.

### Remarks

This member function implements the functionality of the message [CBEM_DELETEITEM](/windows/win32/Controls/cbem-deleteitem), as described in the Windows SDK. When you call DeleteItem, a [WM_NOTIFY](/windows/win32/controls/wm-notify) message with CBEN_DELETEITEM notification will be sent to the parent window.

## <a name="getcomboboxctrl"></a> CComboBoxEx::GetComboBoxCtrl

Call this member function to get a pointer to a combo box control within a `CComboBoxEx` object.

```
CComboBox* GetComboBoxCtrl();
```

### Return Value

A pointer to a `CComboBox` object.

### Remarks

The `CComboBoxEx` control consists of a parent window, which encapsulates a `CComboBox`.

The `CComboBox` object pointed to by the return value is a temporary object and is destroyed during the next idle processing time.

## <a name="geteditctrl"></a> CComboBoxEx::GetEditCtrl

Call this member function to get a pointer to the edit control for a combo box.

```
CEdit* GetEditCtrl();
```

### Return Value

A pointer to a [CEdit](../../mfc/reference/cedit-class.md) object.

### Remarks

A `CComboBoxEx` control uses an edit box when it is created with the CBS_DROPDOWN style.

The `CEdit` object pointed to by the return value is a temporary object and is destroyed during the next idle processing time.

## <a name="getextendedstyle"></a> CComboBoxEx::GetExtendedStyle

Call this member function to get the extended styles used for a `CComboBoxEx` control.

```
DWORD GetExtendedStyle() const;
```

### Return Value

The DWORD value that contains the extended styles that are used for the combo box control.

### Remarks

See [ComboBoxEx Control Extended Styles](/windows/win32/Controls/comboboxex-control-extended-styles) in the Windows SDK for more information about these styles.

## <a name="getimagelist"></a> CComboBoxEx::GetImageList

Call this member function to get a pointer to the image list used by a `CComboBoxEx` control.

```
CImageList* GetImageList() const;
```

### Return Value

A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object. If it fails, this member function returns NULL.

### Remarks

The `CImageList` object pointed to by the return value is a temporary object and is destroyed during the next idle processing time.

## <a name="getitem"></a> CComboBoxEx::GetItem

Retrieves item information for a given `ComboBoxEx` item.

```
BOOL GetItem(COMBOBOXEXITEM* pCBItem);
```

### Parameters

*pCBItem*<br/>
A pointer to a [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) structure that will receive the item information.

### Return Value

Nonzero if the operation was successful; otherwise 0.

### Remarks

This member function implements the functionality of the message [CBEM_GETITEM](/windows/win32/Controls/cbem-getitem), as described in the Windows SDK.

## <a name="haseditchanged"></a> CComboBoxEx::HasEditChanged

Determines if the user has changed the contents of the `ComboBoxEx` edit control by typing.

```
BOOL HasEditChanged();
```

### Return Value

Nonzero if the user has typed in the control's edit box; otherwise 0.

### Remarks

This member function implements the functionality of the message [CBEM_HASEDITCHANGED](/windows/win32/Controls/cbem-haseditchanged), as described in the Windows SDK.

## <a name="insertitem"></a> CComboBoxEx::InsertItem

Inserts a new item in a `ComboBoxEx` control.

```
int InsertItem(const COMBOBOXEXITEM* pCBItem);
```

### Parameters

*pCBItem*<br/>
A pointer to a [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) structure that will receive the item information. This structure contains callback flag values for the item.

### Return Value

The index at which the new item was inserted if successful; otherwise -1.

### Remarks

When you call `InsertItem`, a [WM_NOTIFY](/windows/win32/controls/wm-notify) message with [CBEN_INSERTITEM](/windows/win32/Controls/cben-insertitem) notification will be sent to the parent window.

## <a name="setextendedstyle"></a> CComboBoxEx::SetExtendedStyle

Call this member function to set the extended styles used for a combo box extended control.

```
DWORD SetExtendedStyle(
    DWORD dwExMask,
    DWORD dwExStyles);
```

### Parameters

*dwExMask*<br/>
A DWORD value that indicates which styles in *dwExStyles* are to be affected. Only the extended styles in *dwExMask* will be changed. All other styles will be maintained as is. If this parameter is zero, then all of the styles in *dwExStyles* will be affected.

*dwExStyles*<br/>
A DWORD value that contains the combo box control extended styles to set for the control.

### Return Value

A DWORD value that contains the extended styles previously used for the control.

### Remarks

See [ComboBoxEx Control Extended Styles](/windows/win32/Controls/comboboxex-control-extended-styles) in the Windows SDK for more information about these styles.

To create a combo box extended control with extended windows styles, use [CreateEx](#createex).

## <a name="setimagelist"></a> CComboBoxEx::SetImageList

Sets an image list for a `ComboBoxEx` control.

```
CImageList* SetImageList(CImageList* pImageList);
```

### Parameters

*pImageList*<br/>
A pointer to a `CImageList` object containing the images to use with the `CComboBoxEx` control.

### Return Value

A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object containing the images previously used by the `CComboBoxEx` control. NULL if no image list was previously set.

### Remarks

This member function implements the functionality of the message [CBEM_SETIMAGELIST](/windows/win32/Controls/cbem-setimagelist), as described in the Windows SDK. If you change the height of the default edit control, call the Win32 function [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) to resize your control after you call `SetImageList`, or it will not display properly.

The `CImageList` object pointed to by the return value is a temporary object and is destroyed during the next idle processing time.

## <a name="setitem"></a> CComboBoxEx::SetItem

Sets the attributes for an item in a `ComboBoxEx` control.

```
BOOL SetItem(const COMBOBOXEXITEM* pCBItem);
```

### Parameters

*pCBItem*<br/>
A pointer to a [COMBOBOXEXITEM](/windows/win32/api/commctrl/ns-commctrl-comboboxexitemw) structure that will receive the item information.

### Return Value

Nonzero if the operation was successful; otherwise 0.

### Remarks

This member function implements the functionality of the message [CBEM_SETITEM](/windows/win32/Controls/cbem-setitem), as described in the Windows SDK.

## <a name="setwindowtheme"></a> CComboBoxEx::SetWindowTheme

Sets the visual style of the extended combo box control.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### Parameters

*pszSubAppName*<br/>
A pointer to a Unicode string that contains the extended combo box visual style to set.

### Return Value

The return value is not used.

### Remarks

This member function emulates the functionality of the [CBEM_SETWINDOWTHEME](/windows/win32/Controls/cbem-setwindowtheme) message, as described in the Windows SDK.

## See also

[MFC Sample MFCIE](../../overview/visual-cpp-samples.md)<br/>
[CComboBox Class](../../mfc/reference/ccombobox-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CComboBox Class](../../mfc/reference/ccombobox-class.md)
