---
description: "Learn more about: CMFCButton Class"
title: "CMFCButton Class"
ms.date: "08/28/2018"
f1_keywords: ["CMFCButton", "AFXBUTTON/CMFCButton", "AFXBUTTON/CMFCButton::CleanUp", "AFXBUTTON/CMFCButton::EnableFullTextTooltip", "AFXBUTTON/CMFCButton::EnableMenuFont", "AFXBUTTON/CMFCButton::EnableWindowsTheming", "AFXBUTTON/CMFCButton::GetToolTipCtrl", "AFXBUTTON/CMFCButton::IsAutoCheck", "AFXBUTTON/CMFCButton::IsAutorepeatCommandMode", "AFXBUTTON/CMFCButton::IsCheckBox", "AFXBUTTON/CMFCButton::IsChecked", "AFXBUTTON/CMFCButton::IsHighlighted", "AFXBUTTON/CMFCButton::IsPressed", "AFXBUTTON/CMFCButton::IsPushed", "AFXBUTTON/CMFCButton::IsRadioButton", "AFXBUTTON/CMFCButton::IsWindowsThemingEnabled", "AFXBUTTON/CMFCButton::SetAutorepeatMode", "AFXBUTTON/CMFCButton::SetCheckedImage", "AFXBUTTON/CMFCButton::SetFaceColor", "AFXBUTTON/CMFCButton::SetImage", "AFXBUTTON/CMFCButton::SetMouseCursor", "AFXBUTTON/CMFCButton::SetMouseCursorHand", "AFXBUTTON/CMFCButton::SetStdImage", "AFXBUTTON/CMFCButton::SetTextColor", "AFXBUTTON/CMFCButton::SetTextHotColor", "AFXBUTTON/CMFCButton::SetTooltip", "AFXBUTTON/CMFCButton::SizeToContent", "AFXBUTTON/CMFCButton::OnDraw", "AFXBUTTON/CMFCButton::OnDrawBorder", "AFXBUTTON/CMFCButton::OnDrawFocusRect", "AFXBUTTON/CMFCButton::OnDrawText", "AFXBUTTON/CMFCButton::OnFillBackground", "AFXBUTTON/CMFCButton::SelectFont", "AFXBUTTON/CMFCButton::m_bDrawFocus", "AFXBUTTON/CMFCButton::m_bHighlightChecked", "AFXBUTTON/CMFCButton::m_bRightImage", "AFXBUTTON/CMFCButton::m_bTransparent", "AFXBUTTON/CMFCButton::m_nAlignStyle", "AFXBUTTON/CMFCButton::m_nFlatStyle"]
helpviewer_keywords: ["CMFCButton [MFC], CleanUp", "CMFCButton [MFC], EnableFullTextTooltip", "CMFCButton [MFC], EnableMenuFont", "CMFCButton [MFC], EnableWindowsTheming", "CMFCButton [MFC], GetToolTipCtrl", "CMFCButton [MFC], IsAutoCheck", "CMFCButton [MFC], IsAutorepeatCommandMode", "CMFCButton [MFC], IsCheckBox", "CMFCButton [MFC], IsChecked", "CMFCButton [MFC], IsHighlighted", "CMFCButton [MFC], IsPressed", "CMFCButton [MFC], IsPushed", "CMFCButton [MFC], IsRadioButton", "CMFCButton [MFC], IsWindowsThemingEnabled", "CMFCButton [MFC], SetAutorepeatMode", "CMFCButton [MFC], SetCheckedImage", "CMFCButton [MFC], SetFaceColor", "CMFCButton [MFC], SetImage", "CMFCButton [MFC], SetMouseCursor", "CMFCButton [MFC], SetMouseCursorHand", "CMFCButton [MFC], SetStdImage", "CMFCButton [MFC], SetTextColor", "CMFCButton [MFC], SetTextHotColor", "CMFCButton [MFC], SetTooltip", "CMFCButton [MFC], SizeToContent", "CMFCButton [MFC], OnDraw", "CMFCButton [MFC], OnDrawBorder", "CMFCButton [MFC], OnDrawFocusRect", "CMFCButton [MFC], OnDrawText", "CMFCButton [MFC], OnFillBackground", "CMFCButton [MFC], SelectFont", "CMFCButton [MFC], m_bDrawFocus", "CMFCButton [MFC], m_bHighlightChecked", "CMFCButton [MFC], m_bRightImage", "CMFCButton [MFC], m_bTransparent", "CMFCButton [MFC], m_nAlignStyle", "CMFCButton [MFC], m_nFlatStyle"]
ms.assetid: 4b32f57c-7a53-4734-afb9-d47e3359f62e
---
# CMFCButton Class

