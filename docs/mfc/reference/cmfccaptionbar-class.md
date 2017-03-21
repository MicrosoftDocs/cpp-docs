---
title: "CMFCCaptionBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CMFCCaptionBar', 'AFXCAPTIONBAR/CMFCCaptionBar', 'AFXCAPTIONBAR/CMFCCaptionBar::Create', 'AFXCAPTIONBAR/CMFCCaptionBar::DoesAllowDynInsertBefore', 'AFXCAPTIONBAR/CMFCCaptionBar::EnableButton', 'AFXCAPTIONBAR/CMFCCaptionBar::GetAlignment', 'AFXCAPTIONBAR/CMFCCaptionBar::GetBorderSize', 'AFXCAPTIONBAR/CMFCCaptionBar::GetButtonRect', 'AFXCAPTIONBAR/CMFCCaptionBar::GetMargin', 'AFXCAPTIONBAR/CMFCCaptionBar::IsMessageBarMode', 'AFXCAPTIONBAR/CMFCCaptionBar::RemoveBitmap', 'AFXCAPTIONBAR/CMFCCaptionBar::RemoveButton', 'AFXCAPTIONBAR/CMFCCaptionBar::RemoveIcon', 'AFXCAPTIONBAR/CMFCCaptionBar::RemoveText', 'AFXCAPTIONBAR/CMFCCaptionBar::SetBitmap', 'AFXCAPTIONBAR/CMFCCaptionBar::SetBorderSize', 'AFXCAPTIONBAR/CMFCCaptionBar::SetButton', 'AFXCAPTIONBAR/CMFCCaptionBar::SetButtonPressed', 'AFXCAPTIONBAR/CMFCCaptionBar::SetButtonToolTip', 'AFXCAPTIONBAR/CMFCCaptionBar::SetFlatBorder', 'AFXCAPTIONBAR/CMFCCaptionBar::SetIcon', 'AFXCAPTIONBAR/CMFCCaptionBar::SetImageToolTip', 'AFXCAPTIONBAR/CMFCCaptionBar::SetMargin', 'AFXCAPTIONBAR/CMFCCaptionBar::SetText', 'AFXCAPTIONBAR/CMFCCaptionBar::OnDrawBackground', 'AFXCAPTIONBAR/CMFCCaptionBar::OnDrawBorder', 'AFXCAPTIONBAR/CMFCCaptionBar::OnDrawButton', 'AFXCAPTIONBAR/CMFCCaptionBar::OnDrawImage', 'AFXCAPTIONBAR/CMFCCaptionBar::OnDrawText', 'AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarBackground', 'AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarBorder', 'AFXCAPTIONBAR/CMFCCaptionBar::m_clrBarText']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCCaptionBar class"
ms.assetid: acb54d5f-14ff-4c96-aeb3-7717cf566d9a
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CMFCCaptionBar Class
A `CMFCCaptionBar` object is a control bar that can display three elements: a button, a text label, and a bitmap. It can only display one element of each type at a time. You can align each element to the left or right edges of the control or to the center. You can also apply a flat or 3D style to the top and bottom borders of the caption bar.  
  
## Syntax  
  
