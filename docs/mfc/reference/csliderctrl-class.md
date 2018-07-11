---
title: "CSliderCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CSliderCtrl", "AFXCMN/CSliderCtrl", "AFXCMN/CSliderCtrl::CSliderCtrl", "AFXCMN/CSliderCtrl::ClearSel", "AFXCMN/CSliderCtrl::ClearTics", "AFXCMN/CSliderCtrl::Create", "AFXCMN/CSliderCtrl::CreateEx", "AFXCMN/CSliderCtrl::GetBuddy", "AFXCMN/CSliderCtrl::GetChannelRect", "AFXCMN/CSliderCtrl::GetLineSize", "AFXCMN/CSliderCtrl::GetNumTics", "AFXCMN/CSliderCtrl::GetPageSize", "AFXCMN/CSliderCtrl::GetPos", "AFXCMN/CSliderCtrl::GetRange", "AFXCMN/CSliderCtrl::GetRangeMax", "AFXCMN/CSliderCtrl::GetRangeMin", "AFXCMN/CSliderCtrl::GetSelection", "AFXCMN/CSliderCtrl::GetThumbLength", "AFXCMN/CSliderCtrl::GetThumbRect", "AFXCMN/CSliderCtrl::GetTic", "AFXCMN/CSliderCtrl::GetTicArray", "AFXCMN/CSliderCtrl::GetTicPos", "AFXCMN/CSliderCtrl::GetToolTips", "AFXCMN/CSliderCtrl::SetBuddy", "AFXCMN/CSliderCtrl::SetLineSize", "AFXCMN/CSliderCtrl::SetPageSize", "AFXCMN/CSliderCtrl::SetPos", "AFXCMN/CSliderCtrl::SetRange", "AFXCMN/CSliderCtrl::SetRangeMax", "AFXCMN/CSliderCtrl::SetRangeMin", "AFXCMN/CSliderCtrl::SetSelection", "AFXCMN/CSliderCtrl::SetThumbLength", "AFXCMN/CSliderCtrl::SetTic", "AFXCMN/CSliderCtrl::SetTicFreq", "AFXCMN/CSliderCtrl::SetTipSide", "AFXCMN/CSliderCtrl::SetToolTips"]
dev_langs: ["C++"]
helpviewer_keywords: ["CSliderCtrl [MFC], CSliderCtrl", "CSliderCtrl [MFC], ClearSel", "CSliderCtrl [MFC], ClearTics", "CSliderCtrl [MFC], Create", "CSliderCtrl [MFC], CreateEx", "CSliderCtrl [MFC], GetBuddy", "CSliderCtrl [MFC], GetChannelRect", "CSliderCtrl [MFC], GetLineSize", "CSliderCtrl [MFC], GetNumTics", "CSliderCtrl [MFC], GetPageSize", "CSliderCtrl [MFC], GetPos", "CSliderCtrl [MFC], GetRange", "CSliderCtrl [MFC], GetRangeMax", "CSliderCtrl [MFC], GetRangeMin", "CSliderCtrl [MFC], GetSelection", "CSliderCtrl [MFC], GetThumbLength", "CSliderCtrl [MFC], GetThumbRect", "CSliderCtrl [MFC], GetTic", "CSliderCtrl [MFC], GetTicArray", "CSliderCtrl [MFC], GetTicPos", "CSliderCtrl [MFC], GetToolTips", "CSliderCtrl [MFC], SetBuddy", "CSliderCtrl [MFC], SetLineSize", "CSliderCtrl [MFC], SetPageSize", "CSliderCtrl [MFC], SetPos", "CSliderCtrl [MFC], SetRange", "CSliderCtrl [MFC], SetRangeMax", "CSliderCtrl [MFC], SetRangeMin", "CSliderCtrl [MFC], SetSelection", "CSliderCtrl [MFC], SetThumbLength", "CSliderCtrl [MFC], SetTic", "CSliderCtrl [MFC], SetTicFreq", "CSliderCtrl [MFC], SetTipSide", "CSliderCtrl [MFC], SetToolTips"]
ms.assetid: dd12b084-4eda-4550-a810-8f3cfb06b871
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CSliderCtrl Class
Provides the functionality of the Windows common slider control.  
  
## Syntax  
  