The `CMFCButton` class adds functionality to the [CButton](../../mfc/reference/cbutton-class.md) class such as aligning button text, combining button text and an image, selecting a cursor, and specifying a tool tip.

## Syntax

```
class CMFCButton : public CButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCButton::CMFCButton`|Default constructor.|
|`CMFCButton::~CMFCButton`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCButton::CleanUp](#cleanup)|Resets internal variables and frees allocated resources such as images, bitmaps, and icons.|
|`CMFCButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|`CMFCButton::DrawItem`|Called by the framework when a visual aspect of an owner-drawn button has changed. (Overrides [CButton::DrawItem](../../mfc/reference/cbutton-class.md#drawitem).)|
|[CMFCButton::EnableFullTextTooltip](#enablefulltexttooltip)|Specifies whether to display the full text of a tooltip in a large tooltip window or a truncated version of the text in a small tooltip window.|
|[CMFCButton::EnableMenuFont](#enablemenufont)|Specifies whether the button text font is the same as the application menu font.|
|[CMFCButton::EnableWindowsTheming](#enablewindowstheming)|Specifies whether the style of the button border corresponds to the current Windows theme.|
|`CMFCButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCButton::GetToolTipCtrl](#gettooltipctrl)|Returns a reference to the underlying tooltip control.|
|[CMFCButton::IsAutoCheck](#isautocheck)|Indicates whether a check box or radio button is an automatic button.|
|[CMFCButton::IsAutorepeatCommandMode](#isautorepeatcommandmode)|Indicates whether a button is set to auto-repeat mode.|
|[CMFCButton::IsCheckBox](#ischeckbox)|Indicates whether a button is a check box button.|
|[CMFCButton::IsChecked](#ischecked)|Indicates whether the current button is checked.|
|[CMFCButton::IsHighlighted](#ishighlighted)|Indicates whether a button is highlighted.|
|[CMFCButton::IsPressed](#ispressed)|Indicates whether a button is pushed and highlighted.|
|[CMFCButton::IsPushed](#ispushed)|Indicates whether a button is pushed.|
|[CMFCButton::IsRadioButton](#isradiobutton)|Indicates whether a button is a radio button.|
|[CMFCButton::IsWindowsThemingEnabled](#iswindowsthemingenabled)|Indicates whether the style of the button border corresponds to the current Windows theme.|
|`CMFCButton::OnDrawParentBackground`|Draws the background of a button's parent in the specified area. (Overrides [AFX_GLOBAL_DATA::DrawParentBackground](../../mfc/reference/afx-global-data-structure.md)|
|`CMFCButton::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|
|[CMFCButton::SetAutorepeatMode](#setautorepeatmode)|Sets a button to auto-repeat mode.|
|[CMFCButton::SetCheckedImage](#setcheckedimage)|Sets the image for a checked button.|
|[CMFCButton::SetFaceColor](#setfacecolor)|Sets the background color for the button text.|
|[CMFCButton::SetImage](#setimage)|Sets the image for a button.|
|[CMFCButton::SetMouseCursor](#setmousecursor)|Sets the cursor image.|
|[CMFCButton::SetMouseCursorHand](#setmousecursorhand)|Sets the cursor to the image of a hand.|
|[CMFCButton::SetStdImage](#setstdimage)|Uses a `CMenuImages` object to set the button image.|
|[CMFCButton::SetTextColor](#settextcolor)|Sets the color of the button text for a button that is not selected.|
|[CMFCButton::SetTextHotColor](#settexthotcolor)|Sets the color of the button text for a button that is selected.|
|[CMFCButton::SetTooltip](#settooltip)|Associates a tooltip with a button.|
|[CMFCButton::SizeToContent](#sizetocontent)|Resizes a button to contain its button text and image.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCButton::OnDraw](#ondraw)|Called by the framework to draw a button.|
|[CMFCButton::OnDrawBorder](#ondrawborder)|Called by the framework to draw the border of a button.|
|[CMFCButton::OnDrawFocusRect](#ondrawfocusrect)|Called by the framework to draw the focus rectangle for a button.|
|[CMFCButton::OnDrawText](#ondrawtext)|Called by the framework to draw the button text.|
|[CMFCButton::OnFillBackground](#onfillbackground)|Called by the framework to draw the background of the button text.|
|[CMFCButton::SelectFont](#selectfont)|Retrieves the font that is associated with the specified device context.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCButton::m_nAlignStyle](#m_nalignstyle)|Specifies the alignment of the button text.|
|[CMFCButton::m_bDontUseWinXPTheme](#m_bDontUseWinXPTheme)|Specifies whether to use Windows XP themes.|
|[CMFCButton::m_bDrawFocus](#m_bdrawfocus)|Indicates whether to draw a focus rectangle around a button.|
|[CMFCButton::m_nFlatStyle](#m_nflatstyle)|Specifies the style of the button, such as borderless, flat, semi-flat, or 3D.|
|[CMFCButton::m_bGrayDisabled](#m_bGrayDisabled)|When TRUE, enables a disabled button to be drawn as grayed-out.|
|[CMFCButton::m_bHighlightChecked](#m_bhighlightchecked)|Indicates whether to highlight a BS_CHECKBOX-style button when the cursor hovers over it.|
|[CMFCButton::m_bResponseOnButtonDown](#m_bResponseOnButtonDown)|Indicates whether to respond to button down events.|
|[CMFCButton::m_bRightImage](#m_brightimage)|Indicates whether to display an image on the right side of the button.|
|[CMFCButton::m_bTopImage](#m_bTopImage)| Indicates whether the image is on top of the button.|
|[CMFCButton::m_bTransparent](#m_btransparent)|Indicates whether the button is transparent.|
|[CMFCButton::m_bWasDblClk](#m_bWasDblClk)| Indicates whether the last click event was a double-click.|

## Remarks

Other types of buttons are derived from the `CMFCButton` class, such as the [CMFCURLLinkButton](../../mfc/reference/cmfclinkctrl-class.md) class, which supports hyperlinks, and the `CMFCColorButton` class, which supports a color picker dialog box.

The style of a `CMFCButton` object can be *3D*, *flat*, *semi-flat* or *no border*. Button text can be aligned at the left, top, or center of a button. At run time, you can control whether the button displays text, an image, or text and an image. You can also specify that a particular cursor image be displayed when the cursor hovers over a button.

Create a button control either directly in your code, or by using the **MFC Class Wizard** tool and a dialog box template. If you create a button control directly, add a `CMFCButton` variable to your application, and then call the constructor and `Create` methods of the `CMFCButton` object. If you use the **MFC Class Wizard**, add a `CButton` variable to your application, and then change the type of the variable from `CButton` to `CMFCButton`.

To handle notification messages in a dialog box application, add a message map entry and an event handler for each notification. The notifications sent by a `CMFCButton` object are the same as those sent by a `CButton` object.

## Example

The following example demonstrates how to configure the properties of the button by using various methods in the `CMFCButton` class. The example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]
[!code-cpp[NVC_MFC_NewControls#32](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_3.cpp)]
[!code-cpp[NVC_MFC_NewControls#33](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_4.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CButton](../../mfc/reference/cbutton-class.md)

[CMFCButton](../../mfc/reference/cmfcbutton-class.md)

## Requirements

**Header:** afxbutton.h

## <a name="cleanup"></a> CMFCButton::CleanUp

Resets internal variables and frees allocated resources such as images, bitmaps, and icons.

```
virtual void CleanUp();
```

## <a name="enablefulltexttooltip"></a> CMFCButton::EnableFullTextTooltip

Specifies whether to display the full text of a tooltip in a large tooltip window or a truncated version of the text in a small tooltip window.

```cpp
void EnableFullTextTooltip(BOOL bOn=TRUE);
```

### Parameters

*bOn*<br/>
[in] TRUE to display all of the text; FALSE to display truncated text.

### Remarks

## <a name="enablemenufont"></a> CMFCButton::EnableMenuFont

Specifies whether the button text font is the same as the application menu font.

```cpp
void EnableMenuFont(
    BOOL bOn=TRUE,
    BOOL bRedraw=TRUE);
```

### Parameters

*bOn*<br/>
[in] TRUE to use the application menu font as the button text font; FALSE to use the system font. The default is TRUE.

*bRedraw*<br/>
[in] TRUE to immediately redraw the screen; otherwise, FALSE. The default is TRUE.

### Remarks

If you do not use this method to specify the button text font, you can specify the font with the [CWnd::SetFont](../../mfc/reference/cwnd-class.md#setfont) method. If you do not specify a font at all, the framework sets a default font.

## <a name="enablewindowstheming"></a> CMFCButton::EnableWindowsTheming

Specifies whether the style of the button border corresponds to the current Windows theme.

```
static void EnableWindowsTheming(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to use the current Windows theme to draw button borders; FALSE to not use the Windows theme. The default is TRUE.

### Remarks

This method affects all buttons in your application that are derived from the `CMFCButton` class.

## <a name="gettooltipctrl"></a> CMFCButton::GetToolTipCtrl

Returns a reference to the underlying tooltip control.

```
CToolTipCtrl& GetToolTipCtrl();
```

### Return Value

A reference to the underlying tooltip control.

### Remarks

## <a name="isautocheck"></a> CMFCButton::IsAutoCheck

Indicates whether a check box or radio button is an automatic button.

```
BOOL IsAutoCheck() const;
```

### Return Value

TRUE if the button has style BS_AUTOCHECKBOX or BS_AUTORADIOBUTTON; otherwise, FALSE.

### Remarks

## <a name="isautorepeatcommandmode"></a> CMFCButton::IsAutorepeatCommandMode

Indicates whether a button is set to auto-repeat mode.

```
BOOL IsAutorepeatCommandMode() const;
```

### Return Value

TRUE if the button is set to auto-repeat mode; otherwise, FALSE.

### Remarks

Use the [CMFCButton::SetAutorepeatMode](#setautorepeatmode) method to set a button to auto-repeat mode.

## <a name="ischeckbox"></a> CMFCButton::IsCheckBox

Indicates whether a button is a check box button.

```
BOOL IsCheckBox() const;
```

### Return Value

TRUE if the button has either BS_CHECKBOX or BS_AUTOCHECKBOX style; otherwise, FALSE.

### Remarks

## <a name="ischecked"></a> CMFCButton::IsChecked

Indicates whether the current button is checked.

```
BOOL IsChecked() const;
```

### Return Value

TRUE if the current button is checked; otherwise, FALSE.

### Remarks

The framework uses different ways to indicate that different kinds of buttons are checked. For example, a radio button is checked when it contains a dot; a check box is checked when it contains an **X**.

## <a name="ishighlighted"></a> CMFCButton::IsHighlighted

Indicates whether a button is highlighted.

```
BOOL IsHighlighted() const;
```

### Return Value

TRUE if the button is highlighted; otherwise, FALSE.

### Remarks

A button becomes highlighted when the mouse hovers over the button.

## <a name="ispressed"></a> CMFCButton::IsPressed

Indicates whether a button is pushed and highlighted.

```
BOOL IsPressed() const;
```

### Return Value

TRUE if the button is pressed; otherwise, FALSE.

### Remarks

## <a name="ispushed"></a> CMFCButton::IsPushed

Indicates whether a button is pushed.

```
BOOL IsPushed() const;
```

### Return Value

TRUE if the button is pushed; otherwise, FALSE.

### Remarks

## <a name="isradiobutton"></a> CMFCButton::IsRadioButton

Indicates whether a button is a radio button.

```
BOOL IsRadioButton() const;
```

### Return Value

TRUE if the button style is BS_RADIOBUTTON or BS_AUTORADIOBUTTON; otherwise, FALSE.

### Remarks

## <a name="iswindowsthemingenabled"></a> CMFCButton::IsWindowsThemingEnabled

Indicates whether the style of the button border corresponds to the current Windows theme.

```
static BOOL IsWindowsThemingEnabled();
```

### Return Value

TRUE if the style of the button border corresponds to the current Windows theme; otherwise, FALSE.

## <a name="m_bDontUseWinXPTheme"/> CMFCButton::m_bDontUseWinXPTheme

Specifies whether to use Windows XP themes when drawing the button.

```
BOOL m_bDontUseWinXPTheme;
```

## <a name="m_bdrawfocus"></a> CMFCButton::m_bDrawFocus

Indicates whether to draw a focus rectangle around a button.

```
BOOL m_bDrawFocus;
```

### Remarks

Set the `m_bDrawFocus` member to TRUE to specify that the framework will draw a focus rectangle around the button's text and image if the button receives focus.

The `CMFCButton` constructor initializes this member to TRUE.

## <a name="m_bGrayDisabled"></a> CMFCButton::m_bGrayDisabled

When TRUE, enables a disabled button to be drawn as grayed-out.

```
BOOL m_bGrayDisabled;
```

## <a name="m_bhighlightchecked"></a> CMFCButton::m_bHighlightChecked

Indicates whether to highlight a BS_CHECKBOX-style button when the cursor hovers over it.

```
BOOL m_bHighlightChecked;
```

### Remarks

Set the `m_bHighlightChecked` member to TRUE to specify that the framework will highlight a BS_CHECKBOX-style button when the mouse hovers over it.

## <a name="m_bResponseOnButtonDown"></a> CMFCButton::m_bResponseOnButtonDown

Indicates whether to respond to button down events.

```
BOOL m_bResponseOnButtonDown;
```

## <a name="m_brightimage"></a> CMFCButton::m_bRightImage

Indicates whether to display an image on the right side of the button.

```
BOOL m_bRightImage;
```

## <a name="m_bTopImage"></a> CMFCButton::m_bTopImage](#m_bTopImage)

Indicates whether the image is on top of the button.

```
BOOL m_bTopImage;
```

### Remarks

Set the `m_bRightImage` member to TRUE to specify that the framework will display the button's image to the right of the button's text label.

## <a name="m_btransparent"></a> CMFCButton::m_bTransparent

Indicates whether the button is transparent.

```
BOOL m_bTransparent;
```

### Remarks

Set the `m_bTransparent` member to TRUE to specify that the framework will make the button transparent. The `CMFCButton` constructor initializes this member to FALSE.

## <a name="m_nalignstyle"></a> CMFCButton::m_nAlignStyle

Specifies the alignment of the button text.

```
AlignStyle m_nAlignStyle;
```

### Remarks

Use one of the following `CMFCButton::AlignStyle` enumeration values to specify the alignment of the button text:

|Value|Description|
|-----------|-----------------|
|ALIGN_CENTER|(Default) Aligns the button text to the center of the button.|
|ALIGN_LEFT|Aligns the button text to the left side of the button.|
|ALIGN_RIGHT|Aligns the button text to the right side of the button.|

The `CMFCButton` constructor initializes this member to ALIGN_CENTER.

## <a name="m_bWasDblClk"></a> CMFCButton::m_bWasDblClk](#m_bWasDblClk)|

Indicates whether the last click event was a double-click.|

```
BOOL m_bWasDblClk;
```

## <a name="m_nflatstyle"></a> CMFCButton::m_nFlatStyle

Specifies the style of the button, such as borderless, flat, semi-flat, or 3D.

```
FlatStyle  m_nFlatStyle;
```

### Remarks

The following table lists the `CMFCButton::m_nFlatStyle` enumeration values that specify the appearance of a button.

|Value|Description|
|-----------|-----------------|
|BUTTONSTYLE_3D|(Default) The button appears to have high, three-dimensional sides. When the button is clicked, the button appears to be pressed into a deep indentation.|
|BUTTONSTYLE_FLAT|When the mouse does not pause over the button, the button appears to be two-dimensional and does not have raised sides. When the mouse pauses over the button, the button appears to have low, three-dimensional sides. When the button is clicked, the button appears to be pressed into a shallow indentation.|
|BUTTONSTYLE_SEMIFLAT|The button appears to have low, three-dimensional sides. When the button is clicked, the button appears to be pressed into a deep indentation.|
|BUTTONSTYLE_NOBORDERS|The button does not have raised sides and always appears two-dimensional. The button does not appear to be pressed into an indentation when it is clicked.|

The `CMFCButton` constructor initializes this member to BUTTONSTYLE_3D.

### Example

The following example demonstrates how to set the values of the `m_nFlatStyle` member variable in the `CMFCButton` class. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#29](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_5.cpp)]

## <a name="ondraw"></a> CMFCButton::OnDraw

Called by the framework to draw a button.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    UINT uiState);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] A reference to a rectangle that bounds the button.

*uiState*<br/>
[in] The current button state. For more information, see the `itemState` member of the [DRAWITEMSTRUCT Structure](/windows/win32/api/winuser/ns-winuser-drawitemstruct) topic.

### Remarks

Override this method to use your own code to draw a button.

## <a name="ondrawborder"></a> CMFCButton::OnDrawBorder

Called by the framework to draw the border of a button.

```
virtual void OnDrawBorder(
    CDC* pDC,
    CRect& rectClient,
    UINT uiState);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectClient*<br/>
[in] A reference to a rectangle that bounds the button.

*uiState*<br/>
[in] The current button state. For more information, see the `itemState` member of the [DRAWITEMSTRUCT Structure](/windows/win32/api/winuser/ns-winuser-drawitemstruct) topic.

### Remarks

Override this method to use your own code to draw the border.

## <a name="ondrawfocusrect"></a> CMFCButton::OnDrawFocusRect

Called by the framework to draw the focus rectangle for a button.

```
virtual void OnDrawFocusRect(
    CDC* pDC,
    const CRect& rectClient);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectClient*<br/>
[in] A reference to a rectangle that bounds the button.

### Remarks

Override this method to use your own code to draw the focus rectangle.

## <a name="ondrawtext"></a> CMFCButton::OnDrawText

Called by the framework to draw the button text.

```
virtual void OnDrawText(
    CDC* pDC,
    const CRect& rect,
    const CString& strText,
    UINT uiDTFlags,
    UINT uiState);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rect*<br/>
[in] A reference to a rectangle that bounds the button.

*strText*<br/>
[in] The text to draw.

*uiDTFlags*<br/>
[in] Flags that specify how to format the text. For more information, see the *nFormat* parameter of the [CDC::DrawText](../../mfc/reference/cdc-class.md#drawtext) method.

*uiState*<br/>
[in] Reserved.

### Remarks

Override this method to use your own code to draw the button text.

## <a name="onfillbackground"></a> CMFCButton::OnFillBackground

Called by the framework to draw the background of the button text.

```
virtual void OnFillBackground(
    CDC* pDC,
    const CRect& rectClient);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

*rectClient*<br/>
[in] A reference to a rectangle that bounds the button.

### Remarks

Override this method to use your own code to draw the background of a button.

## <a name="selectfont"></a> CMFCButton::SelectFont

Retrieves the font that is associated with the specified device context.

```
virtual CFont* SelectFont(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] A pointer to a device context.

### Return Value

Override this method to use your own code to retrieve the font.

### Remarks

## <a name="setautorepeatmode"></a> CMFCButton::SetAutorepeatMode

Sets a button to auto-repeat mode.

```cpp
void SetAutorepeatMode(int nTimeDelay=500);
```

### Parameters

*nTimeDelay*<br/>
[in] A nonnegative number that specifies the interval between messages that are sent to the parent window. The interval is measured in milliseconds and its default value is 500 milliseconds. Specify zero to disable auto-repeat message mode.

### Remarks

This method causes the button to constantly send WM_COMMAND messages to the parent window until the button is released, or the *nTimeDelay* parameter is set to zero.

## <a name="setcheckedimage"></a> CMFCButton::SetCheckedImage

Sets the image for a checked button.

```cpp
void SetCheckedImage(
    HICON hIcon,
    BOOL bAutoDestroy=TRUE,
    HICON hIconHot=NULL,
    HICON hIconDisabled=NULL,
    BOOL bAlphaBlend=FALSE);

void SetCheckedImage(
    HBITMAP hBitmap,
    BOOL bAutoDestroy=TRUE,
    HBITMAP hBitmapHot=NULL,
    BOOL bMap3dColors=TRUE,
    HBITMAP hBitmapDisabled=NULL);

void SetCheckedImage(
    UINT uiBmpResId,
    UINT uiBmpHotResId=0,
    UINT uiBmpDsblResID=0);
```

### Parameters

*hIcon*<br/>
[in] Handle to the icon that contains the bitmap and mask for the new image.

*bAutoDestroy*<br/>
[in] TRUE to specify that bitmap resources be destroyed automatically; otherwise, FALSE. The default is TRUE.

*hIconHot*<br/>
[in] Handle to the icon that contains the image for the selected state.

*hBitmap*<br/>
[in] Handle to the bitmap that contains the image for the non-selected state.

*hBitmapHot*<br/>
[in] Handle to the bitmap that contains the image for the selected state.

*bMap3dColors*<br/>
[in] Specifies a transparent color for the button background; that is, the face of the button. TRUE to use the color value RGB(192, 192, 192); FALSE to use the color value defined by `AFX_GLOBAL_DATA::clrBtnFace`.

*uiBmpResId*<br/>
[in] Resource ID for the non-selected image.

*uiBmpHotResId*<br/>
[in] Resource ID for the selected image.

*hIconDisabled*<br/>
[in] Handle to the icon for the disabled image.

*hBitmapDisabled*<br/>
[in] Handle to the bitmap that contains the disabled image.

*uiBmpDsblResID*<br/>
[in] Resource ID of the disabled bitmap.

*bAlphaBlend*<br/>
[in] TRUE to use only 32-bit images that use the alpha channel; FALSE, to not use only alpha channel images. The default is FALSE.

### Remarks

## <a name="setfacecolor"></a> CMFCButton::SetFaceColor

Sets the background color for the button text.

```cpp
void SetFaceColor(
    COLORREF crFace,
    BOOL bRedraw=TRUE);
```

### Parameters

*crFace*<br/>
[in] An RGB color value.

*bRedraw*<br/>
[in] TRUE to redraw the screen immediately; otherwise, FALSE.

### Remarks

Use this method to define a new fill color for the button background (face). Note that the background is not filled when the [CMFCButton::m_bTransparent](#m_btransparent) member variable is TRUE.

## <a name="setimage"></a> CMFCButton::SetImage

Sets the image for a button.

```cpp
void SetImage(
    HICON hIcon,
    BOOL bAutoDestroy=TRUE,
    HICON hIconHot=NULL,
    HICON hIconDisabled=NULL,
    BOOL bAlphaBlend=FALSE);

void SetImage(
    HBITMAP hBitmap,
    BOOL bAutoDestroy=TRUE,
    HBITMAP hBitmapHot=NULL,
    BOOL bMap3dColors=TRUE,
    HBITMAP hBitmapDisabled=NULL);

void SetImage(
    UINT uiBmpResId,
    UINT uiBmpHotResId=0,
    UINT uiBmpDsblResID=0);
```

### Parameters

*hIcon*<br/>
[in] Handle to the icon that contains the bitmap and mask for the new image.

*bAutoDestroy*<br/>
[in] TRUE to specify that bitmap resources be destroyed automatically; otherwise, FALSE. The default is TRUE.

*hIconHot*<br/>
[in] Handle to the icon that contains the image for the selected state.

*hBitmap*<br/>
[in] Handle to the bitmap that contains the image for the non-selected state.

*hBitmapHot*<br/>
[in] Handle to the bitmap that contains the image for the selected state.

*uiBmpResId*<br/>
[in] Resource ID for the non-selected image.

*uiBmpHotResId*<br/>
[in] Resource ID for the selected image.

*bMap3dColors*<br/>
[in] Specifies a transparent color for the button background; that is, the face of the button. TRUE to use the color value RGB(192, 192, 192); FALSE to use the color value defined by `AFX_GLOBAL_DATA::clrBtnFace`.

*hIconDisabled*<br/>
[in] Handle to the icon for the disabled image.

*hBitmapDisabled*<br/>
[in] Handle to the bitmap that contains the disabled image.

*uiBmpDsblResID*<br/>
[in] Resource ID of the disabled bitmap.

*bAlphaBlend*<br/>
[in] TRUE to use only 32-bit images that use the alpha channel; FALSE, to not use only alpha channel images. The default is FALSE.

### Remarks

### Example

The following example demonstrates how to use various versions of the `SetImage` method in the `CMFCButton` class. The example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]

## <a name="setmousecursor"></a> CMFCButton::SetMouseCursor

Sets the cursor image.

```cpp
void SetMouseCursor(HCURSOR hcursor);
```

### Parameters

*hcursor*<br/>
[in] The handle of a cursor.

### Remarks

Use this method to associate a cursor image, such as the hand cursor, with the button. The cursor is loaded from the application resources.

### Example

The following example demonstrates how to use the `SetMouseCursor` method in the `CMFCButton` class. The example is part of the code in the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#30](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_6.cpp)]

## <a name="setmousecursorhand"></a> CMFCButton::SetMouseCursorHand

Sets the cursor to the image of a hand.

```cpp
void SetMouseCursorHand();
```

### Remarks

Use this method to associate the cursor image of a hand with the button. The cursor is loaded from the application resources.

## <a name="setstdimage"></a> CMFCButton::SetStdImage

Uses a `CMenuImages` object to set the button image.

```cpp
void SetStdImage(
    CMenuImages::IMAGES_IDS id,
    CMenuImages::IMAGE_STATE state=CMenuImages::ImageBlack,
    CMenuImages::IMAGES_IDS idDisabled=(CMenuImages::IMAGES_IDS)0);
```

### Parameters

*id*<br/>
[in] One of the button image identifiers that is defined in the `CMenuImage::IMAGES_IDS` enumeration. The image values specify images such as arrows, pins, and radio buttons.

*state*<br/>
[in] One of the button image state identifiers that is defined in the `CMenuImages::IMAGE_STATE` enumeration. The image states specify button colors such as black, gray, light gray, white, and dark gray. The default value is `CMenuImages::ImageBlack`.

*idDisabled*<br/>
[in] One of the button image identifiers that is defined in the `CMenuImage::IMAGES_IDS` enumeration. The image indicates that the button is disabled. The default value is the first button image ( `CMenuImages::IdArrowDown`).

### Remarks

## <a name="settextcolor"></a> CMFCButton::SetTextColor

Sets the color of the button text for a button that is not selected.

```cpp
void SetTextColor(COLORREF clrText);
```

### Parameters

*clrText*<br/>
[in] An RGB color value.

### Remarks

## <a name="settexthotcolor"></a> CMFCButton::SetTextHotColor

Sets the color of the button text for a button that is selected.

```cpp
void SetTextHotColor(COLORREF clrTextHot);
```

### Parameters

*clrTextHot*<br/>
[in] An RGB color value.

### Remarks

## <a name="settooltip"></a> CMFCButton::SetTooltip

Associates a tooltip with a button.

```cpp
void SetTooltip(LPCTSTR lpszToolTipText);
```

### Parameters

*lpszToolTipText*<br/>
[in] Pointer to the text for the tooltip. Specify NULL to disable the tooltip.

### Remarks

## <a name="sizetocontent"></a> CMFCButton::SizeToContent

Resizes a button to contain its button text and image.

```
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```

### Parameters

*bCalcOnly*<br/>
[in] TRUE to calculate, but not change, the new size of the button; FALSE to change the size of the button. The default is FALSE.

### Return Value

A `CSize` object that contains the new size of the button.

### Remarks

By default, this method calculates a new size that includes a horizontal margin of 10 pixels and a vertical margin of 5 pixels.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCLinkCtrl Class](../../mfc/reference/cmfclinkctrl-class.md)<br/>
[CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md)<br/>
[CMFCMenuButton Class](../../mfc/reference/cmfcmenubutton-class.md)
