---
description: "Learn more about: CButton Class"
title: "CButton Class"
ms.date: "11/04/2016"
f1_keywords: ["CButton", "AFXWIN/CButton", "AFXWIN/CButton::CButton", "AFXWIN/CButton::Create", "AFXWIN/CButton::DrawItem", "AFXWIN/CButton::GetBitmap", "AFXWIN/CButton::GetButtonStyle", "AFXWIN/CButton::GetCheck", "AFXWIN/CButton::GetCursor", "AFXWIN/CButton::GetIcon", "AFXWIN/CButton::GetIdealSize", "AFXWIN/CButton::GetImageList", "AFXWIN/CButton::GetNote", "AFXWIN/CButton::GetNoteLength", "AFXWIN/CButton::GetSplitGlyph", "AFXWIN/CButton::GetSplitImageList", "AFXWIN/CButton::GetSplitInfo", "AFXWIN/CButton::GetSplitSize", "AFXWIN/CButton::GetSplitStyle", "AFXWIN/CButton::GetState", "AFXWIN/CButton::GetTextMargin", "AFXWIN/CButton::SetBitmap", "AFXWIN/CButton::SetButtonStyle", "AFXWIN/CButton::SetCheck", "AFXWIN/CButton::SetCursor", "AFXWIN/CButton::SetDropDownState", "AFXWIN/CButton::SetIcon", "AFXWIN/CButton::SetImageList", "AFXWIN/CButton::SetNote", "AFXWIN/CButton::SetSplitGlyph", "AFXWIN/CButton::SetSplitImageList", "AFXWIN/CButton::SetSplitInfo", "AFXWIN/CButton::SetSplitSize", "AFXWIN/CButton::SetSplitStyle", "AFXWIN/CButton::SetState", "AFXWIN/CButton::SetTextMargin"]
helpviewer_keywords: ["CButton [MFC], CButton", "CButton [MFC], Create", "CButton [MFC], DrawItem", "CButton [MFC], GetBitmap", "CButton [MFC], GetButtonStyle", "CButton [MFC], GetCheck", "CButton [MFC], GetCursor", "CButton [MFC], GetIcon", "CButton [MFC], GetIdealSize", "CButton [MFC], GetImageList", "CButton [MFC], GetNote", "CButton [MFC], GetNoteLength", "CButton [MFC], GetSplitGlyph", "CButton [MFC], GetSplitImageList", "CButton [MFC], GetSplitInfo", "CButton [MFC], GetSplitSize", "CButton [MFC], GetSplitStyle", "CButton [MFC], GetState", "CButton [MFC], GetTextMargin", "CButton [MFC], SetBitmap", "CButton [MFC], SetButtonStyle", "CButton [MFC], SetCheck", "CButton [MFC], SetCursor", "CButton [MFC], SetDropDownState", "CButton [MFC], SetIcon", "CButton [MFC], SetImageList", "CButton [MFC], SetNote", "CButton [MFC], SetSplitGlyph", "CButton [MFC], SetSplitImageList", "CButton [MFC], SetSplitInfo", "CButton [MFC], SetSplitSize", "CButton [MFC], SetSplitStyle", "CButton [MFC], SetState", "CButton [MFC], SetTextMargin"]
ms.assetid: cdc76d5b-31da-43c5-bc43-fde4cb39de5b
---
# CButton Class

Provides the functionality of Windows button controls.

## Syntax

