---
title: "CScrollBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CScrollBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CScrollBar class"
  - "SCROLLBAR window class"
  - "scroll bars"
  - "Windows common controls [C++], CScrollBar"
  - "controls [MFC], scroll bar"
ms.assetid: f3735ca5-73ea-46dc-918b-4d824c9fe47f
caps.latest.revision: 21
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
# CScrollBar Class
Provides the functionality of a Windows scroll-bar control.  
  
## Syntax  
  
```  
class CScrollBar : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CScrollBar::CScrollBar](#cscrollbar__cscrollbar)|Constructs a `CScrollBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CScrollBar::Create](#cscrollbar__create)|Creates the Windows scroll bar and attaches it to the `CScrollBar` object.|  
|[CScrollBar::EnableScrollBar](#cscrollbar__enablescrollbar)|Enables or disables one or both arrows of a scroll bar.|  
|[CScrollBar::GetScrollBarInfo](#cscrollbar__getscrollbarinfo)|Retrieves information about the scroll bar using a `SCROLLBARINFO` structure.|  
|[CScrollBar::GetScrollInfo](#cscrollbar__getscrollinfo)|Retrieves information about the scroll bar.|  
|[CScrollBar::GetScrollLimit](#cscrollbar__getscrolllimit)|Retrieves the limit of the scroll bar|  
|[CScrollBar::GetScrollPos](#cscrollbar__getscrollpos)|Retrieves the current position of a scroll box.|  
|[CScrollBar::GetScrollRange](#cscrollbar__getscrollrange)|Retrieves the current minimum and maximum scroll-bar positions for the given scroll bar.|  
|[CScrollBar::SetScrollInfo](#cscrollbar__setscrollinfo)|Sets information about the scroll bar.|  
|[CScrollBar::SetScrollPos](#cscrollbar__setscrollpos)|Sets the current position of a scroll box.|  
|[CScrollBar::SetScrollRange](#cscrollbar__setscrollrange)|Sets minimum and maximum position values for the given scroll bar.|  
|[CScrollBar::ShowScrollBar](#cscrollbar__showscrollbar)|Shows or hides a scroll bar.|  
  
## Remarks  
 You create a scroll-bar control in two steps. First, call the constructor `CScrollBar` to construct the `CScrollBar` object, then call the [Create](#cscrollbar__create) member function to create the Windows scroll-bar control and attach it to the `CScrollBar` object.  
  
 If you create a `CScrollBar` object within a dialog box (through a dialog resource), the `CScrollBar` is automatically destroyed when the user closes the dialog box.  
  
 If you create a `CScrollBar` object within a window, you may also need to destroy it.  
  
 If you create the `CScrollBar` object on the stack, it is destroyed automatically. If you create the `CScrollBar` object on the heap by using the **new** function, you must call **delete** on the object to destroy it when the user terminates the Windows scroll bar.  
  
 If you allocate any memory in the `CScrollBar` object, override the `CScrollBar` destructor to dispose of the allocations.  
  
 For related information about using `CScrollBar`, see [Controls](../../mfc/controls-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CScrollBar`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cscrollbar__create"></a>  CScrollBar::Create  
 Creates the Windows scroll bar and attaches it to the `CScrollBar` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the scroll bar's style. Apply any combination of [scroll-bar styles](../../mfc/reference/scroll-bar-styles.md) to the scroll bar.  
  
 `rect`  
 Specifies the scroll bar's size and position. Can be either a `RECT` structure or a `CRect` object.  
  
 `pParentWnd`  
 Specifies the scroll bar's parent window, usually a `CDialog` object. It must not be **NULL**.  
  
 `nID`  
 The scroll bar's control ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 You construct a `CScrollBar` object in two steps. First, call the constructor, which constructs the `CScrollBar` object; then call **Create**, which creates and initializes the associated Windows scroll bar and attaches it to the `CScrollBar` object.  
  
 Apply the following [window styles](../../mfc/reference/window-styles.md) to a scroll bar:  
  
- **WS_CHILD** Always  
  
- **WS_VISIBLE** Usually  
  
- **WS_DISABLED** Rarely  
  
- **WS_GROUP** To group controls  
  
### Example  
 [!code-cpp[NVC_MFC_CScrollBar#1](../../mfc/reference/codesnippet/cpp/cscrollbar-class_1.cpp)]  
  
##  <a name="cscrollbar__cscrollbar"></a>  CScrollBar::CScrollBar  
 Constructs a `CScrollBar` object.  
  
```  
CScrollBar();
```  
  
### Remarks  
 After constructing the object, call the **Create** member function to create and initialize the Windows scroll bar.  
  
### Example  
 [!code-cpp[NVC_MFC_CScrollBar#2](../../mfc/reference/codesnippet/cpp/cscrollbar-class_2.h)]  
  
##  <a name="cscrollbar__enablescrollbar"></a>  CScrollBar::EnableScrollBar  
 Enables or disables one or both arrows of a scroll bar.  
  
```  
BOOL EnableScrollBar(UINT nArrowFlags = ESB_ENABLE_BOTH);
```  
  
### Parameters  
 `nArrowFlags`  
 Specifies whether the scroll arrows are enabled or disabled and which arrows are enabled or disabled. This parameter can be one of the following values:  
  
- **ESB_ENABLE_BOTH** Enables both arrows of a scroll bar.  
  
- **ESB_DISABLE_LTUP** Disables the left arrow of a horizontal scroll bar or the up arrow of a vertical scroll bar.  
  
- **ESB_DISABLE_RTDN** Disables the right arrow of a horizontal scroll bar or the down arrow of a vertical scroll bar.  
  
- **ESB_DISABLE_BOTH** Disables both arrows of a scroll bar.  
  
### Return Value  
 Nonzero if the arrows are enabled or disabled as specified; otherwise 0, which indicates that the arrows are already in the requested state or that an error occurred.  
  
### Example  
  See the example for [CScrollBar::SetScrollRange](#cscrollbar__setscrollrange).  
  
##  <a name="cscrollbar__getscrollbarinfo"></a>  CScrollBar::GetScrollBarInfo  
 Retrieves the information that the **SCROLLBARINFO** structure maintains about a scroll bar.  
  
```  
BOOL GetScrollBarInfo(PSCROLLBARINFO pScrollInfo) const;

 
```  
  
### Parameters  
 *pScrollInfo*  
 A pointer to the [SCROLLBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb787535) structure.  
  
### Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
### Remarks  
 This member function emulates the functionality of the [SBM_SCROLLBARINFO](http://msdn.microsoft.com/library/windows/desktop/bb787545) message, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cscrollbar__getscrollinfo"></a>  CScrollBar::GetScrollInfo  
 Retrieves the information that the `SCROLLINFO` structure maintains about a scroll bar.  
  
```  
BOOL GetScrollInfo(
    LPSCROLLINFO lpScrollInfo,  
    UINT nMask = SIF_ALL);
```  
  
### Parameters  
 `lpScrollInfo`  
 A pointer to a [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) structure. See the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about this structure.  
  
 `nMask`  
 Specifies the scroll bar parameters to retrieve. Typical usage, SIF_ALL, specifies a combination of SIF_PAGE, SIF_POS, SIF_TRACKPOS, and SIF_RANGE. See `SCROLLINFO` for more information on the nMask values.  
  
### Return Value  
 If the message retrieved any values, the return is **TRUE**. Otherwise, it is **FALSE**.  
  
### Remarks  
 `GetScrollInfo` enables applications to use 32-bit scroll positions.  
  
 The [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) structure contains information about a scroll bar, including the minimum and maximum scrolling positions, the page size, and the position of the scroll box (the thumb). See the `SCROLLINFO` structure topic in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about changing the structure defaults.  
  
 The MFC Windows message handlers that indicate scroll bar position, [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#cwnd__onhscroll) and [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#cwnd__onvscroll), provide only 16 bits of position data. `GetScrollInfo` and `SetScrollInfo` provide 32 bits of scroll bar position data. Thus, an application can call `GetScrollInfo` while processing either `CWnd::OnHScroll` or `CWnd::OnVScroll` to obtain 32-bit scroll bar position data.  
  
### Example  
  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#cwnd__onhscroll).  
  
##  <a name="cscrollbar__getscrolllimit"></a>  CScrollBar::GetScrollLimit  
 Retrieves the maximum scrolling position of the scroll bar.  
  
```  
int GetScrollLimit();
```  
  
### Return Value  
 Specifies the maximum position of a scroll bar if successful; otherwise 0.  
  
### Example  
  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#cwnd__onhscroll).  
  
##  <a name="cscrollbar__getscrollpos"></a>  CScrollBar::GetScrollPos  
 Retrieves the current position of a scroll box.  
  
```  
int GetScrollPos() const;

 
```  
  
### Return Value  
 Specifies the current position of the scroll box if successful; otherwise 0.  
  
### Remarks  
 The current position is a relative value that depends on the current scrolling range. For example, if the scrolling range is 100 to 200 and the scroll box is in the middle of the bar, the current position is 150.  
  
### Example  
  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#cwnd__onhscroll).  
  
##  <a name="cscrollbar__getscrollrange"></a>  CScrollBar::GetScrollRange  
 Copies the current minimum and maximum scroll-bar positions for the given scroll bar to the locations specified by `lpMinPos` and `lpMaxPos`.  
  
```  
void GetScrollRange(
    LPINT lpMinPos,  
    LPINT lpMaxPos) const;

 
```  
  
### Parameters  
 `lpMinPos`  
 Points to the integer variable that is to receive the minimum position.  
  
 `lpMaxPos`  
 Points to the integer variable that is to receive the maximum position.  
  
### Remarks  
 The default range for a scroll-bar control is empty (both values are 0).  
  
### Example  
  See the example for [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#cwnd__onhscroll).  
  
##  <a name="cscrollbar__setscrollinfo"></a>  CScrollBar::SetScrollInfo  
 Sets the information that the `SCROLLINFO` structure maintains about a scroll bar.  
  
```  
BOOL SetScrollInfo(
    LPSCROLLINFO lpScrollInfo,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 `lpScrollInfo`  
 A pointer to a [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) structure.  
  
 `bRedraw`  
 Specifies whether the scroll bar should be redrawn to reflect the new information. If `bRedraw` is **TRUE**, the scroll bar is redrawn. If it is **FALSE**, it is not redrawn. The scroll bar is redrawn by default.  
  
### Return Value  
 If successful, the return is **TRUE**. Otherwise, it is **FALSE**.  
  
### Remarks  
 You must provide the values required by the `SCROLLINFO` structure parameters, including the flag values.  
  
 The `SCROLLINFO` structure contains information about a scroll bar, including the minimum and maximum scrolling positions, the page size, and the position of the scroll box (the thumb). See the [SCROLLINFO](http://msdn.microsoft.com/library/windows/desktop/bb787537) structure topic in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about changing the structure defaults.  
  
### Example  
 [!code-cpp[NVC_MFC_CScrollBar#3](../../mfc/reference/codesnippet/cpp/cscrollbar-class_3.cpp)]  
  
##  <a name="cscrollbar__setscrollpos"></a>  CScrollBar::SetScrollPos  
 Sets the current position of a scroll box to that specified by `nPos` and, if specified, redraws the scroll bar to reflect the new position.  
  
```  
int SetScrollPos(
    int nPos,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 `nPos`  
 Specifies the new position for the scroll box. It must be within the scrolling range.  
  
 `bRedraw`  
 Specifies whether the scroll bar should be redrawn to reflect the new position. If `bRedraw` is **TRUE**, the scroll bar is redrawn. If it is **FALSE**, it is not redrawn. The scroll bar is redrawn by default.  
  
### Return Value  
 Specifies the previous position of the scroll box if successful; otherwise 0.  
  
### Remarks  
 Set `bRedraw` to **FALSE** whenever the scroll bar will be redrawn by a subsequent call to another function to avoid having the scroll bar redrawn twice within a short interval.  
  
### Example  
  See the example for [CScrollBar::SetScrollRange](#cscrollbar__setscrollrange).  
  
##  <a name="cscrollbar__setscrollrange"></a>  CScrollBar::SetScrollRange  
 Sets minimum and maximum position values for the given scroll bar.  
  
```  
void SetScrollRange(
    int nMinPos,  
    int nMaxPos,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 `nMinPos`  
 Specifies the minimum scrolling position.  
  
 `nMaxPos`  
 Specifies the maximum scrolling position.  
  
 `bRedraw`  
 Specifies whether the scroll bar should be redrawn to reflect the change. If `bRedraw` is **TRUE**, the scroll bar is redrawn; if **FALSE**, it is not redrawn. It is redrawn by default.  
  
### Remarks  
 Set `nMinPos` and `nMaxPos` to 0 to hide standard scroll bars.  
  
 Do not call this function to hide a scroll bar while processing a scroll-bar notification message.  
  
 If a call to `SetScrollRange` immediately follows a call to the `SetScrollPos` member function, set `bRedraw` in `SetScrollPos` to 0 to prevent the scroll bar from being redrawn twice.  
  
 The difference between the values specified by `nMinPos` and `nMaxPos` must not be greater than 32,767. The default range for a scroll-bar control is empty (both `nMinPos` and `nMaxPos` are 0).  
  
### Example  
 [!code-cpp[NVC_MFC_CScrollBar#4](../../mfc/reference/codesnippet/cpp/cscrollbar-class_4.cpp)]  
  
##  <a name="cscrollbar__showscrollbar"></a>  CScrollBar::ShowScrollBar  
 Shows or hides a scroll bar.  
  
```  
void ShowScrollBar(BOOL bShow = TRUE);
```  
  
### Parameters  
 `bShow`  
 Specifies whether the scroll bar is shown or hidden. If this parameter is **TRUE**, the scroll bar is shown; otherwise it is hidden.  
  
### Remarks  
 An application should not call this function to hide a scroll bar while processing a scroll-bar notification message.  
  
### Example  
  See the example for [CScrollBar::Create](#cscrollbar__create).  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)