```  
class CSliderCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSliderCtrl::CSliderCtrl](#csliderctrl)|Constructs a `CSliderCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSliderCtrl::ClearSel](#clearsel)|Clears the current selection in a slider control.|  
|[CSliderCtrl::ClearTics](#cleartics)|Removes the current tick marks from a slider control.|  
|[CSliderCtrl::Create](#create)|Creates a slider control and attaches it to a `CSliderCtrl` object.|  
|[CSliderCtrl::CreateEx](#createex)|Creates a slider control with the specified Windows extended styles and attaches it to a `CSliderCtrl` object.|  
|[CSliderCtrl::GetBuddy](#getbuddy)|Retrieves the handle to a slider control buddy window at a given location.|  
|[CSliderCtrl::GetChannelRect](#getchannelrect)|Retrieves the size of the slider control's channel.|  
|[CSliderCtrl::GetLineSize](#getlinesize)|Retrieves the line size of a slider control.|  
|[CSliderCtrl::GetNumTics](#getnumtics)|Retrieves the number of tick marks in a slider control.|  
|[CSliderCtrl::GetPageSize](#getpagesize)|Retrieves the page size of a slider control.|  
|[CSliderCtrl::GetPos](#getpos)|Retrieves the current position of the slider.|  
|[CSliderCtrl::GetRange](#getrange)|Retrieves the minimum and maximum positions for a slider.|  
|[CSliderCtrl::GetRangeMax](#getrangemax)|Retrieves the maximum position for a slider.|  
|[CSliderCtrl::GetRangeMin](#getrangemin)|Retrieves the minimum position for a slider.|  
|[CSliderCtrl::GetSelection](#getselection)|Retrieves the range of the current selection.|  
|[CSliderCtrl::GetThumbLength](#getthumblength)|Retrieves the length of the slider in the current trackbar control.|  
|[CSliderCtrl::GetThumbRect](#getthumbrect)|Retrieves the size of the slider control's thumb.|  
|[CSliderCtrl::GetTic](#gettic)|Retrieves the position of the specified tick mark.|  
|[CSliderCtrl::GetTicArray](#getticarray)|Retrieves the array of tick mark positions for a slider control.|  
|[CSliderCtrl::GetTicPos](#getticpos)|Retrieves the position of the specified tick mark, in client coordinates.|  
|[CSliderCtrl::GetToolTips](#gettooltips)|Retrieves the handle to the tooltip control assigned to the slider control, if any.|  
|[CSliderCtrl::SetBuddy](#setbuddy)|Assigns a window as the buddy window for a slider control.|  
|[CSliderCtrl::SetLineSize](#setlinesize)|Sets the line size of a slider control.|  
|[CSliderCtrl::SetPageSize](#setpagesize)|Sets the page size of a slider control.|  
|[CSliderCtrl::SetPos](#setpos)|Sets the current position of the slider.|  
|[CSliderCtrl::SetRange](#setrange)|Sets the minimum and maximum positions for a slider.|  
|[CSliderCtrl::SetRangeMax](#setrangemax)|Sets the maximum position for a slider.|  
|[CSliderCtrl::SetRangeMin](#setrangemin)|Sets the minimum position for a slider.|  
|[CSliderCtrl::SetSelection](#setselection)|Sets the range of the current selection.|  
|[CSliderCtrl::SetThumbLength](#setthumblength)|Sets the length of the slider in the current trackbar control.|  
|[CSliderCtrl::SetTic](#settic)|Sets the position of the specified tick mark.|  
|[CSliderCtrl::SetTicFreq](#setticfreq)|Sets the frequency of tick marks per slider control increment.|  
|[CSliderCtrl::SetTipSide](#settipside)|Positions a tooltip control used by a trackbar control.|  
|[CSliderCtrl::SetToolTips](#settooltips)|Assigns a tooltip control to a slider control.|  
  
## Remarks  
 A "slider control" (also known as a trackbar) is a window containing a slider and optional tick marks. When the user moves the slider, using either the mouse or the direction keys, the control sends notification messages to indicate the change.  
  
 Slider controls are useful when you want the user to select a discrete value or a set of consecutive values in a range. For example, you might use a slider control to allow the user to set the repeat rate of the keyboard by moving the slider to a given tick mark.  
  
 This control (and therefore the `CSliderCtrl` class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.  
  
 The slider moves in increments that you specify when you create it. For example, if you specify that the slider should have a range of five, the slider can only occupy six positions: a position at the left side of the slider control and one position for each increment in the range. Typically, each of these positions is identified by a tick mark.  
  
 You create a slider by using the constructor and the `Create` member function of `CSliderCtrl`. Once you have created a slider control, you can use member functions in `CSliderCtrl` to change many of its properties. Changes that you can make include setting the minimum and maximum positions for the slider, drawing tick marks, setting a selection range, and repositioning the slider.  
  
 For more information on using `CSliderCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CSliderCtrl](../../mfc/using-csliderctrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSliderCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="clearsel"></a>  CSliderCtrl::ClearSel  
 Clears the current selection in a slider control.  
  
```  
void ClearSel(BOOL bRedraw = FALSE);
```  
  
### Parameters  
 *bRedraw*  
 Redraw flag. If this parameter is TRUE, the slider is redrawn after the selection is cleared; otherwise the slider is not redrawn.  
  
##  <a name="cleartics"></a>  CSliderCtrl::ClearTics  
 Removes the current tick marks from a slider control.  
  
```  
void ClearTics(BOOL bRedraw = FALSE);
```  
  
### Parameters  
 *bRedraw*  
 Redraw flag. If this parameter is TRUE, the slider is redrawn after the tick marks are cleared; otherwise the slider is not redrawn.  
  
##  <a name="create"></a>  CSliderCtrl::Create  
 Creates a slider control and attaches it to a `CSliderCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 *dwStyle*  
 Specifies the slider control's style. Apply any combination of [slider control styles](http://msdn.microsoft.com/library/windows/desktop/bb760147), described in the Windows SDK, to the control.  
  
 *rect*  
 Specifies the slider control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
 *pParentWnd*  
 Specifies the slider control's parent window, usually a `CDialog`. It must not be NULL.  
  
 *nID*  
 Specifies the slider control's ID.  
  
### Return Value  
 Nonzero if initialization was successful; otherwise 0.  
  
### Remarks  
 You construct a `CSliderCtrl` in two steps. First, call the constructor, and then call `Create`, which creates the slider control and attaches it to the `CSliderCtrl` object.  
  
 Depending on the values set for *dwStyle*, the slider control can have either a vertical or horizontal orientation. It can have tick marks on either side, both sides, or neither. It can also be used to specify a range of consecutive values.  
  
 To apply extended window styles to the slider control, call [CreateEx](#createex) instead of `Create`.  
  
##  <a name="createex"></a>  CSliderCtrl::CreateEx  
 Creates a control (a child window) and associates it with the `CSliderCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 *dwExStyle*  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the Windows SDK.  
  
 *dwStyle*  
 Specifies the slider control's style. Apply any combination of [slider control styles](http://msdn.microsoft.com/library/windows/desktop/bb760147), described in the Windows SDK, to the control.  
  
 *rect*  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of *pParentWnd*.  
  
 *pParentWnd*  
 A pointer to the window that is the control's parent.  
  
 *nID*  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="csliderctrl"></a>  CSliderCtrl::CSliderCtrl  
 Constructs a `CSliderCtrl` object.  
  
```  
CSliderCtrl();
```  
  
##  <a name="getbuddy"></a>  CSliderCtrl::GetBuddy  
 Retrieves the handle to a slider control buddy window at a given location.  
  
```  
CWnd* GetBuddy(BOOL fLocation = TRUE) const;  
```  
  
### Parameters  
 *fLocation*  
 A Boolean value that indicates which of two buddy window handles to retrieve. Can be one of the following values:  
  
- TRUE Retrieves the handle to the buddy to the left of the slider. If the slider control uses the TBS_VERT style, the message will retrieve the buddy above the slider.  
  
- FALSE Retrieves the handle to the buddy to the right of the slider. If the slider control uses the TBS_VERT style, the message will retrieve the buddy below the slider.  
  
### Return Value  
 A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the buddy window at the location specified by *fLocation*, or NULL if no buddy window exists at that location.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TBM_GETBUDDY](http://msdn.microsoft.com/library/windows/desktop/bb760178), as described in the Windows SDK. For a description of the slider control styles, see [Trackbar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760147) in the Windows SDK.  
  
##  <a name="getchannelrect"></a>  CSliderCtrl::GetChannelRect  
 Retrieves the size and position of the bounding rectangle for a slider control's channel.  
  
```  
void GetChannelRect(LPRECT lprc) const;  
```  
  
### Parameters  
 *lprc*  
 A pointer to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the size and position of the channel's bounding rectangle when the function returns.  
  
### Remarks  
 The channel is the area over which the slider moves and which contains the highlight when a range is selected.  
  
##  <a name="getlinesize"></a>  CSliderCtrl::GetLineSize  
 Retrieves the size of the line for a slider control.  
  
```  
int GetLineSize() const;  
```  
  
### Return Value  
 The size of a line for the slider control.  
  
### Remarks  
 The line size affects how much the slider moves for the TB_LINEUP and TB_LINEDOWN notifications. The default setting for the line size is 1.  
  
##  <a name="getnumtics"></a>  CSliderCtrl::GetNumTics  
 Retrieves the number of tick marks in a slider control.  
  
```  
UINT GetNumTics() const;  
```  
  
### Return Value  
 The number of tick marks in the slider control.  
  
##  <a name="getpagesize"></a>  CSliderCtrl::GetPageSize  
 Retrieves the size of the page for a slider control.  
  
```  
int GetPageSize() const;  
```  
  
### Return Value  
 The size of a page for the slider control.  
  
### Remarks  
 The page size affects how much the slider moves for the TB_PAGEUP and TB_PAGEDOWN notifications.  
  
##  <a name="getpos"></a>  CSliderCtrl::GetPos  
 Retrieves the current position of the slider in a slider control.  
  
```  
int GetPos() const;  
```  
  
### Return Value  
 The current position.  
  
##  <a name="getrange"></a>  CSliderCtrl::GetRange  
 Retrieves the maximum and minimum positions for the slider in a slider control.  
  
```  
void GetRange(
    int& nMin,  
    int& nMax) const;  
```  
  
### Parameters  
 *nMin*  
 Reference to an integer that receives the minimum position.  
  
 *nMax*  
 Reference to an integer that receives the maximum position.  
  
### Remarks  
 This function copies the values into the integers referenced by *nMin* and *nMax*.  
  
##  <a name="getrangemax"></a>  CSliderCtrl::GetRangeMax  
 Retrieves the maximum position for the slider in a slider control.  
  
```  
int GetRangeMax() const;  
```  
  
### Return Value  
 The control's maximum position.  
  
##  <a name="getrangemin"></a>  CSliderCtrl::GetRangeMin  
 Retrieves the minimum position for the slider in a slider control.  
  
```  
int GetRangeMin() const;  
```  
  
### Return Value  
 The control's minimum position.  
  
##  <a name="getselection"></a>  CSliderCtrl::GetSelection  
 Retrieves the starting and ending positions of the current selection in a slider control.  
  
```  
void GetSelection(
    int& nMin,  
    int& nMax) const;  
```  
  
### Parameters  
 *nMin*  
 Reference to an integer that receives the starting position of the current selection.  
  
 *nMax*  
 Reference to an integer that receives the ending position of the current selection.  
  
##  <a name="getthumblength"></a>  CSliderCtrl::GetThumbLength  
 Retrieves the length of the slider in the current trackbar control.  
  
```  
int GetThumbLength() const;  
```  
  
### Return Value  
 The length of the slider, in pixels.  
  
### Remarks  
 This method sends the [TBM_GETTHUMBLENGTH](http://msdn.microsoft.com/library/windows/desktop/bb760201) message, which is described in the Windows SDK.  
  
##  <a name="getthumbrect"></a>  CSliderCtrl::GetThumbRect  
 Retrieves the size and position of the bounding rectangle for the slider (thumb) in a slider control.  
  
```  
void GetThumbRect(LPRECT lprc) const;  
```  
  
### Parameters  
 *lprc*  
 A pointer to a `CRect` object that contains the bounding rectangle for the slider when the function returns.  
  
##  <a name="gettic"></a>  CSliderCtrl::GetTic  
 Retrieves the position of a tick mark in a slider control.  
  
```  
int GetTic(int nTic) const;  
```  
  
### Parameters  
 *nTic*  
 Zero-based index identifying a tick mark.  
  
### Return Value  
 The position of the specified tick mark or - 1 if *nTic* does not specify a valid index.  
  
##  <a name="getticarray"></a>  CSliderCtrl::GetTicArray  
 Retrieves the address of the array containing the positions of tick marks for a slider control.  
  
```  
DWORD* GetTicArray() const;  
```  
  
### Return Value  
 The address of the array containing tick mark positions for the slider control.  
  
##  <a name="getticpos"></a>  CSliderCtrl::GetTicPos  
 Retrieves the current physical position of a tick mark in a slider control.  
  
```  
int GetTicPos(int nTic) const;  
```  
  
### Parameters  
 *nTic*  
 Zero-based index identifying a tick mark.  
  
### Return Value  
 The physical position, in client coordinates, of the specified tick mark or - 1 if *nTic* does not specify a valid index.  
  
##  <a name="gettooltips"></a>  CSliderCtrl::GetToolTips  
 Retrieves the handle to the tooltip control assigned to the slider control, if any.  
  
```  
CToolTipCtrl* GetToolTips() const;  
```  
  
### Return Value  
 A pointer to a [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) object, or NULL if tooltips are not in use. If the slider control does not use the TBS_TOOLTIPS style, the return value is NULL.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TBM_GETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb760209), as described in the Windows SDK. Note that this member function returns a `CToolTipCtrl` object instead of a handle to a control.  
  
 For a description of the slider control styles, see [Trackbar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760147) in the Windows SDK.  
  
##  <a name="setbuddy"></a>  CSliderCtrl::SetBuddy  
 Assigns a window as the buddy window for a slider control.  
  
```  
CWnd* SetBuddy(
    CWnd* pWndBuddy,  
    BOOL fLocation = TRUE);
```  
  
### Parameters  
 *pWndBuddy*  
 A pointer to a `CWnd` object that will be set as the slider control's buddy.  
  
 *fLocation*  
 Value specifying the location at which to display the buddy window. This value can be one of the following:  
  
- TRUE The buddy will appear to the left of the trackbar if the trackbar control uses the TBS_HORZ style. If the trackbar uses the TBS_VERT style, the buddy appears above the trackbar control.  
  
- FALSE The buddy will appear to the right of the trackbar if the trackbar control uses the TBS_HORZ style. If the trackbar uses the TBS_VERT style, the buddy appears below the trackbar control.  
  
### Return Value  
 A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that was previously assigned to the slider control at that location.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TBM_SETBUDDY](http://msdn.microsoft.com/library/windows/desktop/bb760213), as described in the Windows SDK. Note that this member function uses pointers to `CWnd` objects, rather than window handles for both its return value and parameter.  
  
 For a description of the slider control styles, see [Trackbar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760147) in the Windows SDK.  
  
##  <a name="setlinesize"></a>  CSliderCtrl::SetLineSize  
 Sets the size of the line for a slider control.  
  
```  
int SetLineSize(int nSize);
```  
  
### Parameters  
 *nSize*  
 The new line size of the slider control.  
  
### Return Value  
 The previous line size.  
  
### Remarks  
 The line size affects how much the slider moves for the TB_LINEUP and TB_LINEDOWN notifications.  
  
##  <a name="setpagesize"></a>  CSliderCtrl::SetPageSize  
 Sets the size of the page for a slider control.  
  
```  
int SetPageSize(int nSize);
```  
  
### Parameters  
 *nSize*  
 The new page size of the slider control.  
  
### Return Value  
 The previous page size.  
  
### Remarks  
 The page size affects how much the slider moves for the TB_PAGEUP and TB_PAGEDOWN notifications.  
  
##  <a name="setpos"></a>  CSliderCtrl::SetPos  
 Sets the current position of the slider in a slider control.  
  
```  
void SetPos(int nPos);
```  
  
### Parameters  
 *nPos*  
 Specifies the new slider position.  
  
##  <a name="setrange"></a>  CSliderCtrl::SetRange  
 Sets the range (minimum and maximum positions) for the slider in a slider control.  
  
```  
void SetRange(
    int nMin,  
    int nMax,  
    BOOL bRedraw = FALSE);
```  
  
### Parameters  
 *nMin*  
 Minimum position for the slider.  
  
 *nMax*  
 Maximum position for the slider.  
  
 *bRedraw*  
 The redraw flag. If this parameter is TRUE, the slider is redrawn after the range is set; otherwise the slider is not redrawn.  
  
##  <a name="setrangemax"></a>  CSliderCtrl::SetRangeMax  
 Sets the maximum range for the slider in a slider control.  
  
```  
void SetRangeMax(
    int nMax,  
    BOOL bRedraw = FALSE);
```  
  
### Parameters  
 *nMax*  
 Maximum position for the slider.  
  
 *bRedraw*  
 The redraw flag. If this parameter is TRUE, the slider is redrawn after the range is set; otherwise the slider is not redrawn.  
  
##  <a name="setrangemin"></a>  CSliderCtrl::SetRangeMin  
 Sets the minimum range for the slider in a slider control.  
  
```  
void SetRangeMin(
    int nMin,  
    BOOL bRedraw = FALSE);
```  
  
### Parameters  
 *nMin*  
 Minimum position for the slider.  
  
 *bRedraw*  
 The redraw flag. If this parameter is TRUE, the slider is redrawn after the range is set; otherwise the slider is not redrawn.  
  
##  <a name="setselection"></a>  CSliderCtrl::SetSelection  
 Sets the starting and ending positions for the current selection in a slider control.  
  
```  
void SetSelection(
    int nMin,  
    int nMax);
```  
  
### Parameters  
 *nMin*  
 Starting position for the slider.  
  
 *nMax*  
 Ending position for the slider.  
  
##  <a name="setthumblength"></a>  CSliderCtrl::SetThumbLength  
 Sets the length of the slider in the current trackbar control.  
  
```  
void SetThumbLength(int nLength);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] *nLength*|Length of the slider, in pixels.|  
  
### Remarks  
 This method requires that the trackbar control be set to [TBS_FIXEDLENGTH](http://msdn.microsoft.com/library/windows/desktop/bb760147) style.  
  
 This method sends the [TBM_SETTHUMBLENGTH](http://msdn.microsoft.com/library/windows/desktop/bb760234) message, which is described in the Windows SDK.  
  
### Example  
 The following code example defines the variable, `m_sliderCtrl`, that is used to access the current trackbar control. The example also defines a variable, `thumbLength`, that is used to store the default length of the trackbar control's thumb component. These variables are used in the next example.  
  
 [!code-cpp[NVC_MFC_CSliderCtrl_s1#1](../../mfc/reference/codesnippet/cpp/csliderctrl-class_1.h)]  
  
### Example  
 The following code example sets the trackbar control's thumb component to twice its default length.  
  
 [!code-cpp[NVC_MFC_CSliderCtrl_s1#2](../../mfc/reference/codesnippet/cpp/csliderctrl-class_2.cpp)]  
  
##  <a name="settic"></a>  CSliderCtrl::SetTic  
 Sets the position of a tick mark in a slider control.  
  
```  
BOOL SetTic(int nTic);
```  
  
### Parameters  
 *nTic*  
 Position of the tick mark. This parameter must specify a positive value.  
  
### Return Value  
 Nonzero if the tick mark is set; otherwise 0.  
  
##  <a name="setticfreq"></a>  CSliderCtrl::SetTicFreq  
 Sets the frequency with which tick marks are displayed in a slider.  
  
```  
void SetTicFreq(int nFreq);
```  
  
### Parameters  
 *nFreq*  
 Frequency of the tick marks.  
  
### Remarks  
 For example, if the frequency is set to 2, a tick mark is displayed for every other increment in the slider's range. The default setting for the frequency is 1 (that is, every increment in the range is associated with a tick mark).  
  
 You must create the control with the TBS_AUTOTICKS style to use this function. For more information, see [CSliderCtrl::Create](#create).  
  
##  <a name="settipside"></a>  CSliderCtrl::SetTipSide  
 Positions a tooltip control used by a trackbar control.  
  
```  
int SetTipSide(int nLocation);
```  
  
### Parameters  
 *nLocation*  
 Value representing the location at which to display the tooltip control. For a list of possible values, see the Win32 message [TBM_SETTIPSIDE](http://msdn.microsoft.com/library/windows/desktop/bb760240), as described in the Windows SDK.  
  
### Return Value  
 A value that represents the tooltip control's previous location. The return value equals one of the possible values for *nLocation*.  
  
### Remarks  
 This member function implements the behavior of the Win32 message TBM_SETTIPSIDE, as described in the Windows SDK. Slider controls that use the TBS_TOOLTIPS style display tooltips. For a description of the slider control styles, see [Trackbar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760147) in the Windows SDK.  
  
##  <a name="settooltips"></a>  CSliderCtrl::SetToolTips  
 Assigns a tooltip control to a slider control.  
  
```  
void SetToolTips(CToolTipCtrl* pWndTip);
```  
  
### Parameters  
 *pWndTip*  
 A pointer to a [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) object containing the tooltips to use with the slider control.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [TBM_SETTOOLTIPS](http://msdn.microsoft.com/library/windows/desktop/bb760242), as described in the Windows SDK. When a slider control is created with the TBS_TOOLTIPS style, it creates a default tooltip control that appears next to the slider, displaying the slider's current position. For a description of the slider control styles, see [Trackbar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760147) in the Windows SDK.  
  
## See Also  
 [MFC Sample CMNCTRL2](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CProgressCtrl Class](../../mfc/reference/cprogressctrl-class.md)