```
class CButton : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CButton::CButton](#cbutton)|Constructs a `CButton` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CButton::Create](#create)|Creates the Windows button control and attaches it to the `CButton` object.|
|[CButton::DrawItem](#drawitem)|Override to draw an owner-drawn `CButton` object.|
|[CButton::GetBitmap](#getbitmap)|Retrieves the handle of the bitmap previously set with [SetBitmap](#setbitmap).|
|[CButton::GetButtonStyle](#getbuttonstyle)|Retrieves information about the button control style.|
|[CButton::GetCheck](#getcheck)|Retrieves the check state of a button control.|
|[CButton::GetCursor](#getcursor)|Retrieves the handle of the cursor image previously set with [SetCursor](#setcursor).|
|[CButton::GetIcon](#geticon)|Retrieves the handle of the icon previously set with [SetIcon](#seticon).|
|[CButton::GetIdealSize](#getidealsize)|Retrieves the ideal size of the button control.|
|[CButton::GetImageList](#getimagelist)|Retrieves the image list of the button control.|
|[CButton::GetNote](#getnote)|Retrieves the note component of the current command link control.|
|[CButton::GetNoteLength](#getnotelength)|Retrieves the length of the note text for the current command link control.|
|[CButton::GetSplitGlyph](#getsplitglyph)|Retrieves the glyph associated with the current split button control.|
|[CButton::GetSplitImageList](#getsplitimagelist)|Retrieves the image list for the current split button control.|
|[CButton::GetSplitInfo](#getsplitinfo)|Retrieves information that defines the current split button control.|
|[CButton::GetSplitSize](#getsplitsize)|Retrieves the bounding rectangle of the drop-down component of the current split button control.|
|[CButton::GetSplitStyle](#getsplitstyle)|Retrieves the split button styles that define the current split button control.|
|[CButton::GetState](#getstate)|Retrieves the check state, highlight state, and focus state of a button control.|
|[CButton::GetTextMargin](#gettextmargin)|Retrieves the text margin of the button control.|
|[CButton::SetBitmap](#setbitmap)|Specifies a bitmap to be displayed on the button.|
|[CButton::SetButtonStyle](#setbuttonstyle)|Changes the style of a button.|
|[CButton::SetCheck](#setcheck)|Sets the check state of a button control.|
|[CButton::SetCursor](#setcursor)|Specifies a cursor image to be displayed on the button.|
|[CButton::SetDropDownState](#setdropdownstate)|Sets the drop-down state of the current split button control.|
|[CButton::SetIcon](#seticon)|Specifies an icon to be displayed on the button.|
|[CButton::SetImageList](#setimagelist)|Sets the image list of the button control.|
|[CButton::SetNote](#setnote)|Sets the note on the current command link control.|
|[CButton::SetSplitGlyph](#setsplitglyph)|Associates a specified glyph with the current split button control.|
|[CButton::SetSplitImageList](#setsplitimagelist)|Associates an image list with the current split button control.|
|[CButton::SetSplitInfo](#setsplitinfo)|Specifies information that defines the current split button control.|
|[CButton::SetSplitSize](#setsplitsize)|Sets the bounding rectangle of the drop-down component of the current split button control.|
|[CButton::SetSplitStyle](#setsplitstyle)|Sets the style of the current split button control.|
|[CButton::SetState](#setstate)|Sets the highlighting state of a button control.|
|[CButton::SetTextMargin](#settextmargin)|Sets the text margin of the button control.|

## Remarks

A button control is a small, rectangular child window that can be clicked on and off. Buttons can be used alone or in groups and can either be labeled or appear without text. A button typically changes appearance when the user clicks it.

Typical buttons are the check box, radio button, and pushbutton. A `CButton` object can become any of these, according to the [button style](../../mfc/reference/styles-used-by-mfc.md#button-styles) specified at its initialization by the [Create](#create) member function.

In addition, the [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md) class derived from `CButton` supports creation of button controls labeled with bitmap images instead of text. A `CBitmapButton` can have separate bitmaps for a button's up, down, focused, and disabled states.

You can create a button control either from a dialog template or directly in your code. In both cases, first call the constructor `CButton` to construct the `CButton` object; then call the `Create` member function to create the Windows button control and attach it to the `CButton` object.

Construction can be a one-step process in a class derived from `CButton`. Write a constructor for the derived class and call `Create` from within the constructor.

If you want to handle Windows notification messages sent by a button control to its parent (usually a class derived from [CDialog](../../mfc/reference/cdialog-class.md)), add a message-map entry and message-handler member function to the parent class for each message.

Each message-map entry takes the following form:

**ON\_**_Notification_ **(** _id_, _memberFxn_ **)**

where *id* specifies the child window ID of the control sending the notification and *memberFxn* is the name of the parent member function you have written to handle the notification.

The parent's function prototype is as follows:

`afx_msg void memberFxn();`

Potential message-map entries are as follows:

|Map entry|Sent to parent when...|
|---------------|----------------------------|
|ON_BN_CLICKED|The user clicks a button.|
|ON_BN_DOUBLECLICKED|The user double-clicks a button.|

If you create a `CButton` object from a dialog resource, the `CButton` object is automatically destroyed when the user closes the dialog box.

If you create a `CButton` object within a window, you may need to destroy it. If you create the `CButton` object on the heap by using the **`new`** function, you must call **`delete`** on the object to destroy it when the user closes the Windows button control. If you create the `CButton` object on the stack, or it is embedded in the parent dialog object, it is destroyed automatically.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CButton`

