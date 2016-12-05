---
title: "CMFCButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCButton::CreateObject method"
  - "CMFCButton::DrawItem method"
  - "CMFCButton::PreTranslateMessage method"
  - "CMFCButton constructor"
  - "CMFCButton::OnDrawParentBackground method"
  - "CMFCButton class"
ms.assetid: 4b32f57c-7a53-4734-afb9-d47e3359f62e
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CMFCButton::CleanUp](#cmfcbutton__cleanup)|Resets internal variables and frees allocated resources such as images, bitmaps, and icons.|  
|`CMFCButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCButton::DrawItem`|Called by the framework when a visual aspect of an owner-drawn button has changed. (Overrides [CButton::DrawItem](../../mfc/reference/cbutton-class.md#cbutton__drawitem).)|  
|[CMFCButton::EnableFullTextTooltip](#cmfcbutton__enablefulltexttooltip)|Specifies whether to display the full text of a tooltip in a large tooltip window or a truncated version of the text in a small tooltip window.|  
|[CMFCButton::EnableMenuFont](#cmfcbutton__enablemenufont)|Specifies whether the button text font is the same as the application menu font.|  
|[CMFCButton::EnableWindowsTheming](#cmfcbutton__enablewindowstheming)|Specifies whether the style of the button border corresponds to the current Windows theme.|  
|`CMFCButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCButton::GetToolTipCtrl](#cmfcbutton__gettooltipctrl)|Returns a reference to the underlying tooltip control.|  
|[CMFCButton::IsAutoCheck](#cmfcbutton__isautocheck)|Indicates whether a check box or radio button is an automatic button.|  
|[CMFCButton::IsAutorepeatCommandMode](#cmfcbutton__isautorepeatcommandmode)|Indicates whether a button is set to auto-repeat mode.|  
|[CMFCButton::IsCheckBox](#cmfcbutton__ischeckbox)|Indicates whether a button is a check box button.|  
|[CMFCButton::IsChecked](#cmfcbutton__ischecked)|Indicates whether the current button is checked.|  
|[CMFCButton::IsHighlighted](#cmfcbutton__ishighlighted)|Indicates whether a button is highlighted.|  
|[CMFCButton::IsPressed](#cmfcbutton__ispressed)|Indicates whether a button is pushed and highlighted.|  
|[CMFCButton::IsPushed](#cmfcbutton__ispushed)|Indicates whether a button is pushed.|  
|[CMFCButton::IsRadioButton](#cmfcbutton__isradiobutton)|Indicates whether a button is a radio button.|  
|[CMFCButton::IsWindowsThemingEnabled](#cmfcbutton__iswindowsthemingenabled)|Indicates whether the style of the button border corresponds to the current Windows theme.|  
|`CMFCButton::OnDrawParentBackground`|Draws the background of a button's parent in the specified area. (Overrides [AFX_GLOBAL_DATA::DrawParentBackground](../../mfc/reference/afx-global-data-structure.md)|  
|`CMFCButton::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage).)|  
|[CMFCButton::SetAutorepeatMode](#cmfcbutton__setautorepeatmode)|Sets a button to auto-repeat mode.|  
|[CMFCButton::SetCheckedImage](#cmfcbutton__setcheckedimage)|Sets the image for a checked button.|  
|[CMFCButton::SetFaceColor](#cmfcbutton__setfacecolor)|Sets the background color for the button text.|  
|[CMFCButton::SetImage](#cmfcbutton__setimage)|Sets the image for a button.|  
|[CMFCButton::SetMouseCursor](#cmfcbutton__setmousecursor)|Sets the cursor image.|  
|[CMFCButton::SetMouseCursorHand](#cmfcbutton__setmousecursorhand)|Sets the cursor to the image of a hand.|  
|[CMFCButton::SetStdImage](#cmfcbutton__setstdimage)|Uses a `CMenuImages` object to set the button image.|  
|[CMFCButton::SetTextColor](#cmfcbutton__settextcolor)|Sets the color of the button text for a button that is not selected.|  
|[CMFCButton::SetTextHotColor](#cmfcbutton__settexthotcolor)|Sets the color of the button text for a button that is selected.|  
|[CMFCButton::SetTooltip](#cmfcbutton__settooltip)|Associates a tooltip with a button.|  
|[CMFCButton::SizeToContent](#cmfcbutton__sizetocontent)|Resizes a button to contain its button text and image.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCButton::OnDraw](#cmfcbutton__ondraw)|Called by the framework to draw a button.|  
|[CMFCButton::OnDrawBorder](#cmfcbutton__ondrawborder)|Called by the framework to draw the border of a button.|  
|[CMFCButton::OnDrawFocusRect](#cmfcbutton__ondrawfocusrect)|Called by the framework to draw the focus rectangle for a button.|  
|[CMFCButton::OnDrawText](#cmfcbutton__ondrawtext)|Called by the framework to draw the button text.|  
|[CMFCButton::OnFillBackground](#cmfcbutton__onfillbackground)|Called by the framework to draw the background of the button text.|  
|[CMFCButton::SelectFont](#cmfcbutton__selectfont)|Retrieves the font that is associated with the specified device context.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCButton::m_bDrawFocus](#cmfcbutton__m_bdrawfocus)|Indicates whether to draw a focus rectangle around a button.|  
|[CMFCButton::m_bHighlightChecked](#cmfcbutton__m_bhighlightchecked)|Indicates whether to highlight a BS_CHECKBOX-style button when the cursor hovers over it.|  
|[CMFCButton::m_bRightImage](#cmfcbutton__m_brightimage)|Indicates whether to display an image on the right side of the button.|  
|[CMFCButton::m_bTransparent](#cmfcbutton__m_btransparent)|Indicates whether the button is transparent.|  
|[CMFCButton::m_nAlignStyle](#cmfcbutton__m_nalignstyle)|Specifies the alignment of the button text.|  
|[CMFCButton::m_nFlatStyle](#cmfcbutton__m_nflatstyle)|Specifies the style of the button, such as borderless, flat, semi-flat, or 3D.|  
  
## Remarks  
 Other types of buttons are derived from the `CMFCButton` class, such as the [CMFCURLLinkButton](../../mfc/reference/cmfclinkctrl-class.md) class, which supports hyperlinks, and the `CMFCColorButton` class, which supports a color picker dialog box.  
  
 The style of a `CMFCButton` object can be *3D*, *flat*, *semi-flat* or *no border*. Button text can be aligned at the left, top, or center of a button. At run time, you can control whether the button displays text, an image, or text and an image. You can also specify that a particular cursor image be displayed when the cursor hovers over a button.  
  
 Create a button control either directly in your code, or by using the **MFC Class Wizard** tool and a dialog box template. If you create a button control directly, add a `CMFCButton` variable to your application, and then call the constructor and `Create` methods of the `CMFCButton` object. If you use the **MFC Class Wizard**, add a `CButton` variable to your application, and then change the type of the variable from `CButton` to `CMFCButton`.  
  
 To handle notification messages in a dialog box application, add a message map entry and an event handler for each notification. The notifications sent by a `CMFCButton` object are the same as those sent by a `CButton` object.  
  
## Example  
 The following example demonstrates how to configure the properties of the button by using various methods in the `CMFCButton` class. The example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
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
  
##  <a name="cmfcbutton__cleanup"></a>  CMFCButton::CleanUp  
 Resets internal variables and frees allocated resources such as images, bitmaps, and icons.  
  
```  
virtual void CleanUp();
```  
  
##  <a name="cmfcbutton__enablefulltexttooltip"></a>  CMFCButton::EnableFullTextTooltip  
 Specifies whether to display the full text of a tooltip in a large tooltip window or a truncated version of the text in a small tooltip window.  
  
```  
void EnableFullTextTooltip(BOOL bOn=TRUE);
```  
  
### Parameters  
 [in] `bOn`  
 `TRUE` to display all of the text; `FALSE` to display truncated text.  
  
### Remarks  
  
##  <a name="cmfcbutton__enablemenufont"></a>  CMFCButton::EnableMenuFont  
 Specifies whether the button text font is the same as the application menu font.  
  
```  
void EnableMenuFont(
    BOOL bOn=TRUE,  
    BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `bOn`  
 `TRUE` to use the application menu font as the button text font; `FALSE` to use the system font. The default is `TRUE`.  
  
 [in] `bRedraw`  
 `TRUE` to immediately redraw the screen; otherwise, `FALSE`. The default is `TRUE`.  
  
### Remarks  
 If you do not use this method to specify the button text font, you can specify the font with the [CWnd::SetFont](../../mfc/reference/cwnd-class.md#cwnd__setfont) method. If you do not specify a font at all, the framework sets a default font.  
  
##  <a name="cmfcbutton__enablewindowstheming"></a>  CMFCButton::EnableWindowsTheming  
 Specifies whether the style of the button border corresponds to the current Windows theme.  
  
```  
static void EnableWindowsTheming(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to use the current Windows theme to draw button borders; `FALSE` to not use the Windows theme. The default is `TRUE`.  
  
### Remarks  
 This method affects all buttons in your application that are derived from the `CMFCButton` class.  
  
##  <a name="cmfcbutton__gettooltipctrl"></a>  CMFCButton::GetToolTipCtrl  
 Returns a reference to the underlying tooltip control.  
  
```  
CToolTipCtrl& GetToolTipCtrl();
```  
  
### Return Value  
 A reference to the underlying tooltip control.  
  
### Remarks  
  
##  <a name="cmfcbutton__isautocheck"></a>  CMFCButton::IsAutoCheck  
 Indicates whether a check box or radio button is an automatic button.  
  
```  
BOOL IsAutoCheck() const;

 
```  
  
### Return Value  
 `TRUE` if the button has style BS_AUTOCHECKBOX or BS_AUTORADIOBUTTON; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcbutton__isautorepeatcommandmode"></a>  CMFCButton::IsAutorepeatCommandMode  
 Indicates whether a button is set to auto-repeat mode.  
  
```  
BOOL IsAutorepeatCommandMode() const;

 
```  
  
### Return Value  
 TRUE if the button is set to auto-repeat mode; otherwise, FALSE.  
  
### Remarks  
 Use the [CMFCButton::SetAutorepeatMode](#cmfcbutton__setautorepeatmode) method to set a button to auto-repeat mode.  
  
##  <a name="cmfcbutton__ischeckbox"></a>  CMFCButton::IsCheckBox  
 Indicates whether a button is a check box button.  
  
```  
BOOL IsCheckBox() const;

 
```  
  
### Return Value  
 TRUE if the button has either BS_CHECKBOX or BS_AUTOCHECKBOX style; otherwise, FALSE.  
  
### Remarks  
  
##  <a name="cmfcbutton__ischecked"></a>  CMFCButton::IsChecked  
 Indicates whether the current button is checked.  
  
```  
BOOL IsChecked() const;

 
```  
  
### Return Value  
 `TRUE` if the current button is checked; otherwise, `FALSE`.  
  
### Remarks  
 The framework uses different ways to indicate that different kinds of buttons are checked. For example, a radio button is checked when it contains a dot; a check box is checked when it contains an **X**.  
  
##  <a name="cmfcbutton__ishighlighted"></a>  CMFCButton::IsHighlighted  
 Indicates whether a button is highlighted.  
  
```  
BOOL IsHighlighted() const;

 
```  
  
### Return Value  
 TRUE if the button is highlighted; otherwise, FALSE.  
  
### Remarks  
 A button becomes highlighted when the mouse hovers over the button.  
  
##  <a name="cmfcbutton__ispressed"></a>  CMFCButton::IsPressed  
 Indicates whether a button is pushed and highlighted.  
  
```  
BOOL IsPressed() const;

 
```  
  
### Return Value  
 TRUE if the button is pressed; otherwise, FALSE.  
  
### Remarks  
  
##  <a name="cmfcbutton__ispushed"></a>  CMFCButton::IsPushed  
 Indicates whether a button is pushed.  
  
```  
BOOL IsPushed() const;

 
```  
  
### Return Value  
 TRUE if the button is pushed; otherwise, FALSE.  
  
### Remarks  
  
##  <a name="cmfcbutton__isradiobutton"></a>  CMFCButton::IsRadioButton  
 Indicates whether a button is a radio button.  
  
```  
BOOL IsRadioButton() const;

 
```  
  
### Return Value  
 TRUE if the button style is BS_RADIOBUTTON or BS_AUTORADIOBUTTON; otherwise, FALSE.  
  
### Remarks  
  
##  <a name="cmfcbutton__iswindowsthemingenabled"></a>  CMFCButton::IsWindowsThemingEnabled  
 Indicates whether the style of the button border corresponds to the current Windows theme.  
  
```  
static BOOL IsWindowsThemingEnabled();
```  
  
### Return Value  
 `TRUE` if the style of the button border corresponds to the current Windows theme; otherwise, `FALSE`.  
  
##  <a name="cmfcbutton__m_bdrawfocus"></a>  CMFCButton::m_bDrawFocus  
 Indicates whether to draw a focus rectangle around a button.  
  
```  
BOOL m_bDrawFocus;  
```  
  
### Remarks  
 Set the `m_bDrawFocus` member to `TRUE` to specify that the framework will draw a focus rectangle around the button's text and image if the button receives focus.  
  
 The `CMFCButton` constructor initializes this member to `TRUE`.  
  
##  <a name="cmfcbutton__m_bhighlightchecked"></a>  CMFCButton::m_bHighlightChecked  
 Indicates whether to highlight a BS_CHECKBOX-style button when the cursor hovers over it.  
  
```  
BOOL m_bHighlightChecked;  
```  
  
### Remarks  
 Set the `m_bHighlightChecked` member to `TRUE` to specify that the framework will highlight a BS_CHECKBOX-style button when the mouse hovers over it.  
  
##  <a name="cmfcbutton__m_brightimage"></a>  CMFCButton::m_bRightImage  
 Indicates whether to display an image on the right side of the button.  
  
```  
BOOL m_bRightImage;  
```  
  
### Remarks  
 Set the `m_bRightImage` member to `TRUE` to specify that the framework will display the button's image to the right of the button's text label.  
  
##  <a name="cmfcbutton__m_btransparent"></a>  CMFCButton::m_bTransparent  
 Indicates whether the button is transparent.  
  
```  
BOOL m_bTransparent;  
```  
  
### Remarks  
 Set the `m_bTransparent` member to `TRUE` to specify that the framework will make the button transparent. The `CMFCButton` constructor initializes this member to `FALSE`.  
  
##  <a name="cmfcbutton__m_nalignstyle"></a>  CMFCButton::m_nAlignStyle  
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
  
##  <a name="cmfcbutton__m_nflatstyle"></a>  CMFCButton::m_nFlatStyle  
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
  
 The `CMFCButton` constructor initializes this member to `BUTTONSTYLE_3D`.  
  
### Example  
 The following example demonstrates how to set the values of the `m_nFlatStyle` member variable in the `CMFCButton` class. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#29](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_5.cpp)]  
  
##  <a name="cmfcbutton__ondraw"></a>  CMFCButton::OnDraw  
 Called by the framework to draw a button.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    UINT uiState);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A reference to a rectangle that bounds the button.  
  
 [in] `uiState`  
 The current button state. For more information, see the `itemState` member of the [DRAWITEMSTRUCT Structure](../../mfc/reference/drawitemstruct-structure.md) topic.  
  
### Remarks  
 Override this method to use your own code to draw a button.  
  
##  <a name="cmfcbutton__ondrawborder"></a>  CMFCButton::OnDrawBorder  
 Called by the framework to draw the border of a button.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect& rectClient,  
    UINT uiState);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 A reference to a rectangle that bounds the button.  
  
 [in] `uiState`  
 The current button state. For more information, see the `itemState` member of the [DRAWITEMSTRUCT Structure](../../mfc/reference/drawitemstruct-structure.md) topic.  
  
### Remarks  
 Override this method to use your own code to draw the border.  
  
##  <a name="cmfcbutton__ondrawfocusrect"></a>  CMFCButton::OnDrawFocusRect  
 Called by the framework to draw the focus rectangle for a button.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 A reference to a rectangle that bounds the button.  
  
### Remarks  
 Override this method to use your own code to draw the focus rectangle.  
  
##  <a name="cmfcbutton__ondrawtext"></a>  CMFCButton::OnDrawText  
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
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 A reference to a rectangle that bounds the button.  
  
 [in] `strText`  
 The text to draw.  
  
 [in] `uiDTFlags`  
 Flags that specify how to format the text. For more information, see the `nFormat` parameter of the [CDC::DrawText](../../mfc/reference/cdc-class.md#cdc__drawtext) method.  
  
 [in] `uiState`  
 (Reserved.)  
  
### Remarks  
 Override this method to use your own code to draw the button text.  
  
##  <a name="cmfcbutton__onfillbackground"></a>  CMFCButton::OnFillBackground  
 Called by the framework to draw the background of the button text.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 A reference to a rectangle that bounds the button.  
  
### Remarks  
 Override this method to use your own code to draw the background of a button.  
  
##  <a name="cmfcbutton__selectfont"></a>  CMFCButton::SelectFont  
 Retrieves the font that is associated with the specified device context.  
  
```  
virtual CFont* SelectFont(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Return Value  
 Override this method to use your own code to retrieve the font.  
  
### Remarks  
  
##  <a name="cmfcbutton__setautorepeatmode"></a>  CMFCButton::SetAutorepeatMode  
 Sets a button to auto-repeat mode.  
  
```  
void SetAutorepeatMode(int nTimeDelay=500);
```  
  
### Parameters  
 [in] `nTimeDelay`  
 A nonnegative number that specifies the interval between messages that are sent to the parent window. The interval is measured in milliseconds and its default value is 500 milliseconds. Specify zero to disable auto-repeat message mode.  
  
### Remarks  
 This method causes the button to constantly send WM_COMMAND messages to the parent window until the button is released, or the `nTimeDelay` parameter is set to zero.  
  
##  <a name="cmfcbutton__setcheckedimage"></a>  CMFCButton::SetCheckedImage  
 Sets the image for a checked button.  
  
```  
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
 [in] `hIcon`  
 Handle to the icon that contains the bitmap and mask for the new image.  
  
 [in] `bAutoDestroy`  
 `TRUE` to specify that bitmap resources be destroyed automatically; otherwise, `FALSE`. The default is `TRUE`.  
  
 [in] `hIconHot`  
 Handle to the icon that contains the image for the selected state.  
  
 [in] `hBitmap`  
 Handle to the bitmap that contains the image for the non-selected state.  
  
 [in] `hBitmapHot`  
 Handle to the bitmap that contains the image for the selected state.  
  
 [in] `bMap3dColors`  
 Specifies a transparent color for the button background; that is, the face of the button. `TRUE` to use the color value RGB(192, 192, 192); `FALSE` to use the color value defined by `AFX_GLOBAL_DATA::clrBtnFace`.  
  
 [in] `uiBmpResId`  
 Resource ID for the non-selected image.  
  
 [in] `uiBmpHotResId`  
 Resource ID for the selected image.  
  
 [in] `hIconDisabled`  
 Handle to the icon for the disabled image.  
  
 [in] `hBitmapDisabled`  
 Handle to the bitmap that contains the disabled image.  
  
 [in] `uiBmpDsblResID`  
 Resource ID of the disabled bitmap.  
  
 [in] `bAlphaBlend`  
 `TRUE` to use only 32-bit images that use the alpha channel; `FALSE`, to not use only alpha channel images. The default is `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcbutton__setfacecolor"></a>  CMFCButton::SetFaceColor  
 Sets the background color for the button text.  
  
```  
void SetFaceColor(
    COLORREF crFace,  
    BOOL bRedraw=TRUE);
```  
  
### Parameters  
 [in] `crFace`  
 An RGB color value.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the screen immediately; otherwise, `FALSE`.  
  
### Remarks  
 Use this method to define a new fill color for the button background (face). Note that the background is not filled when the [CMFCButton::m_bTransparent](#cmfcbutton__m_btransparent) member variable is `TRUE`.  
  
##  <a name="cmfcbutton__setimage"></a>  CMFCButton::SetImage  
 Sets the image for a button.  
  
```  
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
 [in] `hIcon`  
 Handle to the icon that contains the bitmap and mask for the new image.  
  
 [in] `bAutoDestroy`  
 `TRUE` to specify that bitmap resources be destroyed automatically; otherwise, `FALSE`. The default is `TRUE`.  
  
 [in] `hIconHot`  
 Handle to the icon that contains the image for the selected state.  
  
 [in] `hBitmap`  
 Handle to the bitmap that contains the image for the non-selected state.  
  
 [in] `hBitmapHot`  
 Handle to the bitmap that contains the image for the selected state.  
  
 [in] `uiBmpResId`  
 Resource ID for the non-selected image.  
  
 [in] `uiBmpHotResId`  
 Resource ID for the selected image.  
  
 [in] `bMap3dColors`  
 Specifies a transparent color for the button background; that is, the face of the button. `TRUE` to use the color value RGB(192, 192, 192); `FALSE` to use the color value defined by `AFX_GLOBAL_DATA::clrBtnFace`.  
  
 [in] `hIconDisabled`  
 Handle to the icon for the disabled image.  
  
 [in] `hBitmapDisabled`  
 Handle to the bitmap that contains the disabled image.  
  
 [in] `uiBmpDsblResID`  
 Resource ID of the disabled bitmap.  
  
 [in] `bAlphaBlend`  
 `TRUE` to use only 32-bit images that use the alpha channel; `FALSE`, to not use only alpha channel images. The default is `FALSE`.  
  
### Remarks  
  
### Example  
 The following example demonstrates how to use various versions of the `SetImage` method in the `CMFCButton` class. The example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#31](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_2.cpp)]  
  
##  <a name="cmfcbutton__setmousecursor"></a>  CMFCButton::SetMouseCursor  
 Sets the cursor image.  
  
```  
void SetMouseCursor(HCURSOR hcursor);
```  
  
### Parameters  
 [in] `hcursor`  
 The handle of a cursor.  
  
### Remarks  
 Use this method to associate a cursor image, such as the hand cursor, with the button. The cursor is loaded from the application resources.  
  
### Example  
 The following example demonstrates how to use the `SetMouseCursor` method in the `CMFCButton` class. The example is part of the code in the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#28](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#30](../../mfc/reference/codesnippet/cpp/cmfcbutton-class_6.cpp)]  
  
##  <a name="cmfcbutton__setmousecursorhand"></a>  CMFCButton::SetMouseCursorHand  
 Sets the cursor to the image of a hand.  
  
```  
void SetMouseCursorHand();
```  
  
### Remarks  
 Use this method to associate the cursor image of a hand with the button. The cursor is loaded from the application resources.  
  
##  <a name="cmfcbutton__setstdimage"></a>  CMFCButton::SetStdImage  
 Uses a `CMenuImages` object to set the button image.  
  
```  
void SetStdImage(
    CMenuImages::IMAGES_IDS id,  
    CMenuImages::IMAGE_STATE state=CMenuImages::ImageBlack,  
    CMenuImages::IMAGES_IDS idDisabled=(CMenuImages::IMAGES_IDS)0);
```  
  
### Parameters  
 [in] `id`  
 One of the button image identifiers that is defined in the `CMenuImage::IMAGES_IDS` enumeration. The image values specify images such as arrows, pins, and radio buttons.  
  
 [in] `state`  
 One of the button image state identifiers that is defined in the `CMenuImages::IMAGE_STATE` enumeration. The image states specify button colors such as black, gray, light gray, white, and dark gray. The default value is `CMenuImages::ImageBlack`.  
  
 [in] `idDisabled`  
 One of the button image identifiers that is defined in the `CMenuImage::IMAGES_IDS` enumeration. The image indicates that the button is disabled. The default value is the first button image ( `CMenuImages::IdArrowDown`).  
  
### Remarks  
  
##  <a name="cmfcbutton__settextcolor"></a>  CMFCButton::SetTextColor  
 Sets the color of the button text for a button that is not selected.  
  
```  
void SetTextColor(COLORREF clrText);
```  
  
### Parameters  
 [in] `clrText`  
 An RGB color value.  
  
### Remarks  
  
##  <a name="cmfcbutton__settexthotcolor"></a>  CMFCButton::SetTextHotColor  
 Sets the color of the button text for a button that is selected.  
  
```  
void SetTextHotColor(COLORREF clrTextHot);
```  
  
### Parameters  
 [in] `clrTextHot`  
 An RGB color value.  
  
### Remarks  
  
##  <a name="cmfcbutton__settooltip"></a>  CMFCButton::SetTooltip  
 Associates a tooltip with a button.  
  
```  
void SetTooltip(LPCTSTR lpszToolTipText);
```  
  
### Parameters  
 [in] `lpszToolTipText`  
 Pointer to the text for the tooltip. Specify NULL to disable the tooltip.  
  
### Remarks  
  
##  <a name="cmfcbutton__sizetocontent"></a>  CMFCButton::SizeToContent  
 Resizes a button to contain its button text and image.  
  
```  
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```  
  
### Parameters  
 [in] `bCalcOnly`  
 `TRUE` to calculate, but not change, the new size of the button; `FALSE` to change the size of the button. The default is `FALSE`.  
  
### Return Value  
 A `CSize` object that contains the new size of the button.  
  
### Remarks  
 By default, this method calculates a new size that includes a horizontal margin of 10 pixels and a vertical margin of 5 pixels.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCLinkCtrl Class](../../mfc/reference/cmfclinkctrl-class.md)   
 [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md)   
 [CMFCMenuButton Class](../../mfc/reference/cmfcmenubutton-class.md)