```  
class CMFCCaptionBar : public CPane  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCCaptionBar::Create](#create)|Creates the caption bar control and attaches it to the `CMFCCaptionBar` object.|  
|[CMFCCaptionBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Indicates whether another pane can be dynamically inserted between the caption bar and its parent frame. (Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CMFCCaptionBar::EnableButton](#enablebutton)|Enables or disables the button on the caption bar.|  
|[CMFCCaptionBar::GetAlignment](#getalignment)|Returns the alignment of the specified element.|  
|[CMFCCaptionBar::GetBorderSize](#getbordersize)|Returns the border size of the caption bar.|  
|[CMFCCaptionBar::GetButtonRect](#getbuttonrect)|Retrieves the bounding rectangle of the button on the caption bar.|  
|[CMFCCaptionBar::GetMargin](#getmargin)|Returns the distance between the edge of the caption bar elements and the edge of the caption bar control.|  
|[CMFCCaptionBar::IsMessageBarMode](#ismessagebarmode)|Specifies whether the caption bar is in the message bar mode.|  
|[CMFCCaptionBar::RemoveBitmap](#removebitmap)|Removes the bitmap image from the caption bar.|  
|[CMFCCaptionBar::RemoveButton](#removebutton)|Removes the button from the caption bar.|  
|[CMFCCaptionBar::RemoveIcon](#removeicon)|Removes the icon from the caption bar.|  
|[CMFCCaptionBar::RemoveText](#removetext)|Removes the text label from the caption bar.|  
|[CMFCCaptionBar::SetBitmap](#setbitmap)|Sets the bitmap image for the caption bar.|  
|[CMFCCaptionBar::SetBorderSize](#setbordersize)|Sets the border size of the caption bar.|  
|[CMFCCaptionBar::SetButton](#setbutton)|Sets the button for the caption bar.|  
|[CMFCCaptionBar::SetButtonPressed](#setbuttonpressed)|Specifies whether the button stays pressed.|  
|[CMFCCaptionBar::SetButtonToolTip](#setbuttontooltip)|Sets the tooltip for the button.|  
|[CMFCCaptionBar::SetFlatBorder](#setflatborder)|Sets the border style of the caption bar.|  
|[CMFCCaptionBar::SetIcon](#seticon)|Sets the icon for a caption bar.|  
|[CMFCCaptionBar::SetImageToolTip](#setimagetooltip)|Sets the tooltip for the image for the caption bar.|  
|[CMFCCaptionBar::SetMargin](#setmargin)|Sets the distance between the edge of the caption bar element and the edge of the caption bar control.|  
|[CMFCCaptionBar::SetText](#settext)|Sets the text label for the caption bar.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCCaptionBar::OnDrawBackground](#ondrawbackground)|Called by the framework to fill the background of the caption bar.|  
|[CMFCCaptionBar::OnDrawBorder](#ondrawborder)|Called by the framework to draw the border of the caption bar.|  
|[CMFCCaptionBar::OnDrawButton](#ondrawbutton)|Called by the framework to draw the caption bar button.|  
|[CMFCCaptionBar::OnDrawImage](#ondrawimage)|Called by the framework to draw the caption bar image.|  
|[CMFCCaptionBar::OnDrawText](#ondrawtext)|Called by the framework to draw the caption bar text.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground)|The background color of the caption bar.|  
|[CMFCCaptionBar::m_clrBarBorder](#m_clrbarborder)|The color of the border of the caption bar.|  
|[CMFCCaptionBar::m_clrBarText](#m_clrbartext)|The color of the caption bar text.|  
  
## Remarks  
 To create a caption bar, follow these steps:  
  
1.  Construct the `CMFCCaptionBar` object. Typically, you would add the caption bar to a frame window class.  
  
2.  Call the [CMFCCaptionBar::Create](#create) method to create the caption bar control and attach it to the `CMFCCaptionBar` object.  
  
3.  Call [CMFCCaptionBar::SetButton](#setbutton), [CMFCCaptionBar::SetText](#settext), [CMFCCaptionBar::SetIcon](#seticon), and [CMFCCaptionBar::SetBitmap](#setbitmap) to set the caption bar elements.  
  
 When you set the button element, you must assign a command ID to the button. When the user clicks the button, the caption bar routes the `WM_COMMAND` messages that have this ID to the parent frame window.  
  
 The caption bar can also work in message bar mode, which emulates the message bar that appears in Microsoft Office 2007 applications. In message bar mode, the caption bar displays a bitmap, a message, and a button (which typically opens a dialog box.) You can assign a tooltip to the bitmap.  
  
 To enable message bar mode, call [CMFCCaptionBar::Create](#create) and set the fourth parameter (bIsMessageBarMode) to `TRUE`.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCCaptionBar` class. The example shows how to create the caption bar control, set a 3D border of the caption bar, set the distance, in pixels, between the edge of the caption bar elements and the edge of the caption bar control, set the button for the caption bar, set the tooltip for the button, set the text label for the caption bar, set the bitmap image for the caption bar, and set the tooltip for the image in the caption bar. This code snippet is part of the [MS Office 2007 Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#1](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_1.h)]  
[!code-cpp[NVC_MFC_MSOffice2007Demo#2](../../mfc/reference/codesnippet/cpp/cmfccaptionbar-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)  
  
## Requirements  
 **Header:** afxcaptionbar.h  
  
##  <a name="create"></a>  CMFCCaptionBar::Create  
 Creates the caption bar control and attaches it to the `CMFCCaptionBar` object.  
  
```  
BOOL Create(
    DWORD dwStyle,  
    CWnd* pParentWnd,  
    UINT uID,  
    int nHeight=-1,  
    BOOL bIsMessageBarMode=FALSE);
```  
  
### Parameters  
 `dwStyle`  
 The logical OR combination of the caption bar styles.  
  
 `pParentWnd`  
 The parent window of the caption bar control.  
  
 `uID`  
 The ID of caption bar control.  
  
 `nHeight`  
 The height, in pixels, of the caption bar control. If it is -1, the height is calculated according to the height of the icon, the text and the button that the caption bar control displays.  
  
 `bIsMessageBarMode`  
 `TRUE` if the caption bar is in the message bar mode; `FALSE` otherwise.  
  
### Return Value  
 `TRUE` if the caption bar control is created successfully; `FALSE` otherwise.  
  
### Remarks  
 You construct a `CMFCCaptionBar` object in two steps. First you call the constructor, and then you call the `Create` method, which creates the Windows control and attaches it to the `CMFCCaptionBar` object.  
  
##  <a name="doesallowdyninsertbefore"></a>  CMFCCaptionBar::DoesAllowDynInsertBefore  
 Indicates whether another pane can be dynamically inserted between the caption bar and its parent frame.  
  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### Return Value  
 Returns `FALSE` unless overridden.  
  
### Remarks  
  
##  <a name="enablebutton"></a>  CMFCCaptionBar::EnableButton  
 Enables or disables the button on the caption bar.  
  
```  
void EnableButton(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the button, `FALSE` to disable the button.  
  
##  <a name="getalignment"></a>  CMFCCaptionBar::GetAlignment  
 Returns the alignment of the specified element.  
  
```  
BarElementAlignment GetAlignment(BarElement elem);
```  
  
### Parameters  
 [in] `elem`  
 A caption bar element for which to retrieve alignment.  
  
### Return Value  
 The alignment of an element, such as a button, a bitmap, text, or an icon.  
  
### Remarks  
 The alignment of the element can be one of the following values:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="getbordersize"></a>  CMFCCaptionBar::GetBorderSize  
 Returns the border size of the caption bar.  
  
```  
int GetBorderSize() const;  
```  
  
### Return Value  
 The size, in pixels, of the border.  
  
##  <a name="getbuttonrect"></a>  CMFCCaptionBar::GetButtonRect  
 Retrieves the bounding rectangle of the button on the caption bar.  
  
```  
CRect GetButtonRect() const;  
```  
  
### Return Value  
 A `CRect` object that contains the coordinates of the bounding rectangle of the button on the caption bar.  
  
##  <a name="getmargin"></a>  CMFCCaptionBar::GetMargin  
 Returns the distance between the edge of the caption bar elements and the edge of the caption bar control.  
  
```  
int GetMargin() const;  
```  
  
### Return Value  
 The distance, in pixels, between the edge of the caption bar elements and the edge of the caption bar control.  
  
##  <a name="ismessagebarmode"></a>  CMFCCaptionBar::IsMessageBarMode  
 Specifies whether the caption bar is in the message bar mode.  
  
```  
BOOL IsMessageBarMode() const;  
```  
  
### Return Value  
 `TRUE` if the caption bar is in the message bar mode; `FALSE` otherwise.  
  
### Remarks  
 In the message bar mode, the caption bar displays an image with a tooltip, a message text, and a button.  
  
##  <a name="m_clrbarbackground"></a>  CMFCCaptionBar::m_clrBarBackground  
 The background color of the caption bar.  
  
```  
COLORREF m_clrBarBackground  
```  
  
##  <a name="m_clrbarborder"></a>  CMFCCaptionBar::m_clrBarBorder  
 The color of the border of the caption bar.  
  
```  
COLORREF m_clrBarBorder  
```  
  
##  <a name="m_clrbartext"></a>  CMFCCaptionBar::m_clrBarText  
 The color of the caption bar text.  
  
```  
COLORREF m_clrBarText  
```  
  
##  <a name="ondrawbackground"></a>  CMFCCaptionBar::OnDrawBackground  
 Called by the framework to fill the background of the caption bar.  
  
```  
virtual void OnDrawBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context of the caption bar.  
  
 [in] `rect`  
 The bounding rectangle to fill.  
  
### Remarks  
 The `OnDrawBackground` method is called when the background of the caption bar is about to be filled. The default implementation fills the background by using the [CMFCCaptionBar::m_clrBarBackground](#m_clrbarbackground) color.  
  
 Override this method in a `CMFCCaptionBar` derived class to customize the appearance of the caption bar.  
  
##  <a name="ondrawborder"></a>  CMFCCaptionBar::OnDrawBorder  
 Called by the framework to draw the border of the caption bar.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A device context that is used to display the borders.  
  
 [in] `rect`  
 The bounding rectangle.  
  
### Remarks  
 By default, the borders have the flat style.  
  
 Override this method in a `CMFCCaptionBar` derived class to customize the appearance of the caption bar's borders.  
  
##  <a name="ondrawbutton"></a>  CMFCCaptionBar::OnDrawButton  
 Called by the framework to draw the caption bar button.  
  
```  
virtual void OnDrawButton(
    CDC* pDC,  
    CRect rect,  
    const CString& strButton,  
    BOOL bEnabled);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context that is used to display the button.  
  
 [in] `rect`  
 The bounding rectangle of the button.  
  
 [in] `strButton`  
 The button's text label.  
  
 [in] `bEnabled`  
 `TRUE` if the button is enabled; `FALSE` otherwise.  
  
### Remarks  
 Override this method in a `CMFCCaptionBar` derived class to customize the appearance of the caption bar's button.  
  
##  <a name="ondrawimage"></a>  CMFCCaptionBar::OnDrawImage  
 Called by the framework to draw the caption bar image.  
  
```  
virtual void OnDrawImage(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context that is used to display the image.  
  
 [in] `rect`  
 Specifies the bounding rectangle of the image.  
  
### Remarks  
 Override this method in a `CMFCCaptionBar` derived class to customize the image appearance.  
  
##  <a name="ondrawtext"></a>  CMFCCaptionBar::OnDrawText  
 Called by the framework to draw the caption bar text.  
  
```  
virtual void OnDrawText(
    CDC* pDC,  
    CRect rect,  
    const CString& strText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context that is used to display the button.  
  
 [in] `rect`  
 The bounding rectangle of the text.  
  
 [in] `strText`  
 The text string to display.  
  
### Remarks  
 The default implementation displays the text by using `CDC::DrawText` and [CMFCCaptionBar::m_clrBarText](#m_clrbartext) color.  
  
 Override this method in a `CMFCCaptionBar` derived class to customize the appearance of the caption bar's text.  
  
##  <a name="removebitmap"></a>  CMFCCaptionBar::RemoveBitmap  
 Removes the bitmap image from the caption bar.  
  
```  
void RemoveBitmap();
```  
  
##  <a name="removebutton"></a>  CMFCCaptionBar::RemoveButton  
 Removes the button from the caption bar.  
  
```  
void RemoveButton();
```  
  
### Remarks  
 The layout of caption bar elements are adjusted automatically.  
  
##  <a name="removeicon"></a>  CMFCCaptionBar::RemoveIcon  
 Removes the icon from the caption bar.  
  
```  
void RemoveIcon();
```  
  
##  <a name="removetext"></a>  CMFCCaptionBar::RemoveText  
 Removes the text label from the caption bar.  
  
```  
void RemoveText();
```  
  
##  <a name="setbitmap"></a>  CMFCCaptionBar::SetBitmap  
 Sets the bitmap image for the caption bar.  
  
```  
void SetBitmap(
    HBITMAP hBitmap,  
    COLORREF clrTransparent,  
    BOOL bStretch=FALSE,  
    BarElementAlignment bmpAlignment=ALIGN_RIGHT);

 
void SetBitmap(
    UINT uiBmpResID,  
    COLORREF clrTransparent,  
    BOOL bStretch=FALSE,  
    BarElementAlignment bmpAlignment=ALIGN_RIGHT);
```  
  
### Parameters  
 [in] `hBitmap`  
 The handle to the bitmap to set.  
  
 [in] `clrTransparent`  
 An RGB value that specifies the transparent color of the bitmap.  
  
 [in] `bStretch`  
 If `TRUE`, the bitmap is stretched if it does not fit to the image bounding rectangle. Otherwise the bitmap is not stretched.  
  
 [in] `bmpAlignment`  
 The alignment of the bitmap.  
  
### Remarks  
 Use this method to set a bitmap on a caption bar.  
  
 The previous bitmap is destroyed automatically. If the caption bar displays an icon because you called the [CMFCCaptionBar::SetIcon](#seticon) method, the bitmap will not be displayed unless you remove the icon by calling [CMFCCaptionBar::RemoveIcon](#removeicon).  
  
 The bitmap is aligned as specified by the `bmpAlignment` parameter.  This parameter can be one of the following `BarElementAlignment` values:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="setbordersize"></a>  CMFCCaptionBar::SetBorderSize  
 Sets the border size of the caption bar.  
  
```  
void SetBorderSize(int nSize);
```  
  
### Parameters  
 [in] `nSize`  
 The new size, in pixels, of the caption bar border.  
  
##  <a name="setbutton"></a>  CMFCCaptionBar::SetButton  
 Sets the button for the caption bar.  
  
```  
void SetButton(
    LPCTSTR lpszLabel,  
    UINT uiCmdUI,  
    BarElementAlignment btnAlignmnet=ALIGN_LEFT,  
    BOOL bHasDropDownArrow=TRUE);
```  
  
### Parameters  
 `lpszLabel`  
 The button's command label.  
  
 `uiCmdUI`  
 The button's command ID.  
  
 `btnAlignmnet`  
 The button's alignment.  
  
 `bHasDropDownArrow`  
 `TRUE` if the button displays a drop down arrow, `FALSE` otherwise.  
  
##  <a name="setbuttonpressed"></a>  CMFCCaptionBar::SetButtonPressed  
 Specifies whether the button stays pressed.  
  
```  
void SetButtonPressed(BOOL bPresed=TRUE);
```  
  
### Parameters  
 `bPresed`  
 `TRUE` if the button keeps its pressed state, `FALSE` otherwise.  
  
##  <a name="setbuttontooltip"></a>  CMFCCaptionBar::SetButtonToolTip  
 Sets the tooltip for the button.  
  
```  
void SetButtonToolTip(
    LPCTSTR lpszToolTip,  
    LPCTSTR lpszDescription=NULL);
```  
  
### Parameters  
 [in] `lpszToolTip`  
 The tooltip caption.  
  
 [in] `lpszDescription`  
 The tooltip description.  
  
##  <a name="setflatborder"></a>  CMFCCaptionBar::SetFlatBorder  
 Sets the border style of the caption bar.  
  
```  
void SetFlatBorder(BOOL bFlat=TRUE);
```  
  
### Parameters  
 [in] `bFlat`  
 `TRUE` if the border of a caption bar is flat. `FALSE` if the border is 3D.  
  
##  <a name="seticon"></a>  CMFCCaptionBar::SetIcon  
 Sets the icon for a caption bar.  
  
```  
void SetIcon(
    HICON hIcon,  
    BarElementAlignment iconAlignment=ALIGN_RIGHT);
```  
  
### Parameters  
 [in] `hIcon`  
 The handle to the icon to set.  
  
 [in] `iconAlignment`  
 The alignment of the icon.  
  
### Remarks  
 Caption bars can display either icons or bitmaps. See [CMFCCaptionBar::SetBitmap](#setbitmap) to find out how to display a bitmap. If you set both an icon and a bitmap, the icon is always displayed. Call [CMFCCaptionBar::RemoveIcon](#removeicon) to remove an icon from the caption bar.  
  
 The icon is aligned according to the `iconAlignment` parameter. It can be one of the following `BarElementAlignment` values:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
##  <a name="setimagetooltip"></a>  CMFCCaptionBar::SetImageToolTip  
 Sets the tooltip for the image in the caption bar.  
  
```  
void SetImageToolTip(
    LPCTSTR lpszToolTip,  
    LPCTSTR lpszDescription=NULL);
```  
  
### Parameters  
 [in] `lpszToolTip`  
 The text of the tooltip.  
  
 [in] `lpszDescription`  
 The tooltip description.  
  
##  <a name="setmargin"></a>  CMFCCaptionBar::SetMargin  
 Sets the distance between the edge of the caption bar element and the edge of the caption bar control.  
  
```  
void SetMargin(int nMargin);
```  
  
### Parameters  
 [in] `nMargin`  
 The distance, in pixels, between the edge of the caption bar elements and the edge of the caption bar control.  
  
##  <a name="settext"></a>  CMFCCaptionBar::SetText  
 Sets the text label for the caption bar.  
  
```  
void SetText(
    const CString& strText,  
    BarElementAlignment textAlignment=ALIGN_RIGHT);
```  
  
### Parameters  
 [in] `strText`  
 The text string to set.  
  
 [in] `textAlignment`  
 The text alignment.  
  
### Remarks  
 The text label is aligned as specified by the `textAlignment` parameter. It can be one of the following `BarElementAlignment` values:  
  
-   ALIGN_INVALID  
  
-   ALIGN_LEFT  
  
-   ALIGN_RIGHT  
  
-   ALIGN_CENTER  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