## Requirements

**Header:** afxwin.h

## <a name="cbutton"></a> CButton::CButton

Constructs a `CButton` object.

```
CButton();
```

### Example

[!code-cpp[NVC_MFC_CButton#1](../../mfc/reference/codesnippet/cpp/cbutton-class_1.cpp)]

## <a name="create"></a> CButton::Create

Creates the Windows button control and attaches it to the `CButton` object.

```
virtual BOOL Create(
    LPCTSTR lpszCaption,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*lpszCaption*<br/>
Specifies the button control's text.

*dwStyle*<br/>
Specifies the button control's style. Apply any combination of [button styles](../../mfc/reference/styles-used-by-mfc.md#button-styles) to the button.

*rect*<br/>
Specifies the button control's size and position. It can be either a `CRect` object or a `RECT` structure.

*pParentWnd*<br/>
Specifies the button control's parent window, usually a `CDialog`. It must not be NULL.

*nID*<br/>
Specifies the button control's ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You construct a `CButton` object in two steps. First, call the constructor and then call `Create`, which creates the Windows button control and attaches it to the `CButton` object.

If the WS_VISIBLE style is given, Windows sends the button control all the messages required to activate and show the button.

Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a button control:

- WS_CHILD Always

- WS_VISIBLE Usually

- WS_DISABLED Rarely

- WS_GROUP To group controls

- WS_TABSTOP To include the button in the tabbing order

### Example

[!code-cpp[NVC_MFC_CButton#2](../../mfc/reference/codesnippet/cpp/cbutton-class_2.cpp)]

## <a name="drawitem"></a> CButton::DrawItem

Called by the framework when a visual aspect of an owner-drawn button has changed.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A long pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure. The structure contains information about the item to be drawn and the type of drawing required.

### Remarks

An owner-drawn button has the BS_OWNERDRAW style set. Override this member function to implement drawing for an owner-drawn `CButton` object. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *lpDrawItemStruct* before the member function terminates.

Also see the [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) style values.

### Example

[!code-cpp[NVC_MFC_CButton#3](../../mfc/reference/codesnippet/cpp/cbutton-class_3.cpp)]

## <a name="getbitmap"></a> CButton::GetBitmap

Call this member function to get the handle of a bitmap, previously set with [SetBitmap](#setbitmap), that is associated with a button.

```
HBITMAP GetBitmap() const;
```

### Return Value

A handle to a bitmap. NULL if no bitmap is previously specified.

### Example

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

## <a name="getbuttonstyle"></a> CButton::GetButtonStyle

Retrieves information about the button control style.

```
UINT GetButtonStyle() const;
```

### Return Value

Returns the button styles for this `CButton` object. This function returns only the [BS_](../../mfc/reference/styles-used-by-mfc.md#button-styles) style values, not any of the other window styles.

### Example

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

## <a name="getcheck"></a> CButton::GetCheck

Retrieves the check state of a radio button or check box.

```
int GetCheck() const;
```

### Return Value

The return value from a button control created with the BS_AUTOCHECKBOX, BS_AUTORADIOBUTTON, BS_AUTO3STATE, BS_CHECKBOX, BS_RADIOBUTTON, or BS_3STATE style is one of the following values:

|Value|Meaning|
|-----------|-------------|
|BST_UNCHECKED|Button state is unchecked.|
|BST_CHECKED|Button state is checked.|
|BST_INDETERMINATE|Button state is indeterminate (applies only if the button has the BS_3STATE or BS_AUTO3STATE style).|

If the button has any other style, the return value is BST_UNCHECKED.

### Example

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

## <a name="getcursor"></a> CButton::GetCursor

Call this member function to get the handle of a cursor, previously set with [SetCursor](#setcursor), that is associated with a button.

```
HCURSOR GetCursor();
```

### Return Value

A handle to a cursor image. NULL if no cursor is previously specified.

### Example

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

## <a name="geticon"></a> CButton::GetIcon

Call this member function to get the handle of an icon, previously set with [SetIcon](#seticon), that is associated with a button.

```
HICON GetIcon() const;
```

### Return Value

A handle to an icon. NULL if no icon is previously specified.

### Example

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

## <a name="getidealsize"></a> CButton::GetIdealSize

Retrieves the ideal size for the button control.

```
BOOL GetIdealSize(SIZE* psize);
```

### Parameters

*psize*<br/>
A pointer to the current size of the button.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function emulates the functionality of the BCM_GETIDEALSIZE message, as described in the [Buttons](/windows/win32/controls/buttons) section of the Windows SDK.

## <a name="getimagelist"></a> CButton::GetImageList

Call this method to get the image list from the button control.

```
BOOL GetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### Parameters

*pbuttonImagelist*<br/>
A pointer to the image list of the `CButton` object.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function emulates the functionality of the BCM_GETIMAGELIST message, as described in the [Buttons](/windows/win32/controls/buttons) section of the Windows SDK.

## <a name="getnote"></a> CButton::GetNote

Retrieves the note text associated with the current command link control.

```
CString GetNote() const;

BOOL GetNote(
    LPTSTR lpszNote,
    UINT* cchNote) const;
```

### Parameters

*lpszNote*\
[out] Pointer to a buffer, which the caller is responsible for allocating and deallocating. If the return value is TRUE, the buffer contains the note text that is associated with the current command link control; otherwise, the buffer is unchanged.

*cchNote*\
[in, out] A pointer to an unsigned integer variable. When this method is called, the variable contains the size of the buffer specified by the *lpszNote* parameter. When this method returns, if the return value is TRUE the variable contains the size of the note associated with the current command link control. If the return value is FALSE, the variable contains the buffer size required to contain the note.

### Return Value

In the first overload, a [CString](../../atl-mfc-shared/using-cstring.md) object that contains the note text associated with the current command link control.

-or-

In the second overload, TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_COMMANDLINK or BS_DEFCOMMANDLINK.

This method sends the [BCM_GETNOTE](/windows/win32/Controls/bcm-getnote) message, which is described in the Windows SDK.

## <a name="getnotelength"></a> CButton::GetNoteLength

Retrieves the length of the note text for the current command link control.

```
UINT GetNoteLength() const;
```

### Return Value

The length of the note text, in 16-bit Unicode characters, for the current command link control.

### Remarks

Use this method only with controls whose button style is BS_COMMANDLINK or BS_DEFCOMMANDLINK.

This method sends the [BCM_GETNOTELENGTH](/windows/win32/Controls/bcm-getnotelength) message, which is described in the Windows SDK.

## <a name="getsplitglyph"></a> CButton::GetSplitGlyph

Retrieves the glyph associated with the current split button control.

```
TCHAR GetSplitGlyph() const;
```

### Return Value

The glyph character associated with the current split button control.

### Remarks

A glyph is the physical representation of a character in a particular font. For example, a split button control might be decorated with the glyph of the Unicode check mark character (U+2713).

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_GLYPH flag, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK. When the message function returns, this method retrieves the glyph from the `himlGlyph` member of the structure.

## <a name="getsplitimagelist"></a> CButton::GetSplitImageList

Retrieves the [image list](../../mfc/reference/cimagelist-class.md) for the current split button control.

```
CImageList* GetSplitImageList() const;
```

### Return Value

A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_IMAGE flag, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK. When the message function returns, this method retrieves the image list from the `himlGlyph` member of the structure.

## <a name="getsplitinfo"></a> CButton::GetSplitInfo

Retrieves parameters that determine how Windows draws the current split button control.

```
BOOL GetSplitInfo(PBUTTON_SPLITINFO pInfo) const;
```

### Parameters

*pInfo*\
[out] Pointer to a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure that receives information about the current split button control. The caller is responsible for allocating the structure.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

This method sends the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message, which is described in the Windows SDK.

## <a name="getsplitsize"></a> CButton::GetSplitSize

Retrieves the bounding rectangle of the drop-down component of the current split button control.

```
BOOL GetSplitSize(LPSIZE pSize) const;
```

### Parameters

*pSize*\
[out] Pointer to a [SIZE](/windows/win32/api/windef/ns-windef-size) structure that receives the description of a rectangle.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

When the split button control is expanded, it can display a drop-down component such as a list control or pager control. This method retrieves the bounding rectangle that contains the drop-down component.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_SIZE flag, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK. When the message function returns, this method retrieves the bounding rectangle from the `size` member of the structure.

## <a name="getsplitstyle"></a> CButton::GetSplitStyle

Retrieves the split button styles that define the current split button control.

```
UINT GetSplitStyle() const;
```

### Return Value

A bitwise combination of split button styles. For more information, see the `uSplitStyle` member of the [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

The split button styles specify the alignment, aspect ratio, and graphical format with which Windows draws a split button icon.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_STYLE flag, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK. When the message function returns, this method retrieves the split button styles from the `uSplitStyle` member of the structure.

## <a name="getstate"></a> CButton::GetState

Retrieves the state of a button control.

```
UINT GetState() const;
```

### Return Value

A bit field that contains the combination of values that indicate the current state of a button control. The following table lists possible values.

|Button State|Value|Description|
|------------------|-----------|-----------------|
|BST_UNCHECKED|0x0000|The initial state.|
|BST_CHECKED|0x0001|The button control is checked.|
|BST_INDETERMINATE|0x0002|The state is indeterminate (only possible when the button control has three states).|
|BST_PUSHED|0x0004|The button control is pressed.|
|BST_FOCUS|0x0008|The button control has the focus.|

### Remarks

A button control with the BS_3STATE or BS_AUTO3STATE button style creates a check box that has a third state that is named the indeterminate state. The indeterminate state indicates that the check box is neither checked nor unchecked.

### Example

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

## <a name="gettextmargin"></a> CButton::GetTextMargin

Call this method to get the text margin of the `CButton` object.

```
BOOL GetTextMargin(RECT* pmargin);
```

### Parameters

*pmargin*<br/>
A pointer to the text margin of the `CButton` object.

### Return Value

Returns the text margin.

### Remarks

Nonzero if successful; otherwise 0.

### Remarks

This member function emulates the functionality of the BCM_GETTEXTMARGIN message, as described in the [Buttons](/windows/win32/controls/buttons) section of the Windows SDK.

## <a name="setbitmap"></a> CButton::SetBitmap

Call this member function to associate a new bitmap with the button.

```
HBITMAP SetBitmap(HBITMAP hBitmap);
```

### Parameters

*hBitmap*<br/>
The handle of a bitmap.

### Return Value

The handle of a bitmap previously associated with the button.

### Remarks

The bitmap will be automatically placed on the face of the button, centered by default. If the bitmap is too large for the button, it will be clipped on either side. You can choose other alignment options, including the following:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

Unlike [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), which uses four bitmaps per button, `SetBitmap` uses only one bitmap per the button. When the button is pressed, the bitmap appears to shift down and to the right.

You are responsible for releasing the bitmap when you are done with it.

### Example

[!code-cpp[NVC_MFC_CButton#4](../../mfc/reference/codesnippet/cpp/cbutton-class_4.cpp)]

## <a name="setbuttonstyle"></a> CButton::SetButtonStyle

Changes the style of a button.

```cpp
void SetButtonStyle(
    UINT nStyle,
    BOOL bRedraw = TRUE);
```

### Parameters

*nStyle*<br/>
Specifies the [button style](../../mfc/reference/styles-used-by-mfc.md#button-styles).

*bRedraw*<br/>
Specifies whether the button is to be redrawn. A nonzero value redraws the button. A 0 value does not redraw the button. The button is redrawn by default.

### Remarks

Use the `GetButtonStyle` member function to retrieve the button style. The low-order word of the complete button style is the button-specific style.

### Example

[!code-cpp[NVC_MFC_CButton#5](../../mfc/reference/codesnippet/cpp/cbutton-class_5.cpp)]

## <a name="setcheck"></a> CButton::SetCheck

Sets or resets the check state of a radio button or check box.

```cpp
void SetCheck(int nCheck);
```

### Parameters

*nCheck*<br/>
Specifies the check state. This parameter can be one of the following:

|Value|Meaning|
|-----------|-------------|
|BST_UNCHECKED|Set the button state to unchecked.|
|BST_CHECKED|Set the button state to checked.|
|BST_INDETERMINATE|Set the button state to indeterminate. This value can be used only if the button has the BS_3STATE or BS_AUTO3STATE style.|

### Remarks

This member function has no effect on a pushbutton.

### Example

[!code-cpp[NVC_MFC_CButton#6](../../mfc/reference/codesnippet/cpp/cbutton-class_6.cpp)]

## <a name="setcursor"></a> CButton::SetCursor

Call this member function to associate a new cursor with the button.

```
HCURSOR SetCursor(HCURSOR hCursor);
```

### Parameters

*hCursor*<br/>
The handle of a cursor.

### Return Value

The handle of a cursor previously associated with the button.

### Remarks

The cursor will be automatically placed on the face of the button, centered by default. If the cursor is too large for the button, it will be clipped on either side. You can choose other alignment options, including the following:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

Unlike [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), which uses four bitmaps per button, `SetCursor` uses only one cursor per the button. When the button is pressed, the cursor appears to shift down and to the right.

### Example

[!code-cpp[NVC_MFC_CButton#7](../../mfc/reference/codesnippet/cpp/cbutton-class_7.cpp)]

## <a name="setdropdownstate"></a> CButton::SetDropDownState

Sets the drop-down state of the current split button control.

```
BOOL SetDropDownState(BOOL fDropDown);
```

### Parameters

*fDropDown*\
[in] TRUE to set BST_DROPDOWNPUSHED state; otherwise, FALSE.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

A split button control has a style of BS_SPLITBUTTON or BS_DEFSPLITBUTTON and consists of a button and a drop-down arrow to its right. For more information, see [Button Styles](/windows/win32/Controls/button-styles). Usually, the drop-down state is set when the user clicks the drop-down arrow. Use this method to programmatically set the drop-down state of the control. The drop-down arrow is drawn shaded to indicate the state.

This method sends the [BCM_SETDROPDOWNSTATE](/windows/win32/Controls/bcm-setdropdownstate) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, *m_splitButton*, that is used to programmatically access the split button control. This variable is used in the following example.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### Example

The following code example sets the state of the split button control to indicate that the drop-down arrow is pushed.

[!code-cpp[NVC_MFC_CButton_s1#6](../../mfc/reference/codesnippet/cpp/cbutton-class_11.cpp)]

## <a name="setelevationrequired"></a> CButton::SetElevationRequired

Sets the state of the current button control to `elevation required`, which is necessary for the control to display an elevated security icon.

```
BOOL SetElevationRequired(BOOL fElevationRequired);
```

### Parameters

*fElevationRequired*\
[in] TRUE to set `elevation required` state; otherwise, FALSE.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

If a button or command link control requires elevated security permission to perform an action, set the control to `elevation required` state. Subsequently, Windows displays the User Account Control (UAC) shield icon on the control. For more information, see [User Account Control](/windows/win32/uxguide/winenv-uac).

This method sends the [BCM_SETSHIELD](/windows/win32/Controls/bcm-setshield) message, which is described in the Windows SDK.

## <a name="seticon"></a> CButton::SetIcon

Call this member function to associate a new icon with the button.

```
HICON SetIcon(HICON hIcon);
```

### Parameters

*hIcon*<br/>
The handle of an icon.

### Return Value

The handle of an icon previously associated with the button.

### Remarks

The icon will be automatically placed on the face of the button, centered by default. If the icon is too large for the button, it will be clipped on either side. You can choose other alignment options, including the following:

- BS_TOP

- BS_LEFT

- BS_RIGHT

- BS_CENTER

- BS_BOTTOM

- BS_VCENTER

Unlike [CBitmapButton](../../mfc/reference/cbitmapbutton-class.md), which uses four bitmaps per button, `SetIcon` uses only one icon per the button. When the button is pressed, the icon appears to shift down and to the right.

### Example

[!code-cpp[NVC_MFC_CButton#8](../../mfc/reference/codesnippet/cpp/cbutton-class_8.cpp)]

## <a name="setimagelist"></a> CButton::SetImageList

Call this method to set the image list of the `CButton` object.

```
BOOL SetImageList(PBUTTON_IMAGELIST pbuttonImagelist);
```

### Parameters

*pbuttonImagelist*<br/>
A pointer to the new image list.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

This member function emulates the functionality of the BCM_SETIMAGELIST message, as described in the [Buttons](/windows/win32/controls/buttons) section of the Windows SDK.

## <a name="setnote"></a> CButton::SetNote

Sets the note text for the current command link control.

```
BOOL SetNote(LPCTSTR lpszNote);
```

### Parameters

*lpszNote*\
[in] Pointer to a Unicode string that is set as the note text for the command link control.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_COMMANDLINK or BS_DEFCOMMANDLINK.

This method sends the [BCM_SETNOTE](/windows/win32/Controls/bcm-setnote) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, *m_cmdLink*, that is used to programmatically access the command link control. This variable is used in the following example.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### Example

The following code example sets the note text for the command link control.

[!code-cpp[NVC_MFC_CButton_s1#7](../../mfc/reference/codesnippet/cpp/cbutton-class_12.cpp)]

## <a name="setsplitglyph"></a> CButton::SetSplitGlyph

Associates a specified glyph with the current split button control.

```
BOOL SetSplitGlyph(TCHAR chGlyph);
```

### Parameters

*chGlyph*\
[in] A character that specifies the glyph to use as the split button drop-down arrow.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls that have the button style BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

A glyph is the physical representation of a character in a particular font. The *chGlyph* parameter is not used as the glyph, but is instead used to select a glyph from a set of system-defined glyphs. The default drop-down arrow glyph is specified by a character '6', and resembles the Unicode character BLACK DOWN-POINTING TRIANGLE (U+25BC).

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_GLYPH flag and the `himlGlyph` member with the *chGlyph* parameter, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK.

## <a name="setsplitimagelist"></a> CButton::SetSplitImageList

Associates an [image list](../../mfc/reference/cimagelist-class.md) with the current split button control.

```
BOOL SetSplitImageList(CImageList* pSplitImageList);
```

### Parameters

*pSplitImageList*\
[in] Pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object to assign to the current split button control.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_IMAGE flag and the `himlGlyph` member with the *pSplitImageList* parameter, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK.

## <a name="setsplitinfo"></a> CButton::SetSplitInfo

Specifies parameters that determine how Windows draws the current split button control.

```
BOOL SetSplitInfo(PBUTTON_SPLITINFO pInfo);
```

### Parameters

*pInfo*\
[in] Pointer to a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure that defines the current split button control.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

This method sends the [BCM_SETSPLITINFO](/windows/win32/Controls/bcm-setsplitinfo) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### Example

The following code example changes the glyph that is used for the split button drop-down arrow. The example substitutes an up-pointing triangle glyph for the default down-pointing triangle glyph. The glyph that is displayed depends on the character that you specify in the `himlGlyph` member of the `BUTTON_SPLITINFO` structure. The down-pointing triangle glyph is specified by a character '6' and the up-pointing triangle glyph is specified by a character '5'. For comparison, see the convenience method, [CButton::SetSplitGlyph](#setsplitglyph).

[!code-cpp[NVC_MFC_CButton_s1#4](../../mfc/reference/codesnippet/cpp/cbutton-class_13.cpp)]

## <a name="setsplitsize"></a> CButton::SetSplitSize

Sets the bounding rectangle of the drop-down component of the current split button control.

```
BOOL SetSplitSize(LPSIZE pSize);
```

### Parameters

*pSize*\
[in] Pointer to a [SIZE](/windows/win32/api/windef/ns-windef-size) structure that describes a bounding rectangle.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

When the split button control is expanded, it can display a drop-down component such as a list control or pager control. This method specifies the size of the bounding rectangle that contains the drop-down component.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_SIZE flag and the `size` member with the *pSize* parameter, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK.

### Example

The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control. This variable is used in the following example.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### Example

The following code example doubles the size of the split button drop-down arrow.

[!code-cpp[NVC_MFC_CButton_s1#5](../../mfc/reference/codesnippet/cpp/cbutton-class_14.cpp)]

## <a name="setsplitstyle"></a> CButton::SetSplitStyle

Sets the style of the current split button control.

```
BOOL SetSplitStyle(UINT uSplitStyle);
```

### Parameters

*uSplitStyle*\
[in] A bitwise combination of split button styles. For more information, see the `uSplitStyle` member of the [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

Use this method only with controls whose button style is BS_SPLITBUTTON or BS_DEFSPLITBUTTON.

The split button styles specify the alignment, aspect ratio, and graphical format with which Windows draws a split button icon. For more information, see the `uSplitStyle` member of the [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure.

This method initializes the `mask` member of a [BUTTON_SPLITINFO](/windows/win32/api/commctrl/ns-commctrl-button_splitinfo) structure with the BCSIF_STYLE flag and the `uSplitStyle` member with the *uSplitStyle* parameter, and then sends that structure in the [BCM_GETSPLITINFO](/windows/win32/Controls/bcm-getsplitinfo) message that is described in the Windows SDK.

### Example

The following code example defines the variable, `m_splitButton`, that is used to programmatically access the split button control.

[!code-cpp[NVC_MFC_CButton_s1#1](../../mfc/reference/codesnippet/cpp/cbutton-class_10.h)]

### Example

The following code example sets the style of the split button drop-down arrow. The BCSS_ALIGNLEFT style displays the arrow on the left side of the button, and the BCSS_STRETCH style retains the drop-down arrow's proportions when you resize the button.

[!code-cpp[NVC_MFC_CButton_s1#3](../../mfc/reference/codesnippet/cpp/cbutton-class_15.cpp)]

## <a name="setstate"></a> CButton::SetState

Sets whether a button control is highlighted or not.

```cpp
void SetState(BOOL bHighlight);
```

### Parameters

*bHighlight*<br/>
Specifies whether the button is to be highlighted. A nonzero value highlights the button; a 0 value removes any highlighting.

### Remarks

Highlighting affects the exterior of a button control. It has no effect on the check state of a radio button or check box.

A button control is automatically highlighted when the user clicks and holds the left mouse button. The highlighting is removed when the user releases the mouse button.

### Example

[!code-cpp[NVC_MFC_CButton#9](../../mfc/reference/codesnippet/cpp/cbutton-class_9.cpp)]

## <a name="settextmargin"></a> CButton::SetTextMargin

Call this method to set the text margin of the `CButton` object.

```
BOOL SetTextMargin(RECT* pmargin);
```

### Parameters

*pmargin*<br/>
A pointer to the new text margin.

### Return Value

Returns TRUE on success, FALSE on failure.

### Remarks

This member function emulates the functionality of the BCM_SETTEXTMARGIN message, as described in the [Buttons](/windows/win32/controls/buttons) section of the Windows SDK.

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[CComboBox Class](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)<br/>
[CScrollBar Class](../../mfc/reference/cscrollbar-class.md)<br/>
[CStatic Class](../../mfc/reference/cstatic-class.md)<br/>
[CBitmapButton Class](../../mfc/reference/cbitmapbutton-class.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)
